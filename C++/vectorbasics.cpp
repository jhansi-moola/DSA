/*
Program to implement basic operations of Vector(STL)
*/

#include <iostream>
#include <vector>
using namespace std;

void itrDisplay(vector<int> &array)
{
    for(auto itr=array.begin();itr<array.end();itr++)
     {
        cout<<*itr<<endl;
     }
     if(array.size()==0)
      cout<<"No elements to display"<<endl;
}

int main()
{
  vector<int> arr;
  cout<<"Size of a vector "<<arr.size()<<endl;
  arr.__emplace_back(1);
  arr.__emplace_back(2);
  arr.__emplace_back(3);
  arr.__emplace_back(4);
  cout<<"Elements in vector"<<endl;
  itrDisplay(arr);
  cout<<"Size of a vector "<<arr.size()<<endl;
  arr.pop_back();
  arr.pop_back();
  cout<<"Elements in vector"<<endl;
  itrDisplay(arr);
  cout<<"Size of a vector "<<arr.size()<<endl;
  vector<int> vec1(4,5);
  cout<<"Elements in vector 1"<<endl;
  itrDisplay(vec1);
  vector<int> vec2(vec1.begin(),vec1.begin()+2);
  cout<<"Elements in vector 2"<<endl;
  itrDisplay(vec2);
  vec2.clear();
  cout<<"Elements in vector 2"<<endl;
  itrDisplay(vec2);
  swap(arr,vec1);
  cout<<"Elements in vector"<<endl;
  itrDisplay(arr);
  cout<<"Elements in vector 1"<<endl;
  itrDisplay(vec1);

  //Member functions of vector
  vector<int> array;
  array.__emplace_back(1);
  array.__emplace_back(2);
  array.__emplace_back(3);
  array.__emplace_back(4);
  cout<<"At function "<<array.at(1)<<endl; // retrives element at given index
  cout<<"Front element "<<array.front()<<endl; // retrives first element
  cout<<"Back element "<<array.back()<<endl; //retrieves last element
  cout<<"Is empty "<<array.empty()<<endl;
  cout<<"size "<<array.size()<<endl;
  array.resize(6);
  cout<<"After using resize,size is "<<array.size()<<endl;
  cout<<"Max size "<<array.max_size()<<endl;
  cout<<"Elements in array "<<endl;
  itrDisplay(array);
  array.assign(6,2);
  cout<<"Elements in array after using assign function"<<endl;
  itrDisplay(array);
  cout<<"Capacity "<<array.capacity()<<endl;
  array.reserve(20);
  cout<<"Capacity "<<array.capacity()<<endl;
  auto itr=array.begin();
  array.insert(itr,0);
  itrDisplay(array);
  array.erase(itr);
  cout<<"After erasing"<<endl;
  itrDisplay(array);

    vector<pair<int,int> > pvec={{1,2},{3,4}};
   cout<<"elements"<<endl;
  for(int i =0;i<pvec.size();i++)
    {
        cout<<"("<<pvec[i].first<<","<<pvec[i].second<<")"<<" ";
    }

}
