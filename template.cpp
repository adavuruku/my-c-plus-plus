#include<iostream>
using namespace std;
template <class T>
T find_square(T x)
{
	return x*x;
}
int main()	
{
	int a = 5;
	float b = 1.2;
	double c = 125.75;
	cout << "The square of " << a << " is=" << find_square(a) << endl;
	cout << "The square of " << b << " is=" << find_square(b) << endl;
	cout << "The square of " << c << " is=" << find_square(c) << endl;
	system("pause");
}

