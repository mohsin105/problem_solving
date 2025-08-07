#include<bits/stdc++.h>
using namespace std;
//top value added first. initial/lowest value added last
int sum_series(int i,int f, int s)
{
    if(i>f) return s;
    //LongCut: 
    // s=sum_series(i+1,f,s);
    // s=s+i;
    // return s;

    //ShortCut: one line
    return i+sum_series(i+1,f,s);
}
int sum_bottom_up(int f)
{
    if(f==0) return 0;
    return f+sum_bottom_up(f-1);
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    sum=sum_series(1,n,sum);
    cout<<sum<<endl;
    return 0;
}

/*Sum bottom up 
    - recursion call stack starts from f==n. ends with f==0

    - At first , the smaller values gets summed up. 
    Then keeps returning to larger values call. 

    say n=3 , 
    when f==3
        return 3+sum_bottom_up(2) //3+3 =6 
                    ^---------------------------<
                                                |
    when f==2                                   |
        return 2+sum_bottom_up(1)  //2+1 =3  -->
                          ^
                          |--------------------
     when f==1                                 |
        return 1+sum_bottom_up(0) // 1+0 =1 ---
                        ^
    when f==0           |
        return 0       --


*/