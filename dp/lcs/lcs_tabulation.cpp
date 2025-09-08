#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s1, s2;
    cin>>s1>>s2;
    int n= s1. size();
    int m= s2.size();
    int dp[n+1][m+1]; //because we need to access dp[n][m] element
    
    //initializing dp array with first row and column as 0
    for(int i=0; i<=n;i++)
    {
        for(int j =0; j<=m+1; j++)
        {
            if(i==0 || j==0) dp[i][j]=0;
        }
    }

    //lcs using tabulation 
    for(int i =1; i<=n; i++) // i for 1st string, j for 2nd string
    {
        for(int j =1; j<=m; j++)//we are at dp[i][j]
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1 + dp[i-1][j-1];
            }
            else
            {
                int op1=dp[i-1][j];
                int op2= dp[i][j-1];
                dp[i][j]= max(op1, op2);
            }
        }
    }

    cout<<dp[n][m];


    //sequence finding . 
    int i=n, j=m;
    string sequence;
    while(i>0)
    {
        if(s1[i-1]==s2[j-1])//if matched, go diagonally backward in the dp array
        {
            sequence.push_back(s1[i-1]);
            i=i-1;
            j=j-1;
        }
        else if(dp[i][j]==dp[i-1][j])
        {
            i=i-1;
        }
        else if(dp[i][j]==dp[i][j-1])
        {
            j=j-1;
        }
    }

    //print the sequence in reverse order and you get the sequence. 

    return 0;
}