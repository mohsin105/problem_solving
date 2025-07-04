#include<iostream>
int main()
{
    int a=10;
    
    //printing a variable
    std::cout<<a;
    
    
    int b=20;
    //printing multiple variable
    std::cout<<a<<b;       //output: 1020

    
    
    //printing string and variable

    std::cout<<"Hello"<<b;     //output: Hello20

    std::cout<<a<<" "<<b;      //output: 10 20

    
    
    //printing variable in inbetween of strings 

    std::cout<<"Hello "<<b<<" number";     

    
    
    //printing new line: 2 methods

    //1 
    std::cout<<a<<"\n"<<b;

    //2 using endl

    std::cout<<a<< std::endl<<b;    //output 10 and 20 in two separate line
    return 0;
}