#include<bits/stdc++.h>
using namespace std;
int weight[1001], value[1001];
int knapsack_memo[1001][1001];
int knapsack(int n, int W)
{
    if(n==0 || W==0) return 0;
    if(knapsack_memo[n][W]!=-1) return knapsack_memo[n][W];
    
    if(weight[n-1]<=W)
    {
        int op1=value[n-1] + knapsack(n-1, W-weight[n-1]);
        int op2=knapsack(n-1, W);
        knapsack_memo[n][W]=max(op1, op2);
        return max(op1, op2);
    }
    else{
        int op2= knapsack(n-1, W);
        knapsack_memo[n][W]=op2;
        return op2;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>weight[i];
    }
    for(int i =0;i<n;i++)
    {
        cin>>value[i];
    }
    int W;
    cin>>W;
    for(int i =0;i<=n;i++) //populated with size [n+1][W+1]
    {
        for(int j=0; j<=W; j++)
        {
            knapsack_memo[i][j]=-1;
        }
    }
    int ans= knapsack(n,W);
    cout<<ans;
    return 0;
}