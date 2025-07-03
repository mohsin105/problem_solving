#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    scanf("%s",word);
    printf("Length of the string word: %d\n",strlen(word));
    int isPali=1;
    for(int i=0,j=strlen(word)-1;i<=j;i++,j--)
    {
        if(word[i]!=word[j])
        {
            isPali=0;
            break;
        }
    }

    if(isPali==1)
    {
        printf("The word is palindrome!\n");
    }
    else{
        printf("The word is NOT palindrome!\n");
    }
    return 0;
}