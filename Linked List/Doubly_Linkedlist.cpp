/*
Program to create and display a Doubly Linked list
*/

#include <iostream>
#include <vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
Node *h;
Node *hcll;

void create(vector<int> &v)
{
    Node *t,*last;
    h=new Node;
    h->data=v[0];
    h->next=NULL;
    h->prev=NULL;
    last=h;
    for(int i=1;i<v.size();i++)
    {
        t=new Node;
        t->data=v[i];
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void createCLL(vector<int> &v1)
{
    Node *t,*last;
    hcll=new Node;
    hcll->data=v1[0];
    hcll->next=NULL;
    hcll->prev=NULL;
    last=hcll;
    for(int i=1;i<v1.size();i++)
    {
        t=new Node;
        t->data=v1[i];
        t->next=hcll;
        t->prev=last;
        last->next=t;
        last=t;
    }

}

void display(Node *p)
{
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

void displayCLL(Node *p)
{
  do{
    cout<<p->data<<" ";
    p=p->next;
  }while(p!=hcll);
  cout<<endl;
}

int count(Node *p)
{
  int c=0;
  while(p!=NULL){
    c++;
    p=p->next;
  }
  return c;
}

int insert(Node *p,int pos,int key)
{
  if(pos<0 || pos>count(p))return -1;
  Node *t;
  t=new Node;
  t->data=key;
  if(pos==0)
  {
    t->next=h;
    h->prev=t;
    h=t;
  }
  else
  {
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    t->next=p->next;
    t->prev=p;
    p->next=t;
    if(t->next!=NULL)t->next->prev=t;
  }
}

int Delete(Node *p,int pos)
{
  if(pos<0 || pos>=count(p))return -1;
  if(pos==0){
    h=p->next;
    h->prev=NULL;
    delete p;
  }
  else{
    for(int i=0;i<pos-1;i++)p=p->next;
    Node *q=p->next;
    p->next=q->next;
    if(q->next)q->next->prev=p;
    delete q;
  }
}

void reverse(Node *p)
{
  Node *q=NULL;
  Node *r=NULL;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
    q->prev=p;
  }
  h=q;
}

int main()
{
  int n;
  cout<<"Enter no of elements"<<endl;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
   cin>>v[i];
  create(v);
  display(h);
  //insert(h,2,6);
  //display(h);
  //Delete(h,3);
  //display(h);
  //reverse(h);
  //display(h);
  createCLL(v);
  displayCLL(hcll);
}