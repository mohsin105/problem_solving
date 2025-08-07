//Factorial 
#include<bits/stdc++.h>
using namespace std;
int product_number_series(int f)
{
    if(f==1) return 1;
    return f*product_number_series(f-1);
}
int main()
{
    int n;
    cin>>n;
    int product=product_number_series(n);
    cout<<product<<endl;
    return 0; 
}


