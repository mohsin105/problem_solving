#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * btree_input()
{
    int val;
    cin>>val;
    Node *root;
    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node *>q;
    if(root!=NULL) q.push(root);

    //
    while(!q.empty())
    {
        //
        Node *tmp=q.front();
        q.pop();

        //
        int l, r;
        cin>>l>>r;
        Node *left_child, *right_child;

        if(l==-1) left_child=NULL;
        else left_child=new Node(l);

        if(r==-1) right_child=NULL;
        else right_child=new Node(r);

        tmp->left=left_child;
        tmp->right=right_child;

        //
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
    return root;
}
void bst_insert(Node *root, int x)
{
    if(root==NULL)
    {
        root=new Node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left==NULL)
        {
            root->left=new Node(x);
        }
        else 
        {
            bst_insert(root->left,x);
        }
    }
    else if(x>root->val)
    {
        if(root->right==NULL)
        {
            root->right=new Node(x);
        }
        else 
        {
            bst_insert(root->right,x);
        }
    }
}
void level_order(Node *root)
{
    //
    queue<Node *>q;
    q.push(root);

    //
    while(!q.empty())
    {
        //
        Node *tmp=q.front();
        q.pop();

        //
        cout<<tmp->val<<" ";

        //
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
}
int main()
{
    Node *root=btree_input();
    // level_order(root);
    int in;
    cin>>in;
    bst_insert(root, in);
    cout<<endl;
    level_order(root);
    return 0;
}