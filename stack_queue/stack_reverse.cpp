//need two stack. 
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
    stack<int>s2;
    while(!s1.empty())
    {
        int r=s1.top();
        s1.pop();
        s2.push(r);
    }
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    return 0;
}

//mayb can also be done using recursion. 
//how to pass a stack to a custom function. 