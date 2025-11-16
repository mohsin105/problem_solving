#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>adjL[1005];
int disA[1005];

class cmp
{
public:
    bool operator()(pair<int, int>a, pair<int, int>b){
        return a.second > b.second;
    }
};

void dijsktra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int,int>>, cmp>pq;
    pq.push({src,0});
    disA[src] = 0;

    while(!pq.empty())
    {
        //
        pair<int , int > parentP = pq.top();
        int parentN = parentP.first;
        int parentDis = parentP.second;
        pq.pop();

        //

        for(pair<int, int> childP : adjL[parentN])
        {
            int adjN = childP.first;
            int edgeWeight = childP.second;
            if(parentDis + edgeWeight < disA[adjN])
            {
                disA[adjN] = parentDis + edgeWeight;
                pq.push({adjN, disA[adjN]});
            }
        }
    }
}


int main()
{
    // cout<<"very first\n";
    int n,e;
    cin>>n>>e;
    // cout<<n<<" "<<e<<endl;
    for(int i =0; i<e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjL[u].push_back({v,w});
        adjL[v].push_back({u,w});
    }

    for(int i =0; i<n;i++)
    {
        disA[i]=INT_MAX;
    }

    int src;
    cin>>src;
    // cout<<"before call\n";
    dijsktra(src);
    // cout<<"after call\n";
    for(int i =0;i<n;i++)
    {
        cout<<i<<"\t -> "<<disA[i]<<endl;
    }
    return 0;
}


/*Input data

5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1
0


*/