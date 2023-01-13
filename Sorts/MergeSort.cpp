/*
Program to implement Merge sort
*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> v)
{
    for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
    cout<<endl;
}

void merge(vector<int> &v,int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    vector<int> a(v.size());
    while(i<=mid && j<=h)
    {
      if(v[i]<v[j])a[k++]=v[i++];
      else{a[k++]=v[j++];}
      
    }
    for(;i<=mid;i++)a[k++]=v[i];
    for(;j<=h;j++)a[k++]=v[j];
    for(int x=l;x<=h;x++)v[x]=a[x];
}

void mergesort(vector<int> &v)
{
  int i,l,h,p,mid;
  for(p=2;p<=v.size();p*=2)
  {
    for(i=0;i+p-1<v.size();i+=p)
    {
        l=i;
        h=i+p-1;
        mid=(l+h)/2;
        merge(v,l,mid,h);
    }
  }
  if(p/2<v.size())merge(v,0,p/2-1,v.size()-1);
}

void rmergesort(vector<int> &v,int l,int h)
{
  int mid;
  if(l<h)
  {
    mid=(l+h)/2;
    rmergesort(v,l,mid);
    rmergesort(v,mid+1,h);
    merge(v,l,mid,h);
  }
}

int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    //mergesort(v);
    rmergesort(v,0,v.size()-1);
    display(v);
    
}