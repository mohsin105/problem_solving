#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    cout<<word<<endl;
    int cnt[26]={0};
    for(int i =0;i<word.size();i++)
    {
        //cout<<word[i];//shows the character
        //cout<<word[i]-'a'; //shows the corresponding index of cnt[], for that character
        cnt[word[i]-'a']++;
    }
    cout<<"Char- Count:\n";
    for(char x='a';x<='z';x++)
    {
        if(cnt[x-'a']!=0)
        {
            cout<<x<<"\t"<<cnt[x-'a']<<endl;
        }
        //to show all characters, just remove the condition
    }
    return 0;
}


/*

for(int i=0;i<26;i++)
    {
        if(cnt[i]>0)
        { //printing the ascii value of character and its count
            cout<<i+'a'<<" = "<<cnt[i]<<endl;
        }
    }
*/