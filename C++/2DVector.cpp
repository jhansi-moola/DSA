/*
Program to implement multidimensional vector
*/

#include <iostream>
#include <vector>
using namespace std;

void display(vector< vector<int> > &vec)
{
  for(auto vector : vec)
  {
    for(auto it:vector)
      cout<<it<<" ";
    cout<<endl; 
  }
}

int main()
{
    vector< vector<int> > vec;
    vector<int> vec1;
    vec1.__emplace_back(1);
    vec1.__emplace_back(2);
    vector<int> vec2;
    vec2.__emplace_back(3);
    vec2.__emplace_back(4);
    vector<int> vec3;
    vec3.__emplace_back(5);
    vec3.__emplace_back(6);
    vec3.__emplace_back(7);
    
    vec.__emplace_back(vec1);
    vec.__emplace_back(vec2);
    vec.__emplace_back(vec3);
    display(vec);

    //vector< vector<int> > vector(10, ::vector<int> (20,0));
    //display(vector);
     int l,m,n;
    cout<<"Enter first dimension"<<endl;
    cin>>l;
    cout<<"Enter second dimension"<<endl;
    cin>>m;
    vector< vector<int> > vector(l,::vector<int> (m));
    for(int i=0;i<l;i++)
   {
        for(int j=0;j<m;j++)
       {
         cin>>vector[i][j];
       }
   }
   display(vector);
}