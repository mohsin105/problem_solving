#include<bits/stdc++.h>
using namespace std;

//custom stack system
class myStack{
    public:

    //using Doubly Linked List's STL List for storing stack element
    list<int>li;

    //stack methods : 
    void push(int val)
    {
        // cout<<"Inserted value: "<<val<<endl;
        li.push_back(val);
        // cout<<"New Top of stack: "<<li.front()<<endl;
    }
    void pop()
    {
        li.pop_back();
    }
    int top()
    {
        return li.back();
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {
        return li.empty();
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
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}