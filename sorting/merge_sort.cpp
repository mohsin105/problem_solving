#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    int leftSize=mid-l+1;
    int rightSize=r-mid;
    int L[leftSize],R[rightSize];
    int k=l;
    for(int i=0;i<leftSize;i++)
    {
        L[i]=a[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<rightSize;i++)
    {
        R[i]=a[k];
        k++;
    }

    int i=0,j=0;
    int cur=l;
    while(i<leftSize && j<rightSize)
    {
        if(L[i]<R[j])
        {
            a[cur]=L[i];
            i++;
        }
        else{
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


void merge_sort(int a[],int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        //right Now, current function er array er mid er dui side nijera sorted hoye eseche. 
        merge(a,l,mid, r);
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
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}