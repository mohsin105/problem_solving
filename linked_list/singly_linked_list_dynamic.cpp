#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d= new Node(40);

    //connection 
            //here, the variables are pointers to Node-object. 
            //not Node-object directly. 
    a->next=b;
    b->next=c;
    c->next=d;

    cout<<a->val<<endl;
    cout<<(*a).val<<endl;

    cout<<a->next->val<<endl;
    cout<<(*(*a).next).val<<endl;

    cout<<"Print Dynamic Singly linked list:"<<endl;
    Node *tmp=a;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
    return 0;
}