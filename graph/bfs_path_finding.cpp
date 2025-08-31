#include<bits/stdc++.h>
using namespace std;
vector<int>adjList[1005];
bool vis[1005];
int level[1005];
int parentA[1005];
void bfs_path_finding(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    //
    while(!q.empty())
    {
        //
        int parent = q.front();
        q.pop();
        //
        cout<<parent<<endl;
        //
        for(int adj : adjList[parent])
        {
            if(vis[adj]==false)
            {
                q.push(adj);
                vis[adj]=true;
                level[adj]=level[parent]+1;
                parentA[adj]=parent;
            }
        }
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i =0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src, target;
    cin>>src>>target;
    memset(vis,false,sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parentA, -1, sizeof(parentA));
    bfs_path_finding(src);

    //Path Printing:
    int x=target;
    //in reverse order
    while(x != -1)
    {
        cout<<x<<" ";
        x=parentA[x];
    }

    /*path printing in normal order

    vector<int>path; 
    int x=target;
    while(x != -1)
    {
        path.push_back(x);
        x=parentA[x];
    }
    reverse(path.begin(), path.end());

    for(int p: path)
    {
        cout<<p<<" ";
    }
    
    
    
    */
    return 0;
}