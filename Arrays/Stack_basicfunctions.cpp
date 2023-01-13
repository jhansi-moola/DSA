#include <iostream>
using namespace std;

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

void peak(int *a,int top,int pos)
{
   
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
    pop(a,top);
    pop(a,top);
    isEmpty(a,top);
    isFull(a,top,size);
    peak(a,top,pos);

}
