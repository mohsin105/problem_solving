#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    char name[100];
    double cgpa;
};
int main()
{
    Student a;
    a.roll=5;
    char nm[100]="mohsin";
    strcpy(a.name,nm);
    // a.name="mohsin"; //not possible this method
    a.cgpa=3.88;
    cout<<a.roll<<" "<<a.name<<" "<<a.cgpa<<endl;
    
    Student b;
    b.roll=6;
    char nm2[100]="aftab";
    strcpy(b.name,nm2);
    b.cgpa=3.91;
    cout<<b.roll<<" "<<b.name<<" "<<b.cgpa<<endl;

    //object input: 
        //when char-array type string is of single word
    Student userOne;
    cin>>userOne.roll>>userOne.name>>userOne.cgpa;
    cout<<userOne.roll<<" "<<userOne.name<<" "<<userOne.cgpa<<endl;


        //when char-array type string is of multiple word
    
    Student userTwo;
    cin>>userTwo.roll;
    getchar();
    cin.getline(userTwo.name,100);
    cin>>userTwo.cgpa;

    cout<<userTwo.roll<<" "<<userTwo.name<<" "<<userTwo.cgpa<<endl;
    return 0;
}