/*
Program to move all negative elements to left and positive to right
*/

#include <iostream>
using namespace std;

void Display(int *a, int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void moveNegToFirst(int *a, int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[j] > 0)
            j--;
        if (i < j)
        {
            if (a[i] > 0 && a[j] < 0)
                swap(&a[i], &a[j]);
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
    moveNegToFirst(a, arrSize);
    cout << "After moving elemts in an array : " << endl;
    Display(a, arrSize);
}