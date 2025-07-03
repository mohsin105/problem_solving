#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        char chL='a'+(ch-'A');
        printf("Lowercasing: %c\n",chL);
    }
    else if(ch>='a' && ch<='z')
    {
        char chU='A'+(ch-'a');
        printf("Uppercasing: %c\n",chU);
    }

    return 0;
}