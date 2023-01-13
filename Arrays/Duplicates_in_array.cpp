/*
Program to find duplicate elements with its occurrence in an array
*/

#include <iostream>
#include <climits>
using namespace std;

int maxelement(int *a,int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
         max=a[i];
    }
    return max;
}

void duplicate(int *a,int arraysize)
{
    //int size=maxelement(a,arraysize);
    int H[10]={0};
    for(int i=0;i<arraysize;i++)
    {
      H[a[i]]++;
    }
    for(int i=1;i<10;i++)
    {
      if(H[i]>1)
        cout<<i<<" repeated "<<H[a[i]]<< " times"<<endl;
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
    //int hasharrSize=maxelement(a,arrSize);
    //cout<<"Size of hash table : "<<maxelement(a,arrSize)<<endl;
    duplicate(a,arrSize);
}