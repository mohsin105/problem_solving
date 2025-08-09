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

}
void level_order(Node *root)
{
    //
    queue<Node *>q;
    
}
int main()
{
    Node *root=btree_input();
    level_order(root);
    return 0;
}