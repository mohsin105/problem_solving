#include<bits/stdc++.h>
using namespace std;
int parentA[10005];
int grp_size[10005];
void dsu_initialize(int n)
{
    for(int i =0; i<n; i++)
    {
        parentA[i]= -1;
        grp_size[i] = 1; //Initially, each element are member of a singular group, made only by itself. 
    }
}

int dsu_find_leader(int node)
{
    if(parentA[node] == -1) return node;
    else
    {
        int l = dsu_find_leader(parentA[node]);     //final leader of the group
        parentA[node] = l;      //connecting each node directly to the leader. not through actual parent. 
        //updating the parent array to indicate to the leader, not the immediate parent. 
        return l;
    }
}


void dsu_union(int a, int b) //naive approach
{
    int l1 = dsu_find_leader(a);
    int l2 = dsu_find_leader(b);
    parentA[l1] = l2;
}
void dsu_union_by_size(int a, int b)
{
    int l1 = dsu_find_leader(a);
    int l2 = dsu_find_leader(b);
    if(grp_size[l1] > grp_size[l2]) //have to check group size based on the leader, because , only leaders grp size gets updated
    {
        parentA[l2] = l1;
        grp_size[l1] = grp_size[l1] + grp_size[l2];
    }
    else
    {
        parentA[l1]= l2;
        grp_size[l2] = grp_size[l2] + grp_size[l1];
    }
}
int main()
{
    //mostly everything is done using custom function . 
    //manually memsetting the parent array and grp_size array is done using custom function. .
    int n;
    cin>>n;
    dsu_initialize(n);
    cout<<dsu_find_leader(0)<<endl;
    cout<<dsu_find_leader(1)<<endl;
    cout<<dsu_find_leader(2)<<endl;
    cout<<dsu_find_leader(3)<<endl;
    cout<<dsu_find_leader(4)<<endl;

    dsu_union_by_size(2,1); //1 becomes leader
    cout<<dsu_find_leader(2)<<endl;
    cout<<grp_size[1]<<endl;
    dsu_union_by_size(2,3); //1 becomes leader of 3
    cout<<dsu_find_leader(3)<<endl;
    cout<<grp_size[1]<<endl;
    dsu_union_by_size(4, 5); //5 becomes leader
    cout<<dsu_find_leader(4)<<endl;
    cout<<grp_size[5]<<endl;
    dsu_union_by_size(4, 6); //5 becomes leader, because 5 is leader 4. 
    cout<<dsu_find_leader(6)<<endl;
    cout<<grp_size[5]<<endl;

    dsu_union_by_size(1,6); //5 becomes leader of both group. 
    cout<<dsu_find_leader(1)<<endl;
    cout<<dsu_find_leader(3)<<endl;





    return 0;
}