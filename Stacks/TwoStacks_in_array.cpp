/*
Program to implement two stacks in a single array
*/

#include <iostream>
using namespace std;

void push1(int x,int *stack,int &top1,int top2)
{
  if(top1<top2-1)
   {
     top1++;
     stack[top1]=x;
     cout<<x<<" is pushed to stack1"<<endl;
   }
   else
   {
    cout<<"Stack Overflow"<<endl;
   }
}

void push2(int x,int *stack,int top1,int &top2)
{
  if(top1<top2-1)
   {
     top2--;;
     stack[top2]=x;
     cout<<x<<" is pushed to stack2"<<endl;
   }
   else
   {
    cout<<"Stack Overflow"<<endl;
   }
}

void pop1(int *stack,int &top1)
{
    if(top1>=0)
    {
        cout<<"Popped out element is "<<stack[top1]<<endl;
        top1--;
    }
    else
     cout<<"Stack Underflow"<<endl;
}

void pop2(int *stack,int &top2,int size)
{
    if(top2<size)
    {
        cout<<"Popped out element is "<<stack[top2]<<endl;
        top2++;
    }
    else
     cout<<"Stack Underflow"<<endl;
}

int main()
{
    int top1=-1;
    int stackSize;
    cout<<"Enter size of stack"<<endl;
    cin>>stackSize;
    int top2=stackSize;
    int stack[stackSize];
    push1(2,stack,top1,top2);
    push1(4,stack,top1,top2);
    push1(6,stack,top1,top2);
    push2(8,stack,top1,top2);
    push2(10,stack,top1,top2);
    pop1(stack,top1);
    pop2(stack,top2,stackSize);
    pop1(stack,top1);
    
}