/*
Program to implement stack,queue,list containers basic operations
*/

#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
using namespace std;

void PrintStack(stack<int> &s)
{
    stack<int> temp;
    while (s.empty() == false)
    {
        temp.push(s.top());
        s.pop();
    }  
    while (temp.empty() == false)
    {
        int t = temp.top();
        cout << t << " ";
        temp.pop();
        s.push(t); 
    }
}

int main() {

    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(3);
    st.push(10);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    PrintStack(st);
    
    priority_queue<int> q;
    q.push(4);
    q.push(2);
    q.push(3);
    q.push(10);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    
    
    priority_queue<int,vector<int>,greater<int> > q1;
    q1.push(4);
    q1.push(2);
    q1.push(3);
    q1.push(10);
    cout<<q1.top()<<endl;
    cout<<q1.size()<<endl;
    
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    cout<<"dq"<<dq.back()<<endl;
    cout<<dq.empty()<<endl;
    cout<<dq.size()<<endl;
    cout<<*dq.begin()<<endl;
    for(int i=0;i<dq.size();i++)
     cout<<dq.at(i);

    //Bitset
    bitset<5> b;
    cout<<"enter all bits"<<endl;
    cin>>b;
    cout<<b.all()<<endl;
    cout<<b.any()<<endl;
    cout<<b.count()<<endl;
    cout<<b.flip(2)<<endl;
    cout<<b.none()<<endl;
    b.set(1,0);
    cout<<b<<endl;
    b.set();
    cout<<b<<endl;
    b.reset(2);
    cout<<b<<endl;
    b.reset();
    cout<<b<<endl;
    cout<<b.test(1);


}