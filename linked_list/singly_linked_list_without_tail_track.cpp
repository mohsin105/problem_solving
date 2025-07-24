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

void insert_at_tail(Node *&head, int x)
{
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}

void print_linked_list(Node *head)
{
    cout<<"Printing Linked List: "<<endl;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    cout<<"Printing Done.  "<<endl;
}

int main()
{
    Node *head=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    head->next=b;
    b->next=c;
    print_linked_list(head);
    cout<<"Insert a number at tail :"<<endl;
    int x;
    cin>>x;
    insert_at_tail(head,x);
    print_linked_list(head);
    return 0;
}