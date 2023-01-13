/*
Program to implement set operations
*/

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void display(set<int> &set)
{
    for (auto it = set.begin(); it !=set.end(); ++it)
        cout << *it<<"\t";
    cout<<endl;
}
void UOSetdisplay(unordered_set<int> &set)
{
    for (auto it = set.begin(); it !=set.end(); ++it)
        cout << *it<<"\t";
    cout<<endl;
}
void msetdisplay(multiset<int> &set)
{
    for (auto it = set.begin(); it !=set.end(); ++it)
        cout << *it<<"\t";
    cout<<endl;
}

void insert(set<int> &set,int *array,int size)
{
   for(int i=0;i<size;i++)
    {
       set.insert(array[i]);
    } 
}

int main() {
    int size;
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter elements of an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    set<int> st;
    insert(st,arr,size);
    cout<<"Elements in set"<<endl;
    display(st);
    //erase functionality
    auto itr=st.begin();
    itr++;
    itr++;
    st.erase(st.begin(),itr);
    st.erase(4);
    cout<<"Elements in set after erasing"<<endl;
    display(st);
    //find
    auto it=st.find(*st.begin());
    cout<<*it;

    //unordered set
    unordered_set<int> set;
    int x;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>x;
        set.insert(x);
    }
    cout<<"Elements in unordered set"<<endl;
    UOSetdisplay(set);
    cout<<"size of set "<<set.size()<<endl;
    set.erase(set.begin());
    UOSetdisplay(set);

    //multiset
    multiset<int> mset;
    int n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>n;
        mset.insert(n);
    }
    msetdisplay(mset);
    mset.erase(2);
    msetdisplay(mset);
    auto iterator=mset.find(4);
    cout<<"Find 4th itr : "<<*iterator<<endl;
    cout<<"Count of 3 "<<mset.count(3);
}