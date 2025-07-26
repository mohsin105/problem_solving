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
void print_forward(Node *head)
{
    cout<<"\nPrinting Doubly Linked List forward: \n";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<"\n";
}
void print_backward(Node *tail)
{
    cout<<"\nPrinting Doubly Linked List backward: \n";
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *tail=new Node(50);

    //Manually Making Connection
    head->next=b;
    b->prev=head;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    d->next=tail;
    tail->prev=d;

    print_forward(head);
    print_backward(tail);

    return 0;
}