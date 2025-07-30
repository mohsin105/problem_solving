#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int>li;
    
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {
        li.pop_front();
    }
    int front()
    {
        return li.front();
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {
        return li.empty();
    }
};
int main()
{
    myQueue qu;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        qu.push(x);
    }
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    qu.pop();
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
        qu.pop();
    }
    cout<<qu.size()<<endl;
}