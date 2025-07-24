//Working with Basic Singly linked list with no constructor 
//functions and 
//Static nodes only
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
};
int main()
{
    Node a,b,c,d;
    a.val=10;
    b.val=20;
    c.val=30;
    d.val=40;
    //connection 
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    cout<<a.val<<endl;
    cout<<b.val<<endl;

    cout<<(*a.next).val<<endl;
    cout<<c.next->val<<endl;

    cout<<"printing static linked list using loop\n";
    Node *tmp=&a;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    return 0;
}