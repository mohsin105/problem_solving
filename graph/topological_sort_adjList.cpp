#include<bits/stdc++.h>
using namespace std;
vector<int>adjList[1001];
bool vis[1001];
vector<int>ans;
void dfs(int src)
{
    vis[src]=true;
    //dfs call for adjancency list
    for(int adj: adjList[src])
    {
        if(vis[adj]==false)
        {
            dfs(adj);
        }
    }
    //adding the current source to answer, at the very end
    ans.push_back(src);

}
int main()
{
    int n, e;
    cin>>n>>e;
    for(int i =0; i<e; i++)
    {
        int u,v; 
        cin>>u>>v;
        adjList[u].push_back(v);
        // adjList[v].push_back(u);
    }

    memset(vis, false, sizeof(vis));
    for(int i =1; i<=n; i++) //range of value of node
    {
        if(vis[i]==false)
        {
            dfs(i);
        }
    }

    //reverse the vector to get the actual ts
    for(int i = ans.size()-1; i >=0; i--)
    {
        cout << ans[i] << " ";
    }

    return 0;
}