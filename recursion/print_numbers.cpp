#include<bits/stdc++.h>
using namespace std;
void print_number(int s,int x)
{
    if(s>x) return;
    cout<<s<<endl;
    // print_number(s+1,x); //works fine
    print_number(++s,x); //works. increment occurs first. then passes value. 
    //print_number(s++,x); //error, infinite loop. passes the current value first. then increments. 
    //so new recursion call does not get the incremented value
}
void print_with_one_variable(int x)
{
    if(x<0) return;
    // print_with_one_variable(--x); //changes the value of x in the current recusion call too. 
    print_with_one_variable(x-1); //does not effect the value of x in the current recusion call. 
    cout<<x<<endl;
}
int main()
{
    int n;
    cin>>n;
    // print_number(0,n);
    print_with_one_variable(n);
    return 0;
}