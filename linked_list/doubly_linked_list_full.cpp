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
void insert_at_head(Node *&head,Node *&tail, int x)
{
    cout<<"\nInserting At head: \n";
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<"Inserted at the head of new list.\n";
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    cout<<"Inserted At Head!!!\n";
}
void insert_at_tail(Node *&head, Node *&tail, int x)
{
    cout<<"\nInserting at tail: \n";
    Node *newNode= new Node(x);
    if(head==NULL)  //phitron used tail==NULL. gpt said (head==NULL || tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return; 
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
    cout<<"Inserted At Tail\n";
}
void insert_at_position(Node *&head, Node *&tail, int x, int pos)
{
    cout<<"\nInserting at position: \n";
    if(pos==0)
    {
        insert_at_head(head, tail, x);
        return;
    }
    if(head==NULL)
    {
        cout<<"\nInvalid Index. List is empty. Insert at head first. \n";
        return;
    }
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid index\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        insert_at_tail(head, tail, x);
        return;
    }
    Node *newNode= new Node(x);
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode; //here, newNode->next is the original tmp->next. So, if original tmp->next was NUll. then we can't access the original tmp->next->prev. 
    newNode->prev=tmp; 
    cout<<"Insertion Done!!!\n";
}
void delete_head(Node *&head, Node *&tail)
{
    cout<<"\nDeleting Head of Doubly Linked List!!\n";
    if(head==NULL)
    {
        cout<<"Invalid Index\n";
        return;
    }
    Node *del=head;
    head=head->next;
    delete del;
    if(head==NULL)
    {
        tail=NULL;
        cout<<"Head Deleted. List is now Empty!!!\n";
        return;
    }
    head->prev=NULL;
    cout<<"Head Deleted!!!\n";
}
void delete_tail(Node *&head, Node *&tail)
{
    cout<<"\nDeleting Tail:\n";
    Node *del=tail;
    tail=tail->prev;
    delete del;
    if(tail==NULL)
    {
        head=NULL;
        cout<<"Tail Deleted . List is Now Empty!!!\n";
        return;
    }
    tail->next=NULL;
    cout<<"Tail Deleted!!!\n";
}
void delete_from_position(Node *&head, Node *&tail, int pos)
{
    cout<<"\nDeleting from position : \n";
    if(pos==0)
    {
        delete_head(head, tail);
        return;
    }
    if(head==NULL)
    {
        cout<<"List is already empty. Nothing to delete!!!\n";
        return;
    }
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid Index\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<"Invalid index\n";
        return;
    }
    if(tmp->next->next==NULL) //tmp is one node before the tail. meaning tail deletion. DLL has special function for this. 
    {
        delete_tail(head, tail);
        return;
    }
    Node *del=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del;
    cout<<"Deleted form position\n";

}
void print_forward(Node *head)
{
    cout<<"\nPrinting Doubly Linked List forward: \n";
    if(head==NULL)
    {
        cout<<"List is Empty!!!\n";
        return;
    }
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node *tail)
{
    cout<<"\nPrinting Doubly Linked List backward: \n";
    if(tail==NULL)
    {
        cout<<"List is Empty!!!\n";
        return;
    }
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
    Node *head=NULL;
    Node *tail=NULL;
    
    insert_at_head(head, tail, 8);
    print_forward(head);
    print_backward(tail);
    

    insert_at_tail(head,tail,10);
    print_forward(head);
    print_backward(tail);
    
    insert_at_tail(head,tail,20);
    print_forward(head);
    print_backward(tail);
    
    insert_at_tail(head, tail, 30);
    print_forward(head);
    print_backward(tail);
    
    insert_at_head(head, tail, 5);
    print_forward(head);
    print_backward(tail);
    
    insert_at_position(head, tail, 25,4);
    print_forward(head);
    print_backward(tail);
    
    insert_at_position(head, tail, 40,6);
    print_forward(head);
    print_backward(tail);
    
    delete_head(head, tail);
    print_forward(head);
    print_backward(tail);
    
    delete_tail(head,tail);
    print_forward(head);
    print_backward(tail);
    
    delete_from_position(head, tail,3);
    print_forward(head);
    print_backward(tail);
    

    return 0;
}