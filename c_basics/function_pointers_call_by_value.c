#include<stdio.h>

void fun(int x)
{
    printf("In the function before change: %d\n",x);
    x=15;
    printf("In the function after change: %d\n",x);
    
}

int funReturn(int x)
{
    printf("In the function before change: %d\n",x);
    x=15;
    printf("In the function after change: %d\n",x);
    return x;
}
int main()
{
    int n=10;
    printf("In Main, Before function call: %d\n", n);
    fun(n);
    printf("In Main, After function call: %d\n\n", n);
    n=funReturn(n);
    printf("In Main, After returned function call: %d\n", n);
    return 0;
}