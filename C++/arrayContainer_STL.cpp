/*
Program to implement basic operations of array Container(STL)
*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void display(array<int,5> &arr)
{
for (int i=0;i<arr.size();i++)
     {
        cout<<arr.at(i)<<endl;
     }
}

void itrDisplay(array<int,5> &array)
{
    for(auto itr=array.begin();itr<array.end();itr++)
     {
        cout<<*itr<<endl;
     }
}

void itrrevDisplay(array<int,5> &array)
{
    for(auto itr=array.rbegin();itr!=array.rend();itr++)
     {
        cout<<*itr<<endl;
     }
}

int main()
{
    array< int, 5 > arr;
    cout<<"Enter elements of an array "<<endl;
    for (int i=0;i<arr.size();i++)
     {
        cin>>arr.at(i);
     }
    cout<<"Number of elements in array : "<<arr.size()<<endl;
    cout<<"First element in an array : "<<arr.front()<<endl;
    cout<<"Last element in an array : "<<arr.back()<<endl;
    cout<<"Is the array empty "<<arr.empty()<<endl;
    cout<<"Maximum number of elements array can hold "<<arr.max_size()<<endl;
    cout<<"Elements in an array "<<endl;
    display(arr);
    cout<<"Fill or replace elements in array "<<endl;
    arr.fill(2);
    cout<<"Elements in an array "<<endl;
    display(arr);
     array<int,5> arr1;
     arr1.fill(5);
     cout<<"Swapping elements of arr,arr1 "<<endl;
     arr.swap(arr1);
     cout<<"Elements in arr "<<endl;
     display(arr);
     cout<<"Elements in arr1"<<endl;
     display(arr1);
     //Iterators
     array<int,5> array={9,8,7,6,5};
     cout<<"Elements in an array"<<endl;
     itrDisplay(array);
     cout<<"Elements in reverse order"<<endl;
     itrrevDisplay(array);
     sort(array.begin(),array.end());
     cout<<"Elements in array after sorting"<<endl;
     itrDisplay(array);
}