//Complexity O(2^n)
#include<bits/stdc++.h>
using namespace std;
int fib(int x)
{
    if(x<=1) return x;
    return fib(x-1)+fib(x-2);
}
int main()
{
    int n; //n-th term of fibonacci series. 
    cin>>n; //keep it below 8. 
    int ans= fib(n);
    cout<<ans;
    return 0;
}