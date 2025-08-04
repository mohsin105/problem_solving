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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_at_tail(head, tail, x);
    }
    print_linked_list(head);
    Node *head2=NULL;
    Node *tail2=NULL;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        
    }
    return 0;
}