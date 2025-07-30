#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &s)
{
    if(s.empty()) return;
    int tmp=s.top();
    s.pop();
    reverseStack(s);
    stack<int>s2;
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    s.push(tmp);
    while(!s2.empty())
    {
        s.push(s2.top());
        s2.pop();
    }
}
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    reverseStack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}