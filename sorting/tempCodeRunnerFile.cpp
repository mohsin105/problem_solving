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
    }
    while(j<rightSize)
    {
        a[cur]=R[j];
        j++;
    }
}