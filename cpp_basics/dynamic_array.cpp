#include<bits/stdc++.h>
using namespace std;
int* create_array()
{
    int *arr=new int[5];
    cout<<"\nPointer of the first element of the array in custom fun\nbefore value even assigned: "<<arr<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Printing dynamic array from custom func: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nPointer of the first element of the array in custom fun: "<<arr<<endl;
    
    cout<<"Value of the first element through dereferencing: "<<*arr<<endl;
    
    cout<<"Value of the first element through indexing: "<<arr[0]<<endl;
    
    return arr;
}
int main()
{
    int *a=create_array();
    cout<<"\nPointer of the first element of the array in main fun: "<<a<<endl;
    
    cout<<"Printing dynamic array from main func: \n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}