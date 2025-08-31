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
Node *array_to_bst(int a[], int l, int r)
{
    if(l>r)
    {
        Node *root=NULL;
        return root;
    }
    int mid=(l+r)/2;
    Node *root= new Node(a[mid]);

    Node *left=array_to_bst(a,l,mid-1);
    Node *right=array_to_bst(a,mid+1,r);

    root->left=left;
    root->right=right;

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
int main()
{
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node *root=array_to_bst(a, 0, n-1);
    level_order(root);
    return 0;
}