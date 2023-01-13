/*
Program to implement Circular queue
*/

#include <iostream>
using namespace std;

void Display(int *queue, int front, int rear, int size)
{
    int i = front + 1;
    do
    {
        cout << queue[i] << endl;
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}

void isEmpty(int *queue, int front, int rear)
{
    if (front == rear)
        cout << "Queue is empty" << endl;
    else
        cout << "Queue contains elements" << endl;
}

void isFull(int *queue, int front, int rear, int size)
{
    if ((rear + 1) % size == front)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue contains space in it" << endl;
}

void enqueue(int x, int *queue, int front, int &rear, int size)
{
    if ((rear + 1) % size == front)
        cout << "Queue is full" << endl;
    else
    {
        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}

void dequeue(int *queue, int &front, int rear, int size)
{
    if (front == rear)
        cout << "Queue is empty" << endl;
    else
    {
        front = (front + 1) % size;
        int x = queue[front];
    }
}

int main()
{
    int front = 0, rear = 0;
    int size;
    cout << "Enter size of an array" << endl;
    cin >> size;
    int queue[size];
    isEmpty(queue,front,rear);
    isFull(queue,front,rear,size);
    dequeue(queue,front,rear,size);
    enqueue(1, queue, front, rear, size);
    enqueue(2, queue, front, rear, size);
    enqueue(3, queue, front, rear, size);
    enqueue(4, queue, front, rear, size);
    Display(queue, front, rear, size);
    isEmpty(queue,front,rear);
    isFull(queue,front,rear,size);
    dequeue(queue, front, rear, size);
    dequeue(queue, front, rear, size);
    cout << "After dequeue" << endl;
    Display(queue, front, rear, size);
    enqueue(5, queue, front, rear, size);
    enqueue(6, queue, front, rear, size);
    cout << "After enqueue" << endl;
    Display(queue, front, rear, size);
}