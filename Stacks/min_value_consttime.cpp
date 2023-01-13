/*
Program to find minimum element of a stack in constant time
*/

#include<iostream>
#include<stack>
using namespace std;

class Minvalue
{
  stack<int> ms;
  stack<int> as;
  public:
  void push(int x)
  {
    ms.push(x);
    if(as.empty())
     as.push(x);
    else{
     if(x<as.top())
      as.push(x);}
  }
  void pop()
  {
    if(ms.top()==as.top())
     as.pop();
    ms.pop();
  }
  int getmin(){
   return as.top();}
};

int main()
{
    Minvalue s;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    cout<<"Min value "<<s.getmin();
}