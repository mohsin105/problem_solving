#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int>v;
    //insert at tail
    void push(int x)
    {
        v.push_back(x);
    }
    //remove tail
    void pop()
    {
        v.pop_back();
    }
    //get the tail/last element
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};
int main()
{
    //declaring a stack using our custom myStack system. 
    myStack st;
    int n;
    cin>>n;
    //taking input of the stack 
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<"Current Size of Stack: "<<st.size()<<endl;
    return 0;
}