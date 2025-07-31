//Finding min-length sub-array that has sum>=target
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
    cout<<"The actual array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //finding max-length sub-array using brute force technique
    int minLength=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum>=target) //objective is achieved
            {
                minLength=min(minLength,j-i+1);
                break;
            }
        }
    }
    cout<<"Lenght of Minimum Sub array that has sum greater or equal "<<target<<" is: "<<minLength<<endl;
    return 0;
}