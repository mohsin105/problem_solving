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
    cout<<"Before Sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // Selection Sorting 

    for(int i =0;i<n-1;i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            if(a[i]>a[j]) //ascending order
            {
                swap(a[i], a[j]);
            }
        }
    }
    
    cout<<"After sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}