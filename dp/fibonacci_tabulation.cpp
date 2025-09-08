#include<bits/stdc++.h>
using namespace std;
int fib_dp[100];
int fib(int x)
{
    if(x<=1) return x;
    fib_dp[0]=0;
    fib_dp[1]=1;
    for(int i =2;i<=x;i++)
    {
        fib_dp[i]= fib_dp[i-1]+fib_dp[i-2];
    }
    return fib_dp[x];
}
int main()
{
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
    return 0;
}