#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;
    int adjMat[n][n];
    
    //manually memsetting the matrix
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            adjMat[i][j]=INT_MAX;
            adjMat[i][i]=0;
        }
    }

    //taking input 
    //3 variable for each edge
    for(int i=0; i<e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjMat[u][v]=w;
    }

    //Output 
    for(int i =0; i<n;i++)
    {
        for(int j=0;j<n; j++)
        {
            if(adjMat[i][j]==INT_MAX) cout<<"INF ";
            else cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}