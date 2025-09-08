#include<bits/stdc++.h>
using namespace std;
int adjMat[1001][1001];
bool vis[1001];
int n, e;
vector<int>ans;
void dfs(int src)
{
    vis[src]=true;
    for(int j=1; j<=n;j++)
    {
        if(vis[j]==false && adjMat[src][j]!=0)
        {
            dfs(j);
        }
    }
    ans.push_back(src);
}
int main()
{
    cin>>n>>e;
    for(int i =0;i<n;i++)
    {
        int u, v;
        adjMat[u][v]=1;
    }
    memset(vis, false, sizeof(vis));
    for(int i =1; i<=n;i++)
    {
        if(vis[i]==false)
        {
            dfs(i);
        }
    }

    //reverse the dfs vector to get the tp sort. 
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}