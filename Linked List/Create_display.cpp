/*
Program to create and display a Linked list
*/

#include <iostream>
#include <vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
Node *h;
Node *h1;
Node *hcll;
Node *third=NULL;

void create(vector<int> &v)
{
    Node *t,*last;
    h=new Node;
    h->data=v[0];
    h->next=NULL;
    last=h;
    for(int i=1;i<v.size();i++)
    {
        t=new Node;
        t->data=v[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void create1(vector<int> v1)
{
    Node *t,*last;
    h1=new Node;
    h1->data=v1[0];
    h1->next=NULL;
    last=h1;
    for(int i=1;i<v1.size();i++)
    {
        t=new Node;
        t->data=v1[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void createCLL(vector<int> v2)
{
    Node *t,*last;
    hcll=new Node;
    hcll->data=v2[0];
    hcll->next=hcll;
    last=hcll;
    for(int i=1;i<v2.size();i++)
    {
        t=new Node;
        t->data=v2[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;
}

void displayCLL(Node *p1)
{
  do
  {
    cout<<p1->data<<" ";
    p1=p1->next;
  }while(p1!=hcll);
  cout<<endl;
}

int count(Node *p)
{
  int c=0,s=0;
  while(p!=NULL)
  {
    c++;
    s+=p->data;
    p=p->next;
  }
  return c;
  //cout<<c<<" nodes in Linked list"<<endl;
  //cout<<"Sum of all nodes "<<s<<endl;
}

int countcll(Node *p)
{
  int c=0,s=0;
  do
  {
    c++;
    s+=p->data;
    p=p->next;
  }while(p!=hcll);
  return c;
  //cout<<c<<" nodes in Linked list"<<endl;
  //cout<<"Sum of all nodes "<<s<<endl;
}

void maxmin(Node *p)
{
  int max=INT_MIN;
  int min=p->data;
  while(p!=NULL)
  {
    if(p->data>max)
     max=p->data;
    if(p->data<min)
     min=p->data;
    p=p->next;
  }
  cout<<"Max element "<<max<<endl;
  cout<<"Min element "<<min<<endl;
}

Node* Search(Node *p,int key)
{
  while(p!=NULL)
  {
    //if(p->next==NULL && p->data!=key)
     //cout<<key<<" not found"<<endl;
    if(p->data==key)
    {
      //cout<<key<<" is found"<<endl;
      //break;
      return p;
    }
    else
     p=p->next;
  }
  return 0;
}

void insert(Node *p,int pos,int key)
{
   if(pos<0 || pos>count(p))
   {
     cout<<"index not valid"<<endl;
   }
   Node *t;
   t=new Node;
   t->data=key;
   if(pos==0)
   {
    t->next=h;
    h=t;
   }
   else
   {
    for(int i=0;i<pos-1;i++)
    {
      p=p->next;
    }
    t->next=p->next;
    p->next=t;
   }
}

int insertCLL(Node *p,int pos,int key)
{
   if(pos<0 || pos>countcll(hcll))
   {
     return -1;
   }
   Node *t;
   Node *x=hcll;
   t=new Node;
   t->data=key;
   if(pos==0)
   {
    while(x->next!=hcll)x=x->next;
     x->next=t;
    t->next=hcll;
    hcll=t;
   }
   else
   {
    for(int i=0;i<pos-1;i++)
    {
      x=x->next;
    }
    t->next=x->next;
    x->next=t;
   }
}

void insertlast(Node *p,int key)
{
  Node *last;
  Node *t=new Node;
  t->data=key;
  t->next=NULL;
  if(h==NULL)
   h=last=t;
  else{
    last->next=t;
    last=t;
  }
   
}

void insertSortedL(Node *p,int key)
{
  Node *t=new Node;
  t->data=key;
  t->next=NULL;
  if(h==NULL)
  {
     h=t;
  }
  else{
    Node *q=NULL;
    while(p && p->data<key)
    {
      q=p;
      p=p->next;
    }
    if(p==h){
    t->next=h;
    h=t;}
    else{
      t->next=q->next;
      q->next=t;
    }
  }
}

void Delete(Node *p,int pos)
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
}

int DeleteCLL(Node *p,int pos)
{
  Node *x=hcll;
  Node* q;
   if(pos<0 || pos>=countcll(hcll))return -1;
  if(pos==0)
  {
    while(x->next!=hcll)x=x->next;
    x->next=hcll->next;
    delete hcll;
    hcll=x->next;
  }
  else{
    for(int i=0;i<pos-1;i++){
      x=x->next;
    }
    q=x->next;
    x->next=q->next;
    delete q;
  }
}

int isSorted(Node *p)
{
  while(p!=NULL && p->next!=NULL)
  {
    if(p->data<=p->next->data)
    {
       p=p->next;
    }
    else {
      return -1;
    }
  }
  return 1;
}

void rdup(Node* p)
{
  Node* q=p->next;
  while(p->next!=NULL){
    if(p->data==q->data)
    {
      p->next=q->next;
      delete q;
      q=p->next;
    }
    else{
      p=q;
      q=q->next;
    }
  }
}

void revList(Node* p)
{
  Node* q=NULL;
  Node* r=NULL;;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
  }
  h=q;
  
}
void concat(Node *p,Node *p1)
{
  while(p->next!=NULL){
    p=p->next;
  }
  p->next=p1;
}

void merge(Node *p,Node *p1)
{
  Node *last;
  if(p->data<p1->data){
     third=last=p;
     p=p->next;
     last->next=NULL;
  }
  else{
    third=last=p1;
    p1=p1->next;
    last->next=NULL;
  }
  while(p!=NULL && p1!=NULL){
    if(p->data<p1->data){
      last->next=p;
      last=p;
      p=p->next;
      last->next=NULL;
    }
    else{
      last->next=p1;
      last=p1;
      p1=p1->next;
      last->next=NULL;
    }
  }
  if(p!=NULL){
    last->next=p;
  }
  if(p1!=NULL){
    last->next=p1;
  }
}

void isLoop(Node *p1)
{
  Node *p=h1;
  Node *q=h1;
  do{
    p=p->next;
    q=q->next;
    q=q!=NULL?q->next:NULL;
  }while( p && q && p!=q);
  if(p==q)
   cout<<"List has loop"<<endl;
  else
   cout<<"No Loop"<<endl;
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
  //cout<<count(h);
  //maxmin(h);
  //cout<<Search(h,12)<<endl;
  //insert(h,0,6);
  //insert(h,1,8);
  //insert(h,2,4);
  //display(h);
  //insertlast(h,50);
  //insertlast(h,4);
  //display(h);
  //insertSortedL(h,8);
  //display(h);
  //Delete(h,6);
  //display(h);
  //if(isSorted(h)==1)
   //cout<<"List is sorted"<<endl;
  //else
   //cout<<"Not sorted"<<endl;
  //rdup(h);
  //display(h);
  //revList(h);
  //display(h);

  int n1;
  cout<<"Enter no of elements"<<endl;
  cin>>n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++)
   cin>>v1[i];
  create1(v1);
  display(h1);
  display(h);
  //concat(h,h1);
  //display(h);
  merge(h,h1);
  display(h);
  isLoop(h1);

  int n2;
  cout<<"Enter no of elements"<<endl;
  cin>>n2;
  vector<int> v2(n2);
  for(int i=0;i<n2;i++)
   cin>>v2[i];
  createCLL(v2);
  displayCLL(hcll);
  insertCLL(hcll,4,6);
  displayCLL(hcll);
  DeleteCLL(hcll,2);
  displayCLL(hcll);

}