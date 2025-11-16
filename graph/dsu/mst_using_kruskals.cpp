//uses DSU to ignore unnecessary edges
//uses edge-list representation of graph

#include<bits/stdc++.h>
using namespace std;
int parentA[10005];
int grp_size[10005];
class Edge{
    public:
    int u,v,w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w; //true hole sort hobe na, false hole sort hobe. 
}
void dsu_initialize(int n)
{
    for(int i =0; i<n;i++)
    {
        parentA[i] = -1;
        grp_size[i] = 1;
    }
}

int find_leader(int node)
{
    if(parentA[node] == -1) return node;
    else
    {
        int l = find_leader(parentA[node]);
        parentA[node] = l;
        return l;
    }
}

void union_by_size(int a , int b)
{
    int l1= find_leader(a);
    int l2= find_leader(b);

    if(grp_size[l1] > grp_size[l2])
    {
        parentA[l2] = l1;
        grp_size[l1] += grp_size[l2];
    }
    else
    {
        parentA[l1] = l2;
        grp_size[l2] += grp_size[l1];
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge>edgeList;
    //taking input of graph in edge-list representation. 
    for(int i =0; i<e; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }

    //sorting the edge-list according to edge-weight
    sort(edgeList.begin() , edgeList.end(),cmp);

    int totalCost = 0;
    for(Edge e: edgeList)
    {
        cout<<e.u<<"  "<<e.v<<"  "<<e.w<<endl;

        if(find_leader(e.u) !=find_leader(e.v) )
        {
            union_by_size(e.u , e.v);
            totalCost += e.w;
        }
    }
    cout<<totalCost<<endl;
    return 0;
}
/*

5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5
*/
