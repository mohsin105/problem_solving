#include<bits/stdc++.h>
using namespace std;
//storing the graph using adjacency List. Node constraint is 10000
vector<int>adjList[10005];
//keeping track of visited nodes using a boolean array. 
bool vis[10005];
//To store the longest path: 
int path;
//As the target is to find longest path, so using dfs as it is 
//the general traversal algorithm
void dfs(int src)
{
    // path++;
    //marking the node as visited. 
    vis[src]=true;
    //looking for unvisited nodes among the adjacent nodes
    for(int adj: adjList[src])
    {
        if(vis[adj]==false)
        {
            // vis[adj]=true;
            dfs(adj);
            path++;//whenever a new unvisited node found, 
                //that means another edge can be added to the path. 
                //path increases. 
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int e=n-1; //number of edges
    int u, v;
    //taking input of undirected unweighted graph. 
    for(int i =0; i<e; i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    //initially keeping all nodes as not visited. 
    memset(vis, false, sizeof(vis));
    //initially path 0
    path=0;
    //calling dfs with a random node as source
    dfs(u);
    cout<<path<<endl;
    return 0;
}