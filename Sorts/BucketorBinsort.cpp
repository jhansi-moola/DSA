/*
Program for Bin sort
*/

#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node *h;

void insertlast(Node *p,int key)
{
  Node *last;
  Node *t=new Node;
  t->data=key;
  t->next=NULL;
  if(p==NULL)
   p=last=t;
  else{
    last->next=t;
    last=t;
  }
}

int Delete(Node *p,int pos)
{
  if(pos==0)
  {
    h=p->next;
    delete p;
  }
  else{
    Node* q=NULL;
    for(int i=0;i<pos-1 && p;i++){
      q=p;
      p=p->next;
    }
    if(p){
    q->next=p->next;
    delete p;}
  }
  return p->data;
}

void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
    cout<<endl;
}

void binsort(vector<int> &v)
{
  int max=*max_element(v.begin(),v.end());
  Node **c=new Node*[max+1];
  for(int i=0;i<=max;i++)c[i]=NULL;
  for(int i=0;i<v.size();i++)insertlast(c[v[i]],v[i]);
  int i=0,j=0;
  while(i<=max)
  {
    while(c[i]!=NULL){
        v[j++]=Delete(c[i],0);
        display(v);
    }
    i++;
    //display(v);
  }
}

int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    binsort(v);
    display(v);
}