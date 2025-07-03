//lexicographical comparision of two strings: 
//Manual process of strcmp() and cpp string class comparision
#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s", a, b);
    printf("%s\n%s\n",a,b);
    int i=0;
    while (1)
    {
        //has any string ended
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Equal\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("a is smaller\n");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("b is smaller\n");
            break;
        }
        //No string ended, now value comparing
        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]>b[i])
        {
            printf("b is smaller\n");
            break;
        }
        else
        {
            printf("a is smaller\n");
            break;
        }
        
    }
    
    return 0;
}