#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.size()<<endl;
    return 0;
}