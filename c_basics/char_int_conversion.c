#include<stdio.h>
int main()
{
    char chr='a';
    int x='a';//sets ascii value of 'a' which is 97, to x
    printf("%c \n",chr);
    printf("%d\n",chr); //shows corresponding ascii value of char type vairable chr
    printf("%d \n",x);
    printf("%c\n",x); //shows corresponding character of integer variable x

    int y=66;
    //Mathematical (only add/substract) on char type variable
    printf("%c \n",y);//shows corresponding character of integer variable y
    printf("%d \n",y+1);
    printf("%c \n",y+1);//corresponding character of y+1=67, which is C
    printf("%d \n",chr+1);
    printf("%c \n",chr+1);
    char chr2='a'+1;//'a' equivalent ascii in 97, so 98 whose character is b , is assigned
    printf("%c \n",chr2);
    printf("%d \n",chr2);

    int m='a'-'a';
    printf("%d \n",m);
    int n='c'-'a';
    printf("%d \n",n);


    //printing all alphabet using integer range
    for(int i=0;i<26;i++)
    {
        printf("%c\n", 'a'+i );
    }


    //printing alphabet using character loop
    //and their corresponding ascii and  increasing counting sequence
    
    printf("\nprinting alphabet using character loop: \n");
    printf("Char-ASCII-Count sequence: \n");
    for(char x='a';x<='z';x++)
    {
        printf("%c\t" ,x);
        printf("%d\t",x);
        printf("\t%d\n",x-'a');
    }
    return 0;
}