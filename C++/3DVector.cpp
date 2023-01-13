/*
Program to implement multidimensional vector(3D)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
int l,m,n;
    cout<<"Enter first dimension"<<endl;
    cin>>l;
    cout<<"Enter second dimension"<<endl;
    cin>>m;
    cout<<"Enter third dimension"<<endl;
    cin>>n;
vector< vector< vector<int> > > vector(l,::vector< ::vector<int> > (m,::vector<int> (n)));
   for(int i=0;i<l;i++)
   {
        for(int j=0;j<m;j++)
        {
            for(int z=0;z<n;z++)
             cin>>vector[i][j][z];
        }
   }
    for(auto vec : vector)
    {
    for(auto it:vec)
    {
        for(auto itr:it)
          cout<<itr<<" ";
    cout<<endl; 
    }
    cout<<endl; 
    }
}