#include<stdio.h>
void print_arr(int sz, int *ar)
{
    printf("\nArray print from custom fucntion : \n");
    for(int i=0;i<sz;i++)
    {
        printf("%d ",ar[i]);
    }
}

void sort_array(int sz, int ar[])
{
    for(int i=0;i<sz-1;i++)
    {
        for(int j=i+1;j<sz;j++)
        {
            if(ar[i]>ar[j])
            {
                int tmp=ar[j];
                ar[j]=ar[i];
                ar[i]=tmp;
            }
        }
    }
    //change done on custom function but 
    //change is applied on the main array globally
}


int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array after taking input: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    print_arr(n,arr);
    sort_array(n,arr);
    printf("\nArray after calling sort function: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}