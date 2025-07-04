#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    char sec;
    int roll;
    int math_marks;
    int eng_marks;
};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].cls>>a[i].sec>>a[i].roll>>a[i].math_marks>>a[i].eng_marks;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Info of "<<i+1<<" student: "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].roll<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }


    return 0;
}