#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s1="Bangladesh";
    cout<<*s1.begin()<<endl;
    cout<<*(s1.end()-1)<<endl;

    string::iterator it;
    for(it=s1.begin();it<s1.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}


// here, `it`=> name of the pointer variable. Name could

// be anything. By dereferencing, we get the elements value