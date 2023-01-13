/*
Program for basic operations performed on Stack
*/

#include <iostream>
using namespace std;

void DisplayStack(int *a,int top)
{
    if(top==-1)
     cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"elements in stack are "<<endl;
        for(int i=top;i>=0;i--)
         cout<<a[i]<<endl;
    }
}

void push(int x,int *a,int &top,int size)
{
   if(top==size-1)
   {
       cout<<"Stack Overflow"<<endl;
   }
   else
   {
       top++;
       a[top]=x;
       cout<<x<<" is pushed to stack"<<endl;
   }
}

void pop(int *a,int &top)
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int x=a[top];
        top--;
        cout<<"popped out element "<<x<<endl;
    }
}

void isFull(int *a,int top,int size)
{
    if(top==size-1)
     cout<<"Stack is full"<<endl;
}

void isEmpty(int *a,int top)
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
}

void peek(int *a,int top,int pos)
{
  if(pos<0 || pos>top)
   cout<<"Invalid  position"<<endl;
  else
   cout<<"Element at position "<<pos<<" is "<<a[pos];
}

void stackTop(int *a,int top)
{
    if(top==-1)
     cout<<"Stack is empty"<<endl;
    else
     cout<<"Top most element in stack is "<<a[top]<<endl;
}

int main()
{
    int top=-1;
    int size;
    cout<<"Enter size of stack"<<endl;
    cin>>size;
    int a[size];
    push(3,a,top,size);
    push(5,a,top,size);
    push(7,a,top,size);
    push(9,a,top,size);
    DisplayStack(a,top);
    pop(a,top);
    pop(a,top);
    DisplayStack(a,top);
    isEmpty(a,top);
    isFull(a,top,size);
    peek(a,top,2);
    stackTop(a,top);

}
