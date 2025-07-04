#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int roll;
    int marks; 
};

bool cmp(Student a,Student b)
{
    //returns true => means sorting/swapping does not happen. 
    //returns false => sorting /swapping happens

    if(a.marks>b.marks) return true;
    else if(a.marks==b.marks)
    {
        if(a.roll<b.roll)
        {
            return true;
        }
        else return false;
    }
    else return false;
}
int main()
{
    Student a[5];
    for(int i=0;i<5;i++)
    {
      cin>>a[i].nm>>a[i].roll>>a[i].marks;
    }
    cout<<"Printing the students list before sort: \n";
    for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    sort(a,a+5,cmp);
    cout<<"Printing the students list after sort: \n";
    for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    
    return 0;
}