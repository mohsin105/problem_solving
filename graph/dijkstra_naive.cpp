#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>adjL[1005];
int disA[1005];
void dijkstra_naive(int src){
    queue<pair<int, int>>q;
    q.push({src,0});
    disA[src]=0;
    while (!q.empty())
    {
        //
        pair<int, int>parentP=q.front();
        q.pop();

        int parentN = parentP.first;
        int parentDis = parentP.second;
        //
        for(pair<int, int>adjP : adjL[parentN])
        {
            int adjN= adjP.first;
            int edgeWeight= adjP.second;
            if(parentDis + edgeWeight < disA[adjN])
            {
                disA[adjN]= parentDis + edgeWeight;
                q.push({adjN, disA[adjN]});
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
        int u,v,w;
        cin>>u>>v>>w;
        adjL[u].push_back({v,w});
        adjL[v].push_back({u,w});
    }

    int src;
    cin>>src;

    for(int i =0; i<n; i++)
    {
        disA[i]= INT_MAX;
    }
    dijkstra_naive(src);

    for(int i =0; i<n;i++)
    {
        cout<<i<<"\t ->"<<disA[i]<<endl;
    }
    return 0;
}