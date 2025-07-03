#include<stdio.h>
//Array input in function as a paramter can be handled in two ways
    //1. int *funName
    //2. int funName[]
void fun(int *ar, int sz)
{
    printf("\nArray in custom function : \n");
    for(int i=0;i<sz;i++)
    {
        printf("%d ",ar[i]);
    }
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
    printf("first element value %d\n",arr[0]);
    printf("first element value %d\n",*arr);
    printf("ponter of first element is %p\n",arr);

    printf("Array in main before function call: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    fun(arr,n);
    return 0;
}