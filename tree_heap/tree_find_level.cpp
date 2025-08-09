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
int nodeLevel(Node *root, int x)
{
    //
    queue<pair<Node *, int>>q;
    q.push({root,1});

    //
    while(!q.empty())
    {
        //
        pair<Node *, int> parent=q.front();
        q.pop();
        Node *node=parent.first;
        int level=parent.second;

        //operation with popped front
        if(node->val==x) return level;

        //enqueing children
        if(node->left!=NULL) q.push({node->left, level+1});
        if(node->right!=NULL) q.push({node->right,level+1});
    }
}
int main()
{
    Node *root=btree_input();
    int searchVal;
    cin>>searchVal;
    cout<<"\nPrinting the tree in level order: \n";
    level_order(root);
    int atLevel=nodeLevel(root,searchVal);
    cout<<"\nLevel of node with value "<<searchVal<<" is : "<<atLevel<<endl;
    return 0;
}



//input data
//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
