#include<bits/stdc++.h>
using namespace std;
int max_number(int a[],int sz, int i, int maxNumber)
{
    if(i==sz) return maxNumber;
    maxNumber=max_number(a,sz,i+1,maxNumber);
    if(a[i]>maxNumber) return a[i];
    return maxNumber;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int largest=max_number(arr, n,0,mx);
    cout<<largest<<endl;
    return 0;
}