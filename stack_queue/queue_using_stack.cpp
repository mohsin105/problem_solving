#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    stack<int>st1;
    void push(int x) {
        stack<int>st2;
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int fr=st1.top();
        st1.pop();
        return fr;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
    
};
int main()
{
    myQueue qu;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        qu.push(x);
    }
    while(!qu.empty())
    {
        cout<<qu.peek()<<" ";
        qu.pop();
    }
    return 0;
}