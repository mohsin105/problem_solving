#include<bits/stdc++.h>
using namespace std;
int weight[1001], value[1001];
int knapsack(int n, int W)
{
    if(n == 0 || W==0) return 0;

    if(weight[n-1]<=W)
    {
        int op1=value[n-1] + knapsack(n-1, W-weight[n-1]);
        int op2= knapsack(n-1, W);
        return max(op1, op2);
    }
    else{
        int op2=knapsack(n-1,W);
        return op2;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i = 0; i<n ; i++)
    {
        cin>>value[i];
    }
    int W;
    cin>>W;
    int ans= knapsack(n,W);
    cout<<"Highest value can be acquired from "<<n<<" elements with "<<W<<" money is "<<ans;
    return 0;
}