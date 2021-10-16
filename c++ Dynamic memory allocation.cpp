#include<iostream>
using namespace std;
int main()
{
int n;
int *ptr;
cout<<"Enter the size of an array: ";
cin>>n;
ptr = new int[n];
cout<<"enter the values\n";
for(int i=0;i<n;i++)
{
	cin>>ptr[i];
}
cout<<"values in the array are : "<<endl;
for(int i=0;i<n;i++)
{
	cout<<ptr[i]<<endl;
}


return 0;
}

