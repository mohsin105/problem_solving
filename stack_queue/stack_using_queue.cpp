//duita queue thakbe. 
//prottekbar input neyar somoy, 
    //1st qw theke pop kore second q te temporarily rakhte hobe. 
    //new element ta 1st qw er 1st e input hobe. 
    //tarpor 2nd qw theke age element gula return hobe 1st qw te. 
#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    queue<int>q1;
    void push(int x) {
        queue<int>q2;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    void pop() {
        q1.pop();
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}