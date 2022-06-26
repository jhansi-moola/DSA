/*
Program to find occurrence of an integer in an array
*/

#include <iostream>
using namespace std;

void occurrence(int *a, int size, int key)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
            count++;
    }
    cout << key << " appeared " << count << " times " << endl;
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
    int keyToFindOccurrence;
    cout << "Enter a key to find its occurrence in an array" << endl;
    cin >> keyToFindOccurrence;
    occurrence(a, arrSize, keyToFindOccurrence);
}