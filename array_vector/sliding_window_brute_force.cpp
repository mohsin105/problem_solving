//Find contiguous sub-array of size k which has maximum sum
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
    cout<<"The array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int maxSum=0;
    int max_i,max_j;
    for(int i=0;i<=n-k;i++)
    {
        int currentSum=0;
        for(int j=i;j<i+k;j++)
        {
            currentSum+=a[j];
        }
        if(currentSum>maxSum)
        {
            max_i=i;
            max_j=i+k-1; 
        }
        maxSum=max(maxSum,currentSum);
        
    }
    cout<<"Maximum Sum: "<<maxSum<<endl;
    cout<<"Max sub array: \n";
    for(int i=max_i;i<=max_j;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}