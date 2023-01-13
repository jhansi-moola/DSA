/*
Program to implement stack using single queue
*/

#include<iostream>
#include<queue>
using namespace std;

void pq(queue<int> &s)
{
    queue<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.front());
        s.pop();
    }  
    while (temp.empty() == false)
    {
        int t = temp.front();
        cout << "elements in q "<<t <<endl;
        temp.pop();
        s.push(t); 
    }
}

class Stack
{
  queue<int> q;
  public:
  void push(int x){
   q.push(x);
   pq(q);}
  void reverse()
  {
    if(q.empty())
    {
      return;
    }
    int front=q.front();
    cout<<q.front()<<" is popped"<<endl;
    q.pop();
    reverse();
    q.push(front);
  }
  void pop()
  {
    if(q.empty())
    {
      cout<<"no elements to pop"<<endl;
    }
    reverse();
    pq(q);
    cout<<q.front()<<" after reverse is popped"<<endl;
    q.pop();
    reverse();
    pq(q);
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
    //s.pop();
}