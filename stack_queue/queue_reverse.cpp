//final output has to be from a queue, not a stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) //10, 20, 30, 40, 50
    {
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front()); //10 , 20, 30, 40 , 50
        q.pop();
    }

    while(!st.empty())
    {
        q.push(st.top()); // 50, 40, 30 , 20, 10
        st.pop();
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";    // 50, 40, 30 , 20, 10
        q.pop();
    }
    return 0;
}