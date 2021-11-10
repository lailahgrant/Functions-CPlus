#include<iostream>
using namespace std;
int add(int*,int*);
int main()
{
	int a,b;
	cout<<"Enter any two  numbers: ";
	cin>>a>>b;
	cout<<"The addition is : "<<add(&a,&b)<<endl;
	return 0;
}
int add(int* n1,int* n2)
{
	return(*n1 + *n2);
}

