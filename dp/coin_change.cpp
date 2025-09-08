#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int coinType[n];
    for(int i =0; i<n; i++)
    {
        cin>>coinType[i];
    }
    int target;
    cin>>target;
    int coinDp[n+1][target+1];

    //making first row infinity. No coin. 0 coin
    for(int j =1;j<=target;j++)
    {
        coinDp[0][j]=INT_MAX;
    }

    //making first column 0. Target amount 0
    for(int i=0; i<=n;i++)
    {
        coinDp[i][0]=0;
    }

    for(int i =1; i<=n ; i++) // i number of coins
    {
        for(int j=1; j<=target; j++) //j amount target
        {
            if(j>=coinType[i-1]) //target is greater than coin type
            {
                //two options
                    //option 1: take the coin
                    //so, remaining target is j-cointype[i-1]
                    //you can choose the same coin again, as it is unbounded knapsack, hence i remains same 
                int op1=1 + coinDp[i][j-coinType[i-1]]; 

                    //option 2: dont take the coin
                    //target remains same. 
                int op2=coinDp[i-1][j];
                coinDp[i][j]=min(op1, op2);
            }
            else //target is smaller than coin type
            {
                coinDp[i][j]= coinDp[i-1][j];
            }
        }
    }
    cout<<coinDp[n][target];


    //coin finding 

    int i =n, j=target;
    while(i>0)
    {
        while(coinDp[i][j]!=coinDp[i-1][j])
        {
            cout<<coinType[i-1]<<" is selected";
            j=j-coinType[i-1];
        }
        i=i-1;
    }


    return 0;
}