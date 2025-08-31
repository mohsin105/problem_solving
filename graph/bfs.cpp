#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool vis[1005];
int level[1005]; //for level tracking
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        //
        int parent=q.front();
        q.pop();
        //
        cout<<"Level: "<<level[parent]<<" "<<parent<<endl;
        //
        for( int adj: adj_list[parent])
        {
            if(vis[adj]==false)
            {
                q.push(adj);
                vis[adj]=true;
                level[adj]=level[parent]+1; //level of adjacent node
            }
        }
    }

}
int main()
{
    int n, e;
    cin>>n>>e;
    
    for(int i =0;i<e;i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);

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