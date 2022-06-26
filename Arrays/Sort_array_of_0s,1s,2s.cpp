/*
Program to sort an array of 0's,1's and 2's
*/

#include <iostream>
using namespace std;

void Display(int *a, int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i];
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a,int size)
{
    int low = 0;
    int mid = 0;
    int high = size - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
            case 0:
                swap(a[low++],a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid++],a[high++]);
                break;
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
    cout << "Entered all numbers" << endl;
    sort(a,arrSize);
    Display(a,arrSize);
}