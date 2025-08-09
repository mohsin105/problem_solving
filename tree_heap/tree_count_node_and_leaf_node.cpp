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
Node* btree_input()
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
        Node *tmp=q.front();
        q.pop();

        //
        int l,r;
        cin>>l>>r;
        Node *left_node, *right_node;

        if(l==-1) left_node=NULL;
        else left_node=new Node(l);
        
        if(r==-1) right_node=NULL;
        else right_node=new Node(r);

        tmp->left=left_node;
        tmp->right=right_node;


        //
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
    return root;
}
int count(Node *root)
{
    if(root==NULL) return 0;
    int left_count=count(root->left);
    int right_count=count(root->right);
    return 1+left_count+right_count;
}
int count_leaf(Node *root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int l=count_leaf(root->left);
    int r=count_leaf(root->right);
    return l+r;
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
    level_order(root);
    int node_count=count(root);
    cout<<"\nTotal Node in this tree: "<<node_count<<endl;
    int leaf_count=count_leaf(root);
    cout<<"\n Total Leaf Nodes in this tree: "<<leaf_count<<endl;
    return 0;
}

//input data
//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1