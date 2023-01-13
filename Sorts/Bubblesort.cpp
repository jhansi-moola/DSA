/*
Program to implement Bubble sort
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

void bsort(vector<int> &a)
{
  int n=a.size();
  int flag=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){swap(a[j],a[j+1]);
       flag=1;}
    }
    if(flag==0){
     cout<<"List is already sorted"<<endl;
     break;
   }
  }
}

int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
      cin>>a[i];
    bsort(a);
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
}