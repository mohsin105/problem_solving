#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>>rating;
    int n;
    cin>>n;
    int rated=0;
    for(int i=0;i<n;i++)
    {
        pair<int,int>singlePlayer;
        int a,b;
        cin>>a>>b;
        singlePlayer.first=a;
        singlePlayer.second=b;
        if(a!=b)
        {
            rated=1;
        }
        rating.push_back(singlePlayer);
    }
    if(rated==1) cout<<"rated";
    else if(rated==0)
    {
        int mayb=1;
        for(int i=0;i<n-1;i++)
        {
            if(rating[i].first<rating[i+1].first)
            {
                mayb=0;
                break;
            }
        }
        if(mayb==0)  cout<<"unrated";
        else if (mayb==1) cout<<"maybe";
    }
    return 0;
}