#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<"The array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Sliding Window Technique 
    int maxSum=0,currSum=0;
    int max_i,max_j;
    for(int i=0;i<k;i++)
    {
        maxSum+=a[i];
        currSum=maxSum;
    }
    for(int i=k;i<n;i++)
    {
        currSum=currSum+a[i]-a[i-k];
        if(currSum>maxSum)
        {
            max_i=i-k+1; //i-k element ta bad dewa hoise. er porer element theke current sub-array start hoise
            max_j=i;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<"Max sum: "<<maxSum<<endl;
    cout<<"Sub-array of max sum: \n";
    for(int i=max_i;i<=max_j;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}