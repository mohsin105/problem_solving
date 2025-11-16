#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int , int>>adjL[n];
    cout<<"Hellow world\n";
    //taking input
    for(int i=0;i<e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjL[u].push_back({v,w});
        
    }
    // cout<<"Hellow world2\n";

    for(int i = 0; i<n; i++)
    {
        cout<<i<<endl;
        for(pair<int, int >p : adjL[i])
        {
            cout<<"\t"<<p.first<<"\t";  //adjacent node
            cout<<p.second<<endl;      //weight of the edge
        }
    }
    return 0;
}

/*input data

5 8
1 2 2
1 3 5
1 4 3
2 3 4
2 0 6
3 4 2
3 0 1
4 0 7

*/