#include<stdio.h>
int main()
{
    char str1[]="Mohsin";
    printf("%s\n",str1);
    //finding length of str1 string
    int cnt=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        cnt++;
    }
    printf("Length of string str1: %d\n",cnt);

    int str1_len=cnt;

    //copying one string to another
    char name[100];
    for(int i=0;i<str1_len;i++)
    {
        name[i]=str1[i];
    }
    name[str1_len]='\0';
    printf("%s\n",name);
    cnt=0;
    for(int i=0;name[i]!='\0'; i++)
    {
        cnt++;
    }
    printf("%d\n",cnt);

    int name_len=cnt;


    char name2[]="Ibn";
    cnt=0;
    for(int i=0;name2[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d\n",cnt);
    int name2_len=cnt;

    //String Concatanation: 

    name[name_len]=' ';
    for(int i=name_len+1,j=0;i<=name_len+name2_len,j<name2_len;i++,j++)
    {
        name[i]=name2[j];
    }
    name[name_len+name2_len+1]='\0';
    printf("%s",name);
    return 0;
}