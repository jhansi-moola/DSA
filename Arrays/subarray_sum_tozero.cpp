/*
Program to find subarrays with sum equal to zero
*/

#include <iostream>
using namespace std;

void subArraySumZero(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]+a[j]==0)
            {
                cout<<"{"<<a[i]<<","<<a[j]<<"}"<<endl;
            }
        }
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
    cout<<"List of subarrays whose sum is zero"<<endl;
    subArraySumZero(a,arrSize);
}
