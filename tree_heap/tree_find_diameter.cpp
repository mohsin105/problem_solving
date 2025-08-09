//Diameter of the tree (longest path between any two nodes)
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
int diameter=0;
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
int tree_diameter(Node *root)
{
    if(root==NULL) return 0;
    int l=tree_diameter(root->left);  //getting height of left sub-tree
    int r=tree_diameter(root->right); //getting height of right sub-tree
    int cur_d=l+r;  //diameter of currtent Node. Sum of left sub-tree's heigh and right sub-tree's height. 
    diameter=max(diameter,cur_d);
    return 1+max(l,r); //node height logic. returning height of the node. 
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
    cout<<"\nPrinting the tree in level order: \n";
    level_order(root);
    cout<<"\nDiameter of the tree: ";
    int tree_height=tree_diameter(root);  //getting height from the function. but in the process, diameter will be set internally. 
    cout<<diameter<<endl;
    return 0;
}

//getting height from the function. but in the process, diameter will be set internally. 

//Main Concept: 
//Diameter of a node = height of left sub-tree + height of right sub-tree
//height of that same node = 1 + max( height of left sub-tree ,  height of right sub-tree)


//input data 
//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1