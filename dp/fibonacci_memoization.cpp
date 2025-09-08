//Complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int fib_dp[101];
int fib(int x)
{
    if(x<=1) return x;
    if(fib_dp[x]!=-1) return fib_dp[x];
    fib_dp[x]= fib(x-1)+fib(x-2);
    return fib_dp[x];
}
int main()
{
    int n;
    cin>>n; //highest 100
    memset(fib_dp, -1, sizeof(fib_dp));
    int ans=fib(n);
    cout<<ans;
    return 0;
}