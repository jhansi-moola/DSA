/*
Program to find minimum element in rotated and sorted array
*/

#include  <iostream>
using namespace std;

int minimumelement(int *a,int size)
{
    int l=0,h=size-1;
    if(a[l]<=a[h])
      return a[l];
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]<a[mid-1])
         return a[mid];
        else if(a[mid]>a[mid+1])
         return a[mid+1];
        else if(a[l]<=a[mid])
         l=mid+1;
        else if(a[mid]<=a[h])
         h=mid-1;

    }
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
    cout<<"Minimum element "<<minimumelement(a,arrSize);
}