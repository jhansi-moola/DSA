/*
Program to convert infix form of expression to postfix form
*/

#include <iostream>
using namespace std;

int push(char x,string &stack,int &top,int size)
{
   if(top==size-1)
   {
       return 0;
   }
   else
   {
       top++;
       stack[top]=x;
   }
}

int pop(string &stack,int &top)
{
    if(top==-1)
    {
        return 0;
    }
    else
    {
        char x=stack[top];
        top--;
        return x;
    }
}

int isOperand(string &a,char x)
{
 if(x=='*' || x=='/' || x=='+' || x=='-')
 {
  return 0;
 }
 else
 { 
  return 1;
 }
}

int precedence(string &a,char x)
{
    if( x=='*' || x=='/')
    {
     return 2;
    }
    if( x=='+' || x=='-')
    {
     return 1;
    }
    return 0;
}

int stackTop(string &stack,int top)
{
    if(top==-1)
    {
     return 0;
    }
    else
    {
     return stack[top];
    }
}

int isEmpty(string &stack,int top)
{
    if(top==-1)
    {
     return 1;
    }
    else
    {
     return 0;
    }
}

int Evaluation(string &stack,string &postfix,int top,int size)
{
    int x1,x2,r;
 for(int i=0;i<size;i++)
 {
    if(isOperand(postfix,postfix[i]))
       push(postfix[i],stack,top,size);
    else
    {
       x2=pop(stack,top);
       x1=pop(stack,top);
       switch(postfix[i])
       {
        case '+' : r=x1+x2;
                   push(r,stack,top,size);
                   break;
        case '-' : r=x1-x2;
                   push(r,stack,top,size);
                   break;
        case '*' : r=x1*x2;
                   push(r,stack,top,size);
                   break;
        case '/' : r=x1/x2;
                   push(r,stack,top,size);
                   break;
       }
    }
 }
 return pop(stack,top);
}

void convertToPostfix(string &a,int size)
{
  int top=-1;
  string stack;
  string postfix;
  int i,j=0;
  while(a[i]!=size)
  {
    if(isOperand(a,a[i]))
    {
     postfix[j++]=a[i++];
    }
    else
    {
        if(precedence(a,a[i])>precedence(a,stackTop(stack,top)))
        {
         push(a[i++],stack,top,size);
        }
        else
        {
         postfix[j++]=pop(stack,top);
        }
    }
  }
  while(isEmpty(stack,top))
  {
   postfix[j++]=pop(stack,top);
  }
  postfix[j]='\0';
  for(j=0;j<size;j++)
  {
    cout<<postfix[j];
  }
  cout<<"Value of expression is "<<Evaluation(stack,postfix,top,size);
}

int main()
{
    int top=-1;
    string s="3+4+2*7";
    int size=s.length();
    convertToPostfix(s,size);
    return 0;
}