#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s1.push(x);
    }


    int newNum;
    cin>>newNum;
    stack<int>s2;
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(newNum);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    return 0;
}