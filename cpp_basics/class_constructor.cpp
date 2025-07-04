#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    char name[100];
    double cgpa;
    Student(int r, char nm[],double cg)
    {
        roll=r;
        strcpy(name,nm);
        cgpa=cg;
    }
};
class StudentWithThis
{
    public:
    int roll;
    char name[100];
    double cgpa;
    StudentWithThis(int roll, char name[],double cgpa)
    {
        this->roll=roll;
        strcpy(this->name,name);
        (*this).cgpa=cgpa;
    }
};
/*this => is a keyword that is a pointer to the object instance. 
    so by dereferencing this, you get the object. => *this
    then you access that objects attribute variables    => (*this).attrName
*/
int main()
{
    Student a(5,"Mohsin",3.81);
    cout<<a.roll<<" "<<a.name<<" "<<a.cgpa<<endl;
    
    StudentWithThis b(6,"Ibn Aftab",3.89);
    cout<<b.roll<<" "<<b.name<<" "<<b.cgpa<<endl;
    return 0;
}