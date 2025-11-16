#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    //bubbble sort: 

    for(int i =0;i<n;i++)  // 1 full outer loop iteration-> 1 element sorted
    {
        for(int j=0;j<n-i-1; j++) //thus, with each full iteration , 
        {                          //number of j loop decreases by 1 
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    //after sort
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

