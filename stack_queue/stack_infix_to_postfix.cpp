#include<bits/stdc++.h>
using namespace std;
int pre(char op)
{
    if(op == '+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    if(op=='^') return 3;
    else return 0;
}
int main()
{
    string in, post="";
    stack<char>st;
    cin>>in; ////taking input of infix expression
    for(int i=0;i<in.size();i++)
    {
        cout<<"\nCharacter: "<<in[i]<<endl;
        if(in[i]>='a' && in[i]<='z') //character, direct push to final postfix
        {
            post+=in[i];
        }
        else if(in[i]=='(') //first bracket, direct push to stack
        {
            st.push(in[i]);
        }
        else if(in[i]==')')  //second bracket, empty the stack until first bracket is found. 
        {
            while(st.top()!='(')
            {
                post+=st.top();
                st.pop();
            }
            st.pop(); //pop the first bracket to. don't append ) or ( to final postfix
        }
        else if(in[i]=='+' || in[i]=='-' || in[i]=='*' || in[i]=='^' || in[i]=='/') //operator
        {
            if(!st.empty())
            {
                cout<<"\nTop: "<<st.top()<<endl;
                cout<<"Char pre: "<<pre(in[i])<<"\tTop pre: "<<pre(st.top())<<endl;;
            }
            if(st.empty() || st.top()=='(' || pre(in[i])>pre(st.top()))
            {
                if(!st.empty())
                {
                    cout<<"Before push: "<<st.top()<<endl;
                }
                st.push(in[i]);
                cout<<"After push: "<<st.top()<<endl;
            }
            else 
            {
                while(!st.empty() && st.top()!='(' && pre(st.top())>pre(in[i]))
                {
                    if(!st.empty())
                    {
                        cout<<st.top()<<endl;
                    }
                    post+=st.top();
                    st.pop();
                }
                st.push(in[i]);
            }
        }
        cout<<"Postfix after this iteration: "<<post<<endl;
    }
    //iteration done. 
    while(!st.empty())
    {
        post+=st.top();
        st.pop();
    }
    cout<<post<<endl;
    return 0;
}