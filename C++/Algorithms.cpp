/*
Program to implement algorithms in STL
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

void Sdisplay(int *arr,int size)
{
    for(int i=0;i<size;i++)
     cout<<arr[i]<<endl;
}

void Rdisplay(vector<int> &v)
{
    for(auto it:v)
     cout<<it<<"\t";
    cout<<endl;
}

int main()
{
    int size;
    cout<<"enter size of an array"<<endl;
    cin>>size;
    cout<<"Enter elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
     cin>>arr[i];

    //Sort
    sort(arr+1,arr+3);
    cout<<"elements in an array : "<<endl;
    Sdisplay(arr,size);
    sort(arr,arr+size);
    cout<<"elements in an array : "<<endl;
    Sdisplay(arr,size);

    //Reverse
    vector<int> vec;
    int n,x;
    cout<<"enter no of values"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>x;
     vec.push_back(x);
    }
    reverse(vec.begin()+1,vec.begin()+3);
    Rdisplay(vec);
    reverse(vec.begin(),vec.end());
    Rdisplay(vec);
    cout<<"Present elements in vector: "<<endl;
    Rdisplay(vec);

    //Maximum and Minimum element
    int max=*max_element(vec.begin(),vec.end());
    cout<<"Maximum element : "<<max<<endl;
    int min=*min_element(vec.begin(),vec.end());
    cout<<"Minimmum element : "<<min<<endl;

    //Sum , Occurence of element , find
    auto sum=accumulate(vec.begin(),vec.end(),0);
    cout<<"Sum : "<<sum<<endl;
    int cnt=count(vec.begin(),vec.end(),2);
    cout<<"Count of 2 : "<<cnt<<endl;
    auto it=find(vec.begin(),vec.end(),2);
    cout<<"First instance of 2 : "<<(it-vec.begin())<<endl;

    //Binary search,Lower and Upper Bound
    bool result=binary_search(vec.begin(),vec.end(),2);
    cout<<"BS : "<<result<<endl;
    int index1=lower_bound(vec.begin(),vec.end(),2)-vec.begin();
    cout<<"LB : "<<index1<<endl;
    int index2=upper_bound(vec.begin(),vec.end(),2)-vec.begin();
    cout<<"UB : "<<index2<<endl;
    
    //Two ways to find index of an element
     if(binary_search(vec.begin(),vec.end(),5)==true)
     cout<<lower_bound(vec.begin(),vec.end(),5)-vec.begin()<<endl;
    else
     cout<<"Not found"<<endl;
     
    int index=lower_bound(vec.begin(),vec.end(),5)-vec.begin();
    if(index!=n && vec[index]==5)
    {
        cout<<"found at "<<index<<endl;
    }
    else
      cout<<"Not found"<<endl;

    //last occurence of an element
    if(binary_search(vec.begin(),vec.end(),6)==true)
     cout<<"Occurence : "<<upper_bound(vec.begin(),vec.end(),6)-vec.begin()-1<<endl;
    else
     cout<<"Not found"<<endl;

    //No of times an element appears
    auto i1=lower_bound(vec.begin(),vec.end(),6)-vec.begin();
    auto i2=upper_bound(vec.begin(),vec.end(),6)-vec.begin();
    cout<<"count : "<<i2-i1<<endl;

    //Permutations
    bool res=next_permutation(vec.begin(),vec.end());
    cout<<"Res : "<<res<<endl;

    cout<<"Present elements in vector: "<<endl;
    Rdisplay(vec);

    sort(vec.begin(),vec.end());
    cout<<"after sort"<<endl;
    Rdisplay(vec);

    do{
        Rdisplay(vec);
    }while(next_permutation(vec.begin(),vec.end()));

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    cout<<"after sort and reverse"<<endl;
    Rdisplay(vec);
    bool res1=prev_permutation(vec.begin(),vec.end());
    cout<<"Res1 : "<<res1<<endl;

    do{
        Rdisplay(vec);
    }while(prev_permutation(vec.begin(),vec.end()));

}
