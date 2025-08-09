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
Node *btree_input()
{
    //
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
int tree_max_height(Node *root)
{
    if(root==NULL) return 0; //empty tree height is considered 0. many people consideres it as -1(edge count convention). 
    int l=tree_max_height(root->left);
    int r=tree_max_height(root->right);
    return 1+max(l,r);
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
    //
}
int main()
{
    Node *root=btree_input();
    level_order(root);
    int tree_height=tree_max_height(root);
    cout<<"\nMax height of tree in node count convention: "<<tree_height<<endl;
    return 0;
}