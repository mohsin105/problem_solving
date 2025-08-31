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


    //before sort
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //insertion sort: 
    for(int i=0;i<n;i++)
    {
        int x=a[i]; //selecting and separately preserving the current element. 
        int j=i-1;
        while(j>=0 && a[j]>x) //comparing with preserved current element. 
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x; //inserting the preserved current element back in the appropriate sorted position in the array. 
    }

    //After sorting: 
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}