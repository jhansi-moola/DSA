/*
Program for basic operations on queue
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

void enqueue(int x,int *queue,int &rear,int size)
{
    if(rear==size-1)
     cout<<"Queue is full"<<endl;
    else
     {
        rear++;
        queue[rear]=x;
     }
}

void dequeue(int *queue,int &front,int rear)
{
    if(front==rear)
     cout<<"Queue is empty"<<endl;
    else{
        front++;
        int x=queue[front];
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
    dequeue(queue,front,rear);
    enqueue(2,queue,rear,size);
    enqueue(4,queue,rear,size);
    enqueue(6,queue,rear,size);
    enqueue(8,queue,rear,size);
    Display(queue,front,rear,size);
    isEmpty(queue,front,rear);
    isFull(queue,rear,size);
    dequeue(queue,front,rear);
    dequeue(queue,front,rear);
    Display(queue,front,rear,size);

}