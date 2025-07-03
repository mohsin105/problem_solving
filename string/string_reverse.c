#include<stdio.h>
#include<string.h>
int main()
{
    char name1[]="mohsin";
    printf("Length of name1 string: %d\n", strlen(name1));

    //Two pointers technique: 
    for(int i=0, j=strlen(name1)-1;i<=j;i++,j--)
    {
        char tmp=name1[j];
        name1[j]=name1[i];
        name1[i]=tmp;
    }

    printf("%s\n",name1);
    return 0;
}