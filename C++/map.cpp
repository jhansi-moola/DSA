/*
Program to implement basic operations of map
*/

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

void display(map<string,int> &map)
{
    for (auto it = map.begin(); it !=map.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<"\t"<<endl;
    }
}

void mapdisplay(unordered_map<string,int> &map)
{
    for (auto it = map.begin(); it !=map.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<"\t"<<endl;
    }
}

void mdisplay(multimap<int,int> &map)
{
    for (auto it = map.begin(); it !=map.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<"\t"<<endl;
    }
}

int main()
{
    map<string,int> map;
    map["key1"]=1;
    map["key2"]=2;
    map["key3"]=3;
    map["key4"]=4;
    display(map);
    map.erase("key4");
    display(map);
    cout<<map.empty()<<endl;
    cout<<map.count("key1")<<endl;
    cout<<map.size()<<endl;
    auto it1=map.begin();
    auto it2=map.end();
    it2--;
    cout<<it1->first<<" "<<it1->second<<endl;
    cout<<it2->first<<" "<<it2->second<<endl;
    

    //unordered map

    unordered_map<string,int> uomap;
    uomap["C++"]=1;
    uomap["Javascript"]=1;
    uomap["HTML"]=1;
    uomap["Python"]=1;
    mapdisplay(uomap);
    uomap.erase("Python");
    mapdisplay(uomap);
    cout<<uomap.empty()<<endl;
    cout<<uomap.count("HTML")<<endl;
    cout<<uomap.size()<<endl;

}