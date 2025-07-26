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
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int x)
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
    head=head->prev; //head=newNode also works. 
    cout<<"Inserted At Head!!!\n";
}
void insert_at_tail(Node *&head, Node *&tail, int x)
{
    cout<<"\nInserting at tail: \n";
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<"Inserted at the head of new List!!!\n";
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
    cout<<"Inserted At Tail\n";
}
void insert_at_position(Node *head, Node *tail, int x, int pos)
{
    cout<<"\nInserting at position: \n";
    if(head==NULL)
    {
        cout<<"Invalid Index. List is Empty. Insert at head first\n";
        return;
    }
    Node *newNode=new Node(x);
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
    cout<<"Insertion Done!!!\n";
}
void delete_head(Node *&head, Node *&tail)
{
    cout<<"\nDeleting Head of Doubly Linked List!!\n";
    if(head==NULL)
    {
        cout<<"Head is Already deleted. Link is empty. Nothing to delete\n";
        return;
    }
    Node *del=head;
    head=head->next;
    delete del;
    if(head==NULL)
    {
        tail=NULL;
        cout<<"Head Deleted. List is now empty!!!\n";
        return;
    }
    head->prev=NULL;
    cout<<"Head Deleted!!!\n";
}
void delete_tail(Node *&head, Node *&tail)
{
    cout<<"\nDeleting Tail: \n";
    if(head==NULL)
    {
        cout<<"List is already empty. Nothing to delete!!!\n";
        return;
    }
    Node *del=tail;
    tail=tail->prev;
    delete del;
    if(tail==NULL)
    {
        head=NULL;
        cout<<"Tail Deleted. List is now empty!!!\n";
        return;
    }
    tail->next=NULL;
    cout<<"Tail deleted\n";
}
void delete_from_position(Node *&head, Node *&tail, int pos)
{
    cout<<"\nDeleting from position : \n";
    if(head==NULL)
    {
        cout<<"List is already empty. Nothing to delete\n";
        return;
    }
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node *del=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del;
    cout<<"Deleted form position\n";
}
int size(Node *head)
{
    int cnt=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void print_forward(Node *head)
{
    cout<<"\nPrinting Linked List forward: \n";
    if(head==NULL)
    {
        cout<<"List is already empty!!!\n";
        return;
    }
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<"Printing Done!!!\n";
}
void print_backward(Node *tail)
{
    cout<<"\nPrinting Linked List backward: \n";
    if(tail==NULL)
    {
        cout<<"List is already Empty!!!\n";
        return;
    }
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<"Printing Done!!!\n";
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while(true)
    {
        cout<<"\nWorking with Doubly Linked List: \n";
        cout<<"Option 1 : Insert at head\n";
        cout<<"Option 2 : Insert at tail\n";
        cout<<"Option 3 : Insert at position\n";
        cout<<"Option 4 : Delete head\n";
        cout<<"Option 5 : Delete tail\n";
        cout<<"Option 6 : Delete at position\n";
        cout<<"Option 7 : Print forward\n";
        cout<<"Option 8 : Print Reverse\n";
        cout<<"Option 9 : Show Length of List\n";
        cout<<"Option 10 : Exit\n";
        cout<<"Please Choose an option: ";
        int op;
        cin>>op;
        if(op==1)
        {
            int v;
            cout<<"\nInsert value to be inserted at head: ";
            cin>>v;
            insert_at_head(head,tail,v);
        }
        else if(op==2)
        {
            int v;
            cout<<"\nInsert value to be inserted at tail: ";
            cin>>v;
            insert_at_tail(head,tail,v);
        }
        else if(op==3)
        {
            int v, pos;
            cout<<"\nInsert value and position with a space between them: ";
            cin>>v>>pos;
            if(pos==0)
            {
                insert_at_head(head, tail,v);
            }
            else if(pos>size(head))
            {
                cout<<"\nInvalid Index!!!\n";
            }
            else if(pos==size(head))
            {
                insert_at_tail(head,tail,v);
            }
            else{
                insert_at_position(head, tail,v,pos);
            }
        }
        else if(op==4)
        {
            delete_head(head,tail);
        }
        else if(op==5)
        {
            delete_tail(head, tail);
        }
        else if(op==6)
        {
            int pos;
            cout<<"\nGive position to delete from: ";
            cin>>pos;
            if(pos>=size(head))
            {
                cout<<"Invalid Index!!\n";
            }
            else if(pos==size(head)-1)
            {
                delete_tail(head, tail);
            }
            else if(pos==0)
            {
                delete_head(head, tail);
            }
            else{
                delete_from_position(head, tail,pos);
            }
        }
        else if(op==7)
        {
            print_forward(head);
        }
        else if(op==8)
        {
            print_backward(tail);
        }
        else if(op==9)
        {
            int sz=size(head);
            cout<<"\nLength of the List: "<<sz<<endl;
        }
        else if(op==10)
        {
            break;
        }
        else
        {
            cout<<"\nInvalid Option\n";
        }
    }
    return 0;
}