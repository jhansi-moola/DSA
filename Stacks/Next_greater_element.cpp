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
int isEmpty(int *stack,int top)
{
    if(top==-1)
    {
        return 1;
    }
    return -1;
}

void NGE(int *array,int size)
{
    int top=-1;
    int stack[size];
    push(array[0],stack,top,size);
    for (int i = 1; i < size; i++) 
    {
        while(isEmpty(stack,top)==-1 && stack[top] < array[i]) 
        {
            cout <<stack[top]<< " --> " << array[i] << endl;
            pop(stack,top);
        }
        push(array[i],stack,top,size);
        
    }
    while (isEmpty(stack,top) == -1) 
    {
        cout << stack[top] << " --> " << -1 << endl;
        pop(stack,top);
    }
}

int main()
{
    int size;
    cout<<"Enter number of elements in an array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter elements of an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    NGE(array,size);
}              