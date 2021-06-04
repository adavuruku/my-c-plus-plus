#include<iostream>
using namespace std;
void increment (int&, int&);
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
	increment (a,b);
	cout<<"After Increment"<<endl;
	cout << a << " "<<b<<endl;
//	system("pause");
}

void increment (int &p, int &q)
{
 ++(p);
 ++(q);
}

//pass-by-reference: reference type, create aliases for object and let you pass arguments to function by 
//reference. Using reference directly affect the variable.
