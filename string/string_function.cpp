#include<bits/stdc++.h>
using namespace std;
void change(string &str)
{
    str="world";
}
int main()
{
    string s1="Hellow";
    cout<<"s1 from main function before call: "<<s1<<endl;
    change(s1);
    cout<<"s1 from main function after call: "<<s1<<endl;
    return 0;
}

//in custom function parameter, without the & operator, 
//the modification won't be available globally. 