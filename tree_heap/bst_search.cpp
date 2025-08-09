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
bool bst_search(Node *root, int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val)
    {
        return bst_search(root->left,x);
    }
    else return bst_search(root->right,x);
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
    // int v;
    // cin>>v; //input nile problem hoy. 
    level_order(root);
    bool find=bst_search(root,6);
    if(find==true) cout<<"\nFound.\n";
    else cout<<"\nNot Found\n";
    return 0;
}