#include<bits/stdc++.h>
using namespace std;
int disA[1005];
class Edge{
    public:
    int u, v,w;
    Edge(int u, int v , int w){
        this->u=u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin>>n>>e;
    vector<Edge>edgeList;

    //taking input of graph in edge-list representation system. 
    for(int i = 0; i<e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
        //for undirected graph 
        //edgeList.push_back(Edge(v,u,w));

    }
    
    
    //manually memsetting distance array to infinity
    for(int i=0; i<n; i++)
    {
        disA[i]=INT_MAX;
    }

    int src;
    cin>>src;
    disA[src] = 0;
    //performing bellman-ford for n-1 times

    for(int i = 0; i< n-1 ;i++)
    {
        for(Edge e : edgeList)
        {
            if(disA[e.u]<INT_MAX && disA[e.u] + e.w < disA[e.v])
            {
                disA[e.v] = disA[e.u] +e.w;
            }
        }
    }

    //outputting distance of all node from 
    for(int i =0; i<n; i++)
    {
        cout<<"Node "<< i <<" distance -> "<<disA[i]<<endl;
    }

    return 0;
}


/*
4 4
1 3 3
2 1 2
0 2 5
0 3 12
0
*/