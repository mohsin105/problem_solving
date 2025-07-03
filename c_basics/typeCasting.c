#include<stdio.h>
#include<ctype.h>
int main()
{
    int a=5,b=2;
    int ans=a/b;
    float res=(float)a/b;
    float result=a/b;
    float c=2.0;
    float res2=a/c;
    
    printf("%d\n",a/b);
    printf("%f\n",(float)a/b);
    printf("%d\n",ans);
    printf("%f\n",res);
    printf("%f\n",result);
    printf("%f\n",res2);
    
    char chr='a';
    printf("%c\n", toupper(chr));
    char chr2='B';
    printf("%c\n", tolower(chr2));
    char chr3=':';
    printf("%d", isalpha(chr3));
    return 0;
}