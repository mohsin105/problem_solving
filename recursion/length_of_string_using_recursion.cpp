#include<bits/stdc++.h>
using namespace std;
int str_len(char str[],int i)
{
    if(str[i]=='\0') return 0;
    return 1+str_len(str,i+1);
}
int main()
{
    char word[]="Mohsin";
    cout<<word<<endl;
    int length=str_len(word,0);
    cout<<length<<endl;
    return 0;
}