/*
Program to implement stack using queue
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
     while(!q1.empty())
     {
      q2.push(q1.front());
      cout<<q1.front()<<" is pushed to q2"<<endl;
      q1.pop();
     }
     q1.push(x);
     cout<<x<<" is pushed to q1"<<endl;
     while(!q2.empty())
     {
        q1.push(q2.front());
        cout<<q2.front()<<" is pushed back to q1"<<endl;
        q2.pop();
     }
    }
    void pop()
    {
        if(q1.empty())
         cout<<"No elements to pop"<<endl;
        else{
         cout<<q1.front()<<" is popped"<<endl;
         q1.pop();}
    }
};

int main()
{
    int n,x;
    cout<<"enter n"<<endl;
    cin>>n;
    Stack s;
    for(int i=0;i<n;i++)
    {
     cin>>x;
     s.push(x);
    }
    s.pop();
    s.pop();
    s.pop();
}