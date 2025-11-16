#include<bits/stdc++.h>
using namespace std;
int parentA[10005];
int grp_size[10005];
void dsu_initialize(int n)
{
    for(int i =0 ; i<n; i++)
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
void union_by_size(int a, int b)
{
    int l1 = find_leader(a);
    int l2 = find_leader(b);
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
    bool cycle = false;
    //taking input of graph
    for(int i=0; i<e;i++)
    {
        int u, v;
        cin>>u>>v;
        if(find_leader(u) != find_leader(v))
        {
            union_by_size(u,v);
        }
        else cycle = true;
    }

    if(cycle ==  true) cout<<"Cycle detected\n";
    else cout<<"No cycle detected\n";
    return 0;
}



/*
6 6
0 1
0 2
0 3
3 4
3 5
4 5

*/