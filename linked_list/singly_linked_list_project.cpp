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
void insert_at_head(Node *&head, Node *&tail,int x)
{
    cout<<"\nInserting at head: \n";
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<"\nInserting at head of a new list!!!\n";
        return;
    }
    newNode->next=head;
    head=newNode;
    cout<<"Inserting at head done!!\n";
}
void insert_at_tail(Node *&head, Node *&tail,int x)
{
    cout<<"\nInserting at tail: \n";
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=tail->next;
    cout<<"Inserting at tail done!!!\n";
}
void insert_at_position(Node *&head, Node *&tail, int x, int pos)
{
    //pos=0 is handled in the main. 
    //still if,user calls with any other position while  head is NULL, meaning List empty. 
    if(head==NULL)
    {
        cout<<"\nList is empty. Invalid Index!! Insert at head first.\n";
        return;
    }
    cout<<"\nInserting "<<x<<" at position: \n";
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"\nOops, invalid index!!!\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        insert_at_tail(head,tail,x);
        return;
    }
    Node *newNode= new Node(x);
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"Inserting complete!!!\n";
}
void delete_head(Node *&head, Node *&tail)
{
    cout<<"\nDeleting Head Node\n";
    if(head==NULL)
    {
        cout<<"\nList is already empty. Nothing to delete\n";
        return;
    }
    Node *del=head;
    head=head->next;
    delete del; 
    if(head==NULL)
    {
        tail=NULL;
    }
    cout<<"Head Deleted!!!\n";
}
void delete_from_position(Node *&head, Node *&tail, int pos)
{
    cout<<"\nDeleting From position "<<pos<<endl;
    if(head==NULL)
    {
        cout<<"List is Empty. Nothing to delete!!!\n";
        return;
    }
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Oops, Invalid Index\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<"Oops, Invalid Index!!!\n";
        return;
    }
    Node *del=tmp->next;
    tmp->next=tmp->next->next;
    delete del;
    //in case of last node getting deleted, manually update the tail 
    //when last node gets deleted, tmp becomes the current last node. so tmp->next is now NULL
    //but tail still points to older last node, which is now deleted. we have to update it. 
    if(tmp->next==NULL)
    {
        tail=tmp;
    }
    cout<<"Node Deleted!!!\n";
}
void print_linked_list(Node *head)
{
    if(head==NULL)
    {
        cout<<"\nLinked List empty!!!\n";
        return;
    }
    cout<<"\nPrinting Linked list: \n";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<"\nPrinting Done!!\n";
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        cout<<"Working with Singly Linked List: "<<endl;
        cout<<"Option 1: Insert at tail\n";
        cout<<"Option 2: Insert at head\n";
        cout<<"Option 3: Insert at any position\n";
        cout<<"Option 4: Delete head\n";
        cout<<"Option 5: Delete from any position\n";
        cout<<"Option 6: Print Singly Linked List\n";
        cout<<"Option 7: Exit\n";
        cout<<"\nPlease choose an option : \n";
        int op;
        cin>>op;
        if(op==1)
        {
            int v;
            cout<<"\nInsert value to be inserted at tail: ";
            cin>>v;
            insert_at_tail(head,tail,v);
        }
        else if(op==2)
        {
            int v;
            cout<<"\nInsert value to be inserted at head: "; 
            cin>>v;
            insert_at_head(head,tail,v);  
        }
        else if(op==3)
        {
            int v, pos;
            cout<<"\nEnter value and position with space between numbers: ";
            cin>>v>>pos;
            if(pos==0)
            {
                insert_at_head(head,tail,v);
            }
            else{
                insert_at_position(head,tail,v,pos);
            }
        }
        else if(op==4)
        {
            delete_head(head,tail);
        }
        else if(op==5)
        {
            int pos; 
            cout<<"\nEnter position from which you want to delete: ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head, tail);
            }
            else
            {
                delete_from_position(head,tail,pos);
            }
        }
        else if(op==6)
        {
            print_linked_list(head);
        }
        else if(op==7)
        {
            break;
        }
        else cout<<"Invalid Option!!!\n";
    }
    
    return 0;
}