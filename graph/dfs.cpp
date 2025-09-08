#include<bits/stdc++.h>
using namespace std;
vector<int>adjList[1005];
bool vis[1005];
void dfs(int src)
{
    cout<<src<<endl;
    vis[src]=true;
    for(int adj: adjList[src])
    {
        if(vis[adj]==false)
        {
            dfs(adj);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i =0; i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    dfs(src);

    return 0;
}