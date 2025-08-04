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
void print_reverse(Node *head)
{
    if(head==NULL) return;
    print_reverse(head->next);
    cout<<head->val<<" ";
}
void reverse_list(Node *&head, Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
    cout<<"\nPrinting Linked List in reverse: \n";
    print_reverse(head);
    Node *head2=NULL;
    Node *cur=head;
    reverse_list(head,cur);
    print_linked_list(head);
    return 0;
}


/*My attempt at creating a new List which is reverse of linked list
void reverse_list(Node *head, Node *&head2,Node *&tmp)
{
    if(head==NULL) return;
    reverse_list(head->next,head2,tmp);
    if(head2==NULL)
    {
        head2=head;
        tmp=head2;
    }
    if(tmp!=NULL)
    {
        tmp->next=head;
        tmp=tmp->next;
    }
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
    cout<<"\nPrinting Linked List in reverse: \n";
    print_reverse(head);
    Node *head2=NULL;
    Node *tmp=NULL;
    reverse_list(head,head2,tmp);
    print_linked_list(head2);
    return 0;
}
*/



/*LC 234 attempt 


class Solution {
public:
    ListNode *reverseHead=nullptr;
    ListNode *tmp=nullptr;
    void reverseList(ListNode *head)
    {
        if(head==nullptr) return;
        reverseList(head->next);
        if(reverseHead==nullptr)
        {
            reverseHead=head;
            tmp=reverseHead;
            return;
        }
        //reverseList(head->next);
        if(tmp!=nullptr)
        {
            tmp->next=head;
            tmp=tmp->next;
        }
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode *tmp1=head;
        reverseList(head);
        ListNode *tmp2=reverseHead;
        while(tmp1!=nullptr && tmp2!=nullptr)
        {
            if(tmp1->val !=tmp2->val)
            {
                return false;
                //break;
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        if(tmp1!=nullptr || tmp2!=nullptr)
        {
            return false;
        }
        return true;
    }
};
*/