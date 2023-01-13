/*
Program to implement Double Ended Queue
*/

#include <iostream>
using namespace std;

void Display(int *queue,int front,int rear,int size)
{
    cout<<"Elements in queue : "<<endl;
    for(int i=front+1;i<=rear;i++)
      cout<<queue[i]<<endl;
}

void isEmpty(int *queue,int front,int rear)
{
    if(front==rear)
     cout<<"Queue is empty"<<endl;
    else
     cout<<"Queue contains elements"<<endl;
}

void isFull(int *queue,int rear,int size)
{
    if(rear==size-1)
     cout<<"Queue is Full"<<endl;
    else
     cout<<"Queue contains space in it"<<endl;
}

void enqueue1(int x,int *queue,int &rear,int size)
{
    if(rear==size-1)
     cout<<"Queue is full"<<endl;
    else
     {
        rear++;
        queue[rear]=x;
     }
}

void enqueue2(int x,int *queue,int &front)
{
    if(front==-1)
     cout<<"front is at -1. Cannot insert"<<endl;
    else
    {
        queue[front]=x;
        front--;
    }
}

void dequeue1(int *queue,int &front,int rear)
{
    if(front==rear)
     cout<<"Queue is empty"<<endl;
    else{
        front++;
        int x=queue[front];
    }
}

void dequeue2(int *queue,int front,int &rear)
{
     if(front==rear)
      cout<<"Queue is empty"<<endl;
     else
      {
        int x=queue[rear];
        rear--;
      }

}


int main()
{
    int front=-1,rear=-1;
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int queue[size];
    isEmpty(queue,front,rear);
    isFull(queue,rear,size);
    dequeue1(queue,front,rear);
    enqueue1(2,queue,rear,size);
    enqueue1(4,queue,rear,size);
    enqueue1(6,queue,rear,size);
    enqueue1(8,queue,rear,size);
    Display(queue,front,rear,size);
    isEmpty(queue,front,rear);
    isFull(queue,rear,size);
    dequeue2(queue,front,rear);
    dequeue2(queue,front,rear);
    dequeue1(queue,front,rear);
    dequeue1(queue,front,rear);
    enqueue2(10,queue,front);
    enqueue2(12,queue,front);
    enqueue2(12,queue,front);
    Display(queue,front,rear,size);
    
}