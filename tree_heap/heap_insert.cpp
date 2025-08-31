#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x); //insert at the leaf of heap-tree/ last of heap-array
        int cur_index=v.size()-1;
        while(cur_index!=0)
        {
            int parent_index=(cur_index-1)/2; //getting the parent elements index from current elements index

            if(v[parent_index]< v[cur_index])  //comparing with parent element
            {
                swap(v[parent_index],v[cur_index]);
            }
            else break;  //if parent element is greater, then job done here. 
            cur_index=parent_index; //when swap occurs, make the current  parent the new current index. 
        }
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}