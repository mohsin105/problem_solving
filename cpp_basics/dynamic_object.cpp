#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    char name[100];
    double cgpa;
    Student(int roll, char name[],double cgpa)
    {
        this->roll=roll;
        strcpy(this->name,name);
        this->cgpa=cgpa;
    }
};

Student fun()
{
    Student normal(5,"mohsin",3.88);
    return normal;
}

Student* normalStudent()
{

    Student normalStd(5,"mohsin",3.88);
    Student* ptr=&normalStd;
    return ptr;
    //returns the pointer of the object. 
    //Not object itself
}

Student *dynamicStudent()
{
    Student *dynamicStd=new Student(6,"aftab",3.91);
    cout<<"Printing the object from custom function: \n";
    cout<<dynamicStd->roll<<" "<<(*dynamicStd).cgpa<<" "<<dynamicStd->name<<endl;
    return dynamicStd;
}
int main()
{
    Student obj1=fun(); //the entire normal Student object variable gets copied into the obj1. 
    cout<<obj1.roll<<" "<<obj1.name<<" "<<obj1.cgpa<<endl;
    
    
    Student *obj2=normalStudent();
    //as normalStd is not dynamic, so that object will be lost. 
    //so, obj2 will hold no object. 
    //accessing it will give error. 

    Student *obj3=dynamicStudent();

    cout<<"Printing the object from main function: \n";

    cout<<obj3->roll<<" "<<(*obj3).name<<" "<<obj3->cgpa<<endl;

    

    return 0;
}