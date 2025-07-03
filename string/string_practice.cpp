#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  for(int t=1;t<=T;t++)
    {
      string tkt;
      cin>>tkt;
      //cout<<tkt[0]+tkt[1]<<endl;
      int dg1=tkt[0]-'0';
      int dg2=tkt[1]-'0';
      int dg3=tkt[2]-'0';
      int dg4=tkt[3]-'0';
      int dg5=tkt[4]-'0';
      int dg6=tkt[5]-'0';
      int s1=dg1+dg2+dg3;
      int s2=dg4+dg5+dg6;
      if(s1==s2)
      {
        cout<<"YES";
      }
      else cout<<"NO";
      cout<<endl;
    }
  
  
  return 0;
}