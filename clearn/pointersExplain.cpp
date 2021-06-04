#include<iostream>
using namespace std;
int main()
{
	int x = 25, *xptr;
	xptr = &x;
	
	cout <<"The value of x is : "<< x << endl;
	cout <<"x is in the address : "<< xptr << endl;
	cout << "The address of x is : " << &x << endl;
	cout << "The value of *xptr is : " << *xptr << endl;
	
	cout << &*xptr << " " << *&xptr << endl;
	system("pause");
}
