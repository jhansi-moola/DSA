#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	int c=0;
	cout<<"enter a"<<endl;
	for(int i=0;i<n;i++)
	{
      cin>>a[i];
	}
	cout<<"enter b"<<endl;
	for(int i=0;i<n;i++)
	{
      cin>>b[i];
	}
	cout<<"completed";
	for(int i=0,j=0;i<n && j<n;)
	{
		if(a[i]==b[j])
		 {
			 i++;
			 j++;
			 c+=1;
		 }
		 else
		 {
			 while(a[i]!=b[j])
			 {
			 int x=a[i];
			 for(int z=i+1;z<n;z++)
			  {
			   a[i]=a[i+1];
			  }
			  a[n-1]=x;
			  c+=1;
			 }

		 }
	}
	cout<<c;
}