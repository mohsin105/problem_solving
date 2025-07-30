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
        this->prev=NULL;
    }
};
class myQueue{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;

    //queue methods: 
    void push(int val)
    {
        //insert at tail
        Node *newNode=new Node(val);
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
        //delete head
        Node *del=head;
        head=head->next;
        delete del;
        sz--;
        if(head==NULL)
        {
            tail=NULL;
        }
        head->prev=NULL;
    }
    int front()
    {
        //get head
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        return false;
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
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    qu.pop();
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    cout<<qu.size()<<endl;
    return 0;
}