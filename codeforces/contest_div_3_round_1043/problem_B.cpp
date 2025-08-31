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
		long long int n;
		cin>>n;
		int k=0;
		vector<long long int>ansX;
	
		// long long int d=(long long int)(pow(10,k))+1;
		long long int power10=10;
		long long int d=power10+1;
		while(d<n)
		{
			
			// cout<<"d : "<<d<<endl;
			if(n%d==0)
			{
				long long int x=n/d;
				// cout<<"x: "<<x<<endl;
				ansX.push_back(x);
			}
			// k++;
			// d=(long long int)(pow(10,k))+1;
			power10=power10*10;
			d=power10+1;
		}
	
		if(ansX.empty()) cout<<0;
		else
		{
			cout<<ansX.size()<<endl;
			for(int i=ansX.size()-1;i>=0;i--)
			{
				cout<<ansX[i]<<" ";
			}
			
		}
		if(t<test-1) cout<<endl;
	}
	return 0;
}