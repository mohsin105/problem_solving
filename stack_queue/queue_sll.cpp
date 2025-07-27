#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue{
    public:
    //declaring Singly Linked List to store the Queue elements: 
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;

    //Queue methods: 
    void push(int val)
    {
        //Inserting at tail
        Node *newNode= new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            sz++;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
        sz++;
    }
    void pop()
    {
        //deleting head
        Node *del=head;
        head=head->next;
        delete del;
        sz--;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        //getting the front/head
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
    while (!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    cout<<qu.size();
    return 0;
}