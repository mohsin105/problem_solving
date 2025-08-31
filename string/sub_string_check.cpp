#include<bits/stdc++.h>
using namespace std;
int main()
{
    string haystack, needle;
    cin>>haystack>>needle;
    cout<<haystack<<" "<<needle<<endl;
    int first=-2;
    for(int i=0;i<haystack.size()-needle.size()+1;i++)
    {
        cout<<"Outer i => "<<i<<endl;
        if(haystack[i]==needle[0])
        {
            // int mayb=i;
            int k=i;
            bool found=true;
            cout<<"Check Match mayb i => "<<i<<endl;
            for(int j=0;j<needle.size();j++)
            {
                cout<<"Inner matching k  j "<<k<<"\t"<<j<<endl;
                if(k==haystack.size())
                {
                    found=false;
                    first=-1;
                    break;
                }
                if(haystack[k]!=needle[j])
                {
                    found=false;
                    break;
                }
                else k++;
            }
            cout<<"k After if the  inner checking happens: "<<k<<endl;
            cout<<"i After if the  inner checking happens: "<<i<<endl;
            if(found==true)
            {
                cout<<"Found is true\n";
                first=i;
                break;
            }
            else if(found==false && i ==haystack.size()-needle.size()+1)
            {
                first=-1;
                
            }
            // else if(first==-1) break;
        }
        else if(i==haystack.size()-needle.size())
        {
            first=-1;
        }
    }
    // if(found==false) first
    cout<<first<<endl;
    return 0;
}



/*


int first=-2;
    for(int i=0;i<haystack.size()-needle.size()+1;i++)
    {
        cout<<"Outer i => "<<i<<endl;
        if(haystack[i]==needle[0])
        {
            int mayb=i;
            bool found=true;
            cout<<"Check Match mayb i => "<<i<<endl;
            for(int j=0;j<needle.size();j++)
            {
                cout<<"Inner matching i  j "<<i<<"\t"<<j<<endl;
                if(i==haystack.size())
                {
                    found=false;
                    first=-1;
                    break;
                }
                if(haystack[i]!=needle[j])
                {
                    found=false;
                    break;
                }
                else i++;
            }
            cout<<"i After if the  inner checking happens: "<<i<<endl;
            if(found==true)
            {
                cout<<"Found is true\n";
                first=mayb;
                break;
            }
            else if(found==false && i ==haystack.size()-needle.size()+1)
            {
                first=-1;
                
            }
            else if(first==-1) break;
        }
    }
    // if(found==false) first


*/