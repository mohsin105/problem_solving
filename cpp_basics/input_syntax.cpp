#include<iostream>
#include<iomanip> //for setprecision
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<a<<endl;
	
	//taking input of multiple variabe
	int b,c;
	cin>>b>>c;
	
	cout<<b<<" "<<c<<endl;
	
	char chr;
	cin>>chr;
	
	
	//input of one word string (char array type string)
	char word[100];
	cin>>word;
	cout<<word<<endl;
	
	//getting the ascii value of a character
	
	int ascii=chr;     //the ascii equivalent value of chr variable is assigned. 
	cout<<ascii<<endl;     //the ascii value of chr 
	

    double big=10.6584653189;
    cout<<fixed<<setprecision(3)<<big<<endl;
	return 0;
}