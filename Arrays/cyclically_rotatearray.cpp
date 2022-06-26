/*
Program to cyclically rotate an array by one
*/

#include <iostream>
using namespace std;

void Display(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}

void lRotateArray(int *a,int size)
{
  int rotatedelement=a[0];
  for(int i=0;i<size;i++)
  {
    a[i]=a[i+1];
  }
  a[size-1]=rotatedelement;
  Display(a,size);
}

void RRotateArray(int *a,int size)
{
  int rotatedelement=a[size-1];
  for(int i=size-2;i>=0;i--)
  {
    a[i+1]=a[i];
  }
  a[0]=rotatedelement;
  Display(a,size);
}

int main()
{
    int arrSize;
    cout << "Enter no of elements in an array" << endl;
    cin >> arrSize;
    int a[arrSize];
    cout << "Enter elements of an array" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> a[i];
    }
    cout<<"Array after left rotation :"<<endl;
    lRotateArray(a,arrSize);
    cout<<"Array after right rotation :"<<endl;
    RRotateArray(a,arrSize);
}