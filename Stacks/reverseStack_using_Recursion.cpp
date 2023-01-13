/*
Program to reverse stack using Recursion
*/

#include <iostream>
using namespace std;

void push(int x,int *stack,int &top,int size)
{
   if(top==size-1)
   {
       cout<<"Stack Overflow"<<endl;
   }
   else
   {
       top++;
       stack[top]=x;
   }
}

void pop(int *stack,int &top)
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int x=stack[top];
        top--;
    }
}

int isEmpty(int *stack,int &top)
{
    if(top==-1)
    {
        return 1;
    }
    else
     return -1;
}

int insertBottom(int x,int *stack,int &top,int size)
{
    if(top==-1)
     push(x,stack,top,size);
    else{
        int a=stack[top];
        pop(stack,top);
        insertBottom(x,stack,top,size);
        push(a,stack,top,size);
    }
}

int reverse(int *stack,int &top,int size)
{
    if(top>=0)
    {
        char x=stack[top];
        pop(stack,top);
        reverse(stack,top,size);
        insertBottom(x,stack,top,size);

    }
}

int main()
{
    int top=-1;
    int size;
    cout<<"Enter size of stack"<<endl;
    cin>>size;
    int stack[size];
    push(1,stack,top,size);
    push(2 ,stack,top,size);
    push(3,stack,top,size);
    push(4,stack,top,size);
    cout<<"Original stack : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<stack[i]<<endl;
    }
    reverse(stack,top,size);
    cout<<"After reverse "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<stack[i]<<endl;
    }
    
}
