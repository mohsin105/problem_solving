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
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int x)
{
    Node *newNode=new Node(x);
    //when list is empty
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    tail=tail->next;
}
void print_linked_list(Node *head)
{
    cout<<"Printing Linked list: "<<endl;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    cout<<"Printing Done. "<<endl;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    //How many numbers to input to linked list :
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int x;
        cin>>x;
        insert_at_tail(head,tail,x);
    }
    print_linked_list(head);
    int hd;
    cin>>hd;
    insert_at_head(head,tail,hd);
    print_linked_list(head);
    return 0;
}