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
    int target;
    cin>>target;
    cout<<"The original array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //Sliding window technique with variable size
    int start=0;
    int minLength=INT_MAX;
    int sum=0;
    for(int end=0;end<n;end++)
    {
        sum+=a[end]; //adding current new element
        while(sum>=target)
        {
            minLength=min(minLength,end-start+1);
            sum=sum-a[start]; //removing first element of sub-array
            start++; //considering new sub-array after removing first element of sub-array
        }
    }
    cout<<"Minimum length of sub-array that reaches the target: "<<minLength<<endl;
    return 0;
}