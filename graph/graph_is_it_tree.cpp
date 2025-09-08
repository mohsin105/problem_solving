#include<bits/stdc++.h>
using namespace std;
//storing the graph using adjacency List. Node constraint is 10000

vector<int>adjList[10005];
//keeping track of visited nodes using a boolean array. 

bool vis[10005];
//keeping track of parent node of each node. 
int par[10005];
//final answer
bool isTree;
//general traversing of tree. 
void bfs(int src)
{
    vis[src]=true;
    for(int adj: adjList[src])
    {
        if(vis[adj]==true)
        {
            //if adjacent node is visited, we have to check 
            //if this adjacent node is the parent of current source or not. 
            //if the adjacent node is the parent, means the current edge is 
            //backward direction due to the graph being undirected graph. 
            //hence, it wont be considered a cycle. 

            //but if the adjacent node is not the parent of current source, 
            //meaning , there are multiple path between these two nodes. 
            //hence, the graph is not a tree. 
            if(par[src]!=adj)
            {
                isTree=false;
                return;
            }
        }
        if(vis[adj]==false)
        {
            par[adj]=src;
            bfs(adj);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int u,v;
    memset(par, -1, sizeof(par));
    for(int i =0; i<e; i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
        // if(par)
    }
    memset(vis, false, sizeof(vis));
    isTree=true;
    bfs(u);
    if(isTree) cout<<"YES";
    else cout<<"NO";
    return 0;
}

//another method -> 
    //if e>=n , then tree. 