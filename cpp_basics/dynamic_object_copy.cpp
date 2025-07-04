#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    char name[100];
    double cgpa;
    Student(int roll, char name[], double cgpa)
    {
        this->roll=roll;
        strcpy(this->name,name);
        this->cgpa=cgpa;
    }
};

int main()
{
    Student *a=new Student(5,"Mohsin",3.88);
    Student*b =new Student(6,"Ibn Aftab",3.92);
    cout<<a->roll<<" "<<a->name<<" "<<a->cgpa<<endl;
    cout<<b->roll<<" "<<b->name<<" "<<b->cgpa<<endl;

    //here, a and b are two pointers of two object. Not objects themselves. 
    //so to copy b's object to a, we have to dereference them. 
    *a=*b; //b's object is assigned as 'a' pointer's object. 
    
    delete b;
    cout<<a->roll<<" "<<a->name<<" "<<a->cgpa<<endl;
    return 0;
}