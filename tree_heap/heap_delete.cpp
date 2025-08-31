#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v, int x)
{
    v.push_back(x);
    int cur_index=v.size()-1;

    while(cur_index!=0)
    {
        int parentIndex=(cur_index-1)/2;

        if(v[parentIndex]<v[cur_index])
        {
            swap(v[parentIndex],v[cur_index]);
        }
        else break;
        cur_index=parentIndex;
    }
}
void delete_heap(vector<int>v)
{

}
void print_heap(vector<int>v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v, x);
    }
    print_heap(v);
    return 0;
}