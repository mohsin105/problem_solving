#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l, int m, int r)
{
    int leftSize=m-l+1;
    int rightSize=r-m;
    int L[leftSize],R[rightSize];
    int k=l;
    //populate a temporary L array 
    for(int i=0;i<leftSize;i++)
    {
        L[i]=a[k];
        k++;
    }

    // for(int i=0;i<leftSize;i++)
    // {
    //     cout<<L[i]<<" ";
    // }
    // cout<<endl;
    
    
    //populate the temporary R array
    k=m+1;
    for(int i=0;i<rightSize;i++)
    {
        R[i]=a[k];
        k++;
    }
    // for(int i=0;i<rightSize;i++)
    // {
    //     cout<<R[i]<<" ";
    // }
    // cout<<endl;
    
    
    //Re-populate the original a[] array by sorting elements between L and R array
    int i=0,j=0;
    int cur=l;
    while(i<leftSize && j<rightSize)
    {
        if(L[i]<R[j])
        {
            a[cur]=L[i];
            i++;
        }
        else 
        {
            a[cur]=R[j];
            j++;
        }
        cur++;
    }
    while(i<leftSize)
    {
        a[cur]=L[i];
        i++;
        cur++;
    }
    while(j<rightSize)
    {
        a[cur]=R[j];
        j++;
        cur++;
    }

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
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    merge(a,0,3,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}