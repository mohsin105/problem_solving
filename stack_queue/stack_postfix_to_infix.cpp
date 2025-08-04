#include<bits/stdc++.h>
using namespace std;
int main()
{
    string post;
    stack<string>in;
    cin>>post;
    for(int i=0;i<post.size();i++)
    {
        if(post[i]>='a' && post[i]<='z')
        {
            string s1=""; //character cannot be directly assigned to a string. 
            s1+=post[i];
            in.push(s1);
        }
        if(post[i]=='+' ||post[i]=='-' ||post[i]=='*' ||post[i]=='/' ||post[i]=='^' )
        {
            string s1="", s2="",s3="";
            s1+=in.top();
            in.pop();
            s2+=in.top();
            in.pop();
            s3+='('+s2+post[i]+s1+')';
            in.push(s3);
        }
    }
    cout<<"Final Infix expression: "<<in.top()<<endl;
    return 0;
}