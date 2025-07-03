//An array that holds the sequential summation of elements of another array according to index
#include<stdio.h>
int main()
{
    int a[7]={2,6,13,11,17,24,15};
    int ps_A[7];
    ps_A[0]=a[0];

    for(int i=1;i<7;i++)
    {
        ps_A[i]=ps_A[i-1]+a[i];
    }

    for(int i=0;i<7;i++)
    {
        printf("%d ",ps_A[i]);
    }


    //partial sum 
    // Sum of elements from i=2 tp i=5 is
    printf("\n%d\n", ps_A[5]-ps_A[2-1]);
    return 0;
}