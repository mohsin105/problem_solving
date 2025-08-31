#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;
    vector<pair<int, int>>el(n);
    for(int i =0; i<e; i++)
    {
        int a, b;
        cin>>a>>b;
        el.push_back({a,b});
    }

    for(pair<int, int>p : el)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}