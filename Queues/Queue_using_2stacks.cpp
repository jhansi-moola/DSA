/*
Program to implement queue using two stacks
*/

#include <iostream>
using namespace std;

int isEmpty(int *queue,int front)
{
    if(front==-1)
     return 1;
    else
     return -1;
}

void push(int x,int *stack,int &top,int size)
{
   if(top==size-1)
   {
       cout<<"Stack is full"<<endl;
   }
   else
   {
       top++;
       stack[top]=x;
       cout<<x<<" is pushed"<<endl;
   }
   
}

int pop(int *stack,int &top)
{
    if(top==-1)
    {
        return -1;
    }
    else{
        int x=stack[top];
        top--;
        return x;
    }
}

void enqueue(int x,int *queue,int &rear,int size)
{
    if(rear==size-1)
     cout<<"Stack is full"<<endl;
    else
     {
       push(x,queue,rear,size);
     }
}

void dequeue(int *array,int *s1,int *s2,int &top1,int &top2,int size1,int size2,int size)
{
    if(isEmpty(s2,top2)==1)
    {
        if(isEmpty(s1,top1)==1)
        {
            if(array[size-1]==-1){
             cout<<"No elements left in array to push to stack1,Queue is empty"<<endl;}
            else
            {
             for(int i=0;i<size;i++){
                if(array[i]!=-1){
                 enqueue(array[i],s1,top1,size1);
                 array[i]=-1;}}
            }
            cout<<"Elements pushed to stack2"<<endl;
            for(int i=top1;i>=0;i--)
            {
            push(s1[i],s2,top2,size2);
            pop(s1,top1);
            }
        }
        else{
        cout<<"Elements pushed to stack2:"<<endl;
        for(int i=top1;i>=0;i--)
        {
            push(s1[i],s2,top2,size2);
            pop(s1,top1);
        }}
    }
    cout<<pop(s2,top2)<<" is popped from stack2"<<endl;
}

void Queue(int *array,int size)
{
    int top1=-1,top2=-1;
    int size1,size2;
    cout<<"Enter size of first stack"<<endl;
    cin>>size1;
    cout<<"Enter size of second stack"<<endl;
    cin>>size2;
    int s1[size1],s2[size2];
    cout<<"Elements pushed to stack1 initially"<<endl;
    for(int i=0;i<size1;i++)
    {
        enqueue(array[i],s1,top1,size1);
        array[i]=-1;
    }
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
    dequeue(array,s1,s2,top1,top2,size1,size2,size);
      
}

int main()
{
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter elements of an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    Queue(array,size);
}