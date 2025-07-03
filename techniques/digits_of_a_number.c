#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Entire Number: %d\n",n);
    int x=n;
    while(x!=0)
    {
        int digit=x%10;
        printf("%d ",digit);
        x=x/10;
    }
    return 0;
}