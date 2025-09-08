#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();

    //turn s2 into s1. 
    int editDp[n+1][m+1];
    //initializing first row as 0 to m
    for(int j=0;j<=m;j++)
    {
        editDp[0][j]=j;
    }

    //initializing first column as 0 to n
    for(int i=0;i<=n;i++)
    {
        editDp[i][0]=i;
    }

    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s1[i-1]==s2[j-1]) 
            {//matches, so operation count is equal to 1 less character of both string
                //so , only option here. 
                int op1= editDp[i-1][j-1];
                editDp[i][j]= op1;
            }
            else
            {
                //doesnt match. 
                //operation count will increase by 1. 
                //added with minimum of any previous 3 condition. 
                int op1= editDp[i-1][j-1];
                int op2= editDp[i-1][j];
                int op3= editDp[i][j-1];
                editDp[i][j]=1 + min(op1, op2, op3);
            }

        }
    }


    //Showing Operation
    int i=n, j=m;
    while(i>0)
    {
        if(s1[i-1]==s2[j-1])
        {//go diagonally backward in the dp. no operation or selection here
            i=i-1;
            j=j-1;
        }
        else{
            if(editDp[i][j] == 1 + editDp[i-1][j-1])
            {
                //Not matched, but coming from diagonal, meaning replaced
                cout<<s2[j-1]<<" is replaced by "<<s1[i-1]<<endl;
                i=i-1;
                j=j-1;
            }
            else if(editDp[i][j] == 1 + editDp[i][j-1])
            {//not matched, but coming from left, meaning delete operation
                cout<<s2[j-1]<<" is deleted\n";
                j=j-1;
            }
            else 
            {//coming from top, meaning insert
                cout<<s1[i-1]<<"is insert to "<<s2<<endl;
            }
        }
    }
    return 0;
}