#include<iostream>
using namespace std;
int main()
{
//taking input of single word char-array string
    
    // char word[100];
    // cin>>word;
    // cout<<word<<endl;


/*
    char sentence[100];
    // cin>>sentence; //wrong method. only takes the first word
    cin.getline(sentence,100);
    cout<<sentence<<endl;
*/



/*Taking input of multi-word char-type string
after taking input of another variable*/

    int b;
    char sentence[100];
    // cin>>b;
    // getchar();
    cin.getline(sentence,100);
    cout<<b<<endl<<sentence; 
    return 0;
}