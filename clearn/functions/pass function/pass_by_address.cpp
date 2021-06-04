#include<iostream>
using namespace std;
void swap (int*, int*);
void increment (int*, int*);
int main( )
{
//	it will affect the main value
	 int a,b;
	cout << "Enter 2 numbers ";
	cin >>a>>b;
//	cout<<"Before swap"<<endl;
//	cout << a << " "<<b<<endl;
//	cout<<"After swap"<<endl;
//	swap (&a,&b);
//	cout << a << " "<<b<<endl;
	cout<<"Before Increment"<<endl;
	cout << a << " "<<b<<endl;
	increment (&a,&b);
	cout<<"After Increment"<<endl;
	cout << a << " "<<b<<endl;
//	system("pause");
}
void swap (int*p, int*q)
{
 int temp;
 temp=*p;
 *p=*q;
 *q= temp;
}

void increment (int*p, int*q)
{
 ++(*p);
 ++(*q);
}

//pass-by-address: involves passing the address of the argument variable rather than the argument 
//variable itself. Because the argument is an address, the function parameter must be a pointer. The 
//function can then dereference the pointer to access or change the value being pointed to.
