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
int sz;
void insert_at_head(Node *&head, Node *&tail,int x)
{
    Node *newNode= new Node(x);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        sz++;
        return;
    }
    newNode->next=head;
    head=newNode;
    sz++;
}
void insert_at_tail(Node *&head, Node *&tail, int x)
{
    Node *newNode=new Node(x);
    //when list is empty
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
void insert_at_position(Node *&head, Node *&tail, int x, int pos)
{
    Node *newNode=new Node(x);
    Node *tmp=head;
    //tmp is to stop 1 position before the target pos
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid Index!!!"<<endl;
            return;
        }
    }
    /*
        code works even without the insert_at_tail chekcing
        but gpt said better to do checking. 
    */
    if(tmp->next==NULL)
    {
        insert_at_tail(head,tail,x);
        return;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void delete_head(Node *&head, Node *&tail)
{
    if(head==NULL)
    {
        cout<<"\nNo head available to delete\n";
        return;
    }
    Node *del=head;
    head=head->next;
    delete del;
    //check this section if there is a problem afterwards
    if(head==NULL)
    {
        tail=NULL;
    }
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
void delete_at_position(Node*&head, Node *&tail, int pos)
{
    Node *tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<"Invalid Index!!!\n";
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<"Invalid Index!!!\n";
        return;
    }
    Node *del=tmp->next;
    tmp->next=tmp->next->next;
    delete del;
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    sz=0;
    delete_head(head,tail);
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

    insert_at_position(head,tail,25,3);
    print_linked_list(head);

    insert_at_position(head,tail,45,6);
    print_linked_list(head);

    insert_at_tail(head,tail,50);
    print_linked_list(head);
    //validity check of invalid index. 
    insert_at_position(head,tail,60,9);
    print_linked_list(head);

    delete_head(head,tail);
    print_linked_list(head);

    delete_at_position(head, tail, 2);
    print_linked_list(head);

    delete_at_position(head,tail,6);
    print_linked_list(head);
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=next;
//     }
// };
// void insert_at_head(Node *&head, Node *&tail,int val)
// {
//     cout<<"\nInserting at head: \n";
//     Node *newNode= new Node(val);
//     if(head==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     newNode->next=head;
//     head=newNode;
//     cout<<"\nInserting at head done.  \n";
// }
// // void insert_at_tail(Node *&head, Node *&tail, int val)
// // {
// //     cout<<"\nInserting  at tail: "<<val<<endl;
// //     Node *newNode=new Node(val);
// //     if(head==NULL)
// //     {
// //         head=newNode;
// //         tail=newNode;
// //         return;
// //     }
// //     tail->next=newNode;
// //     tail=tail->next;
// //     cout<<"\nInsertion at tail done.\n";
// // }
// void insert_at_tail(Node *&head, Node *&tail, int x)
// {
//     Node *newNode=new Node(x);
//     //when list is empty
//     if(head==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }

//     tail->next=newNode;
//     tail=tail->next;
// }
// void print_linked_list(Node *head)
// {
//     cout<<"Printing Singly Linked List: \n";
//     if(head==NULL)
//     {
//         cout<<"\nList is currently empty!!\n";
//         return;
//     }
//     Node *tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<"\nPrinting Done. "<<endl;
// }
// int main()
// {
//     Node *head=NULL;
//     Node *tail=NULL;
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int x;
//         cin>>x;
//         insert_at_tail(head,tail,x);
//     }
//     print_linked_list(head);
//     // int hd;
//     // cin>>hd;
//     // insert_at_head(head,tail,hd);
//     // print_linked_list(head);
//     return 0;
// }