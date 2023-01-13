/*
Program to find majority element in an array
*/

#include<iostream>
using namespace std;

void majorityelement(int *a,int size)
{
  int count,element=0;
  for(int i=0;i<size;i++)
  {
   if(count==0)
    element=a[i];
   if(element==a[i])
    count++;
   else
    count--;
  }
  cout<<"Majority element "<<element<<endl;
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
    majorityelement(a,arrSize);
}