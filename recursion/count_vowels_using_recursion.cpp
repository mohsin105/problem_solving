#include<bits/stdc++.h>
using namespace std;
int str_len(char str[], int i)
{
    if(str[i]=='\0') return 0;
    return 1+str_len(str,i+1);
}
int vowels_count(char str[], int i)
{
    if(str[i]=='\0') return 0;
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')
    {
        return 1+vowels_count(str, i+1);
    }
    else return vowels_count(str,i+1);
}
int main()
{
    char word[]="mohsinibnaftabcountvowels";
    cout<<word<<endl;
    int length=str_len(word,0);
    cout<<length<<endl;
    int vowels=vowels_count(word,0);
    cout<<vowels<<endl;
    return 0;
}