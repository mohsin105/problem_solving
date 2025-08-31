#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    for(int t=0;t<test;t++)
    {
        int aLen,bcLen;
        cin>>aLen;
        string a,b,c;
        cin>>a;
        cin>>bcLen;
        cin>>b;
        cin>>c;
        for(int i=0;i<bcLen;i++)
        {
            if(c[i]=='V')
            {
                //insert at begin
                string chr="";
                chr+=b[i];
                a.insert(0,chr);
            }
            else if(c[i]=='D')
            {
                a.push_back(b[i]);
            }
        }
        if(t==test-1) cout<<a;
        else cout<<a<<endl;
    } 
	return 0;
}