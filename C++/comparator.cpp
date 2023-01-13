// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int,int> &a,pair<int,int> &b)
{
    if(a.first!=b.first)
     {
         if(a.first<b.first)
           return true;
         return false;
     }
    else
    {
        if(a.second>b.second)
         return true;
        return false;
    }
}

int main() {
    int n;
    cout<<"enter no of pairs"<<endl;
    cin>>n;
    vector<pair<int,int> > a;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

}