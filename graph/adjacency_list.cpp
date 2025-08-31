#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adjL[n];
    for(int i =0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }

    for(int i=0; i<n;i++)
    {
        cout<<i<<"\t";
        for(int j=0;j<adjL[i].size();j++)
        {
            cout<<adjL[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*input
6 6
0 1
1 5
0 4
0 3
3 4
2 4

*/