#include<bits/stdc++.h>
using namespace std;
void print_array(int arr[],int sz, int i)
{
    if(i==sz) return;
    cout<<arr[i]<<endl;
    print_array(arr,sz,i+1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print_array(a,n,0);
    return 0;
}

//just call the recursion before printing current element. 
//and you will have array printed in reverse order. 