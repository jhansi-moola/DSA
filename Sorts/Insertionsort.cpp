/*
Program to implement Implement sort
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

void isort(vector<int> &a)
{
    int n=a.size();
    int x,j;
  for(int i=1;i<n;i++) 
  {
    x=a[i];
    j=i-1;
     while(a[j]>x  && j!=-1){
     a[j+1]=a[j];
     j--;
     }
     a[j+1]=x;
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
    isort(a);
    //for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
}