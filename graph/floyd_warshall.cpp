//uses adjacency matrix
//must use long long int for matrix type
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    long long int graph[n][n];

    //manually memsetting the matrix graph. 
    for(int i =0; i<n;i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i==j)
            {
                graph[i][j]=0;
            }
            else graph[i][j]=INT_MAX;
        }
    }

    //taking input of the graph in matrix representation 
    for(int i = 0; i< e; i++)
    {
        long long int u , v, w;
        cin>>u>>v>>w;
        graph[u][v]=w;
    }

    for(int i = 0; i<n ;i++)
    {
        for(int j= 0; j<n ; j++)
        {
            if(graph[i][j]==INT_MAX) cout<<"INF\t";
            else cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }

    //floyd-warshall algorithm 
    for(int k =0 ; k<n ;k++)
    {
        for(int u =0; u<n ;u++)
        {
            for(int v = 0; v<n; v++)
            {
                if(graph[u][k] + graph [k][v] < graph[u][v])
                {
                    graph[u][v] = graph[u][k]+ graph[k][v];
                }
            }
        }
    }

    for(int i = 0; i<n ;i++)
    {
        for(int j= 0; j<n ; j++)
        {
            if(graph[i][j]==INT_MAX) cout<<"INF\t";
            else cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}