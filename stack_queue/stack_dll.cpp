#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
//custom stack system: 
class myStack{
    public:
    //declaring the linked list to store stack elements
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;

    //stack methods: 
    void push(int val)
    {
        //insert at tail
        Node *newNode= new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=tail->next;
        sz++;
    }
    void pop()
    {
        //delete tail
        Node *del=tail;
        tail=tail->prev;
        delete del;
        sz--;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next=NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
int main()
{
    //declaring a stack of our custom stack system
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
    cout<<st.size()<<endl;
    return 0;
}