/*
Program to find whether parenthesis are matching or not in expression
*/

#include <iostream>
using namespace std;

int push(char x,char *stack,int &top,int size)
{
   if(top==size-1)
   {
       return -1;
   }        
   else
   {
       top++;
       stack[top]=x;
   }
}

int pop(char *stack,int &top)
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        char x=stack[top];
        top--;
    }
}

int isBalance(char *stack,string &a,int top,int size)
{
  for(int i=0;i<size;i++)
  {
    if(a[i]=='(' || a[i]=='{' || a[i]=='[')
      push(a[i],stack,top,size);
    else if(a[i]==')' || a[i]=='}' || a[i]==']')
    {
        if(stack[top]=='(' && a[i]==')' || stack[top]=='{' && a[i]=='}'|| stack[top]=='[' && a[i]==']')
          pop(stack,top);
        else
          return -1;     
    }
  }
  if(top==-1)
   return 1;
  else
   return -1;

}

int main()
{
    int top=-1;
    string a="[{(a+b)+(c+d)}]";
    int size=a.length();
    char stack[size];
    cout<<isBalance(stack,a,top,size);
}