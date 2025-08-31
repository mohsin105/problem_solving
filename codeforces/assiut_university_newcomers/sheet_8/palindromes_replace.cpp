#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int pali=1;
    for(int i=0, j=s.length()-1;i<=j;i++,j--)
    {
        if(s[i]=='?')
        {
            if(s[j]=='?')
            {
                s[i]='a';
                s[j]='a';
            }
            else s[i]=s[j];
        }
        if(s[j]=='?')
        {
            s[j]=s[i];
        }
        if(s[i]!=s[j])
        {
            pali=0;
            break;
        }
    }
    // cout<<s<<endl;
    if(pali==1) cout<<s;
    else cout<<-1;
    return 0;
}