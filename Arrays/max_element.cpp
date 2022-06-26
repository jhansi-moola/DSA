/*
Given an array arr of size N, the task is to
find the largest element in the given array.
Source: https://www.geeksforgeeks.org/c-program-find-largest-element-array/

Time complexity: O(n)
Space complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;

void maxelement(int *a, int sz)
{
    int max = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << "Maximum element is: " << max << endl;
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
    maxelement(a, arrSize);
}