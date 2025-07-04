#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int roll;
    int marks;
};
int main()
{
    Student a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i].nm>>a[i].roll>>a[i].marks;
    }
    
    
    //printing all objects of that array
    for(int i=0;i<5;i++)
    {
      cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    //Getting student object with maximum and minimum number. 
    Student mn;
    Student mx;
    mn.marks=INT_MAX;
    mx.marks=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(mn.marks>a[i].marks)
        {
            mn=a[i];
        }
        if(mx.marks<a[i].marks)
        {
            mx=a[i];
        }
    }

    cout<<"Min number holder "<<mn.nm<<" "<<mn.roll<<" "<<mn.marks<<endl;
    cout<<"Maximum number holder is "<<mx.nm<<" "<<mx.roll<<" "<<mx.marks<<endl;

    //Manually sorting according to Marks

    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
            else if(a[i].marks == a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }


    //finally printing the sorted array of objects
    for(int i=0;i<5;i++)
    {
        cout<<a[i].nm<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }


    return 0;
}


/* Input data: 
Alice 1 85
Bob 4 90
Clara 3 78
David 2 90
Eve 5 92
*/