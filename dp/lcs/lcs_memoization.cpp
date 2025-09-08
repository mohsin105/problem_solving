#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001]; //dp array
int lcs(string s1, string s2 , int i, int j)
{
    if(s1[i]=='\0' || s2[j]=='\0') return 0;

    if(dp[i][j]!=-1) return dp[i][j];  //dp return 

    if(s1[i]==s2[j])
    {
        int op1 = 1 +lcs(s1,s2, i+1, j+1);
        return op1;
    }
    else
    {
        int op1= lcs(s1, s2, i+1, j);
        int op2 = lcs(s1, s2, i, j+1);
        return max(op1, op2);
    }

}
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;

    //dp array initialization
    for(int i =0; i<=s1.size(); i++)
    {
        for(int j = 0; j<=s2.size(); j++)
        {
            dp[i][j]=-1;
        }
    }
    int ans=lcs(s1, s2, 0, 0);
    cout<<ans;
    return 0;
}