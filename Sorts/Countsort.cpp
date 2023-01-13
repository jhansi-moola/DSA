/*
Program for count sort
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

void countsort(vector<int> &v)
{
  int max=*max_element(v.begin(),v.end());
  vector<int> h(max+1);
  for(int i=0;i<h.size();i++)h[i]=0;
  for(int i=0;i<v.size();i++)h[v[i]]++;
  int i=0,j=0;
  while(i<=max)
  {
    if(h[i]!=0){v[j++]=i;
    h[i]--;}
    else{ i++; }
  }
}

int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    countsort(v);
    display(v);
}