/*
Program to reverse a string using stack
*/

#include<iostream>
#include<stack>
using namespace std;

void reverse(string &s)
{
    stack<char> s1;
    for(char ch:s){
     s1.push(ch);}
    for(int i=0;i<s.size();i++)
    {
        s[i]=s1.top();
        s1.pop();
    }
     
}

int main()
{
    string s="Hello World";
    reverse(s);
    cout<<s;
}