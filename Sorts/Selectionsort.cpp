/*
Program to implement Selection sort
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

void display(vector<int> a)
{
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
}

void ssort(vector<int> &a)
{
    int i,j,k;
   for(i=0;i<a.size()-1;i++)
   {
    for(j=i,k=i;j<a.size();j++){
        if(a[j]<a[k])k=j;
    }
    swap(a[i],a[k]);
   }
    display(a);
}


int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
      cin>>a[i];
    ssort(a);
    //for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
}