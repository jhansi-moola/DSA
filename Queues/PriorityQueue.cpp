/*
Program to implement Double Ended Queue
*/

#include <iostream>
using namespace std;

void Display(int *queue,int front,int rear,int size)
{
    if(front==rear)
    {
     cout<<"No elements in queue"<<endl;
    }
    else
    {
    cout<<"Elements in queue : "<<endl;
    for(int i=front+1;i<=rear;i++)
      cout<<queue[i]<<endl;
    }
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

void priorityQueue(int *array,int size)
{
    int front=-1,rear=-1;
    int noOfPE;
    int queue[size];
    
    enqueue(array[0],queue,rear,size);
    for(int i=1;i<size;i++)
    {
        if(array[i]>queue[rear])
         {
            enqueue(array[i],queue,rear,size);
         }
        else{
            int j=rear;
            while(array[i]<queue[j] && j>=0)
            {
              j--;
            }
            for(int z=rear;z>j;z--)
            {
                queue[z+1]=queue[z];
            }
            queue[j+1]=array[i];
            rear++;
        }
        
    }
    Display(queue,front,rear,size);
    cout<<"Number of priority elements to be deleted"<<endl;
    cin>>noOfPE;
    for(int i=front+1;i<noOfPE;i++)
     dequeue(queue,front,rear);
    Display(queue,front,rear,size);

}

int main()
{
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter elements of an array"<<endl;
    //Considering elements itself are their priorities
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    priorityQueue(array,size);

}