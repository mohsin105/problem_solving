#include<stdio.h>
void fun(int *x)
{
    printf("Value in custom fun before change %d\n",*x);
    printf("Address in custom fun before change %p\n\n",x);
    *x=16;
    printf("Value in custom fun after change %d\n",*x);
    printf("Address in custom fun after change %p\n\n",x);
}
int main()
{
    int n=10;
    printf("Value in main fun before function call: %d\n",n);
    printf("Address in main fun function call: %p\n\n",&n);
    fun(&n);
    printf("Value in main fun after function call: %d\n",n);
    printf("Address in main fun  after function call: %p\n\n",&n);

    return 0;
}