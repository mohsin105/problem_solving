#include<bits/stdc++.h>
using namespace std;
vector<int>adjList[1005];
bool vis[1005];
void bfs_with_level_pair(int src)
{
    //
    queue<pair<int, int>>q;
    q.push({src, 0});
    vis[src]=true;
    //
    while(!q.empty())
    {
        //
        pair<int, int>parent= q.front();
        q.pop();
        //
        cout<<""<<parent.first<<" Level: "<<parent.second<<endl;
        //Enqueing Adjacent Node as pairs, coupled with their level. 
        for(int adj: adjList[parent.first])
        {
            if(vis[adj]==false)
            {
                q.push({adj, parent.second+1});
                vis[adj]=true;
            }
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
    }
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    bfs_with_level_pair(src);
    return 0;
}



/*
7 8
0 2
0 1
0 4
1 2
1 5
1 3
3 4
3 6
0

*/