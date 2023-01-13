/*
Program for quick sort
*/

#include<iostream>
#include<vector>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void display(vector <int> v)
{
    for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
    cout<<endl;
}

//This code is only when we select first element as pivot

int partition(vector<int> &v,int i,int j)
{
    int pivot=i;

    do
    {
        do{i++;}while(v[i]<=v[pivot]);
        while(v[j]>v[pivot])j--;
        if(i<j)
         swap(v[i],v[j]);
        
    } while(i<j);
    swap(v[pivot],v[j]);
    return j;
}

void qsort(vector<int> &v,int l,int h)
{
    int x;
    if(l<h)
    {
        x=partition(v,l,h);
        qsort(v,l,x-1);
        qsort(v,x+1,h);
    }
}

int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int l=0,h=n-1;
    qsort(v,l,h);
    display(v);
}