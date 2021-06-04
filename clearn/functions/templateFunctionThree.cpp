#include<iostream>
using namespace std;
template<class A, class B, class C>

A find_sum(A x, B y, C z)
{
	return x + y + z;
}

int main(){
	int a = 5, b = 8;
	float c = 1.3, d = 1.5;
	double e = 170.8, f = 999.99;
	cout << "The summation of the values " << a << "+" << c << "+" << e << "="
	<< find_sum(a, c, e) << endl;
	cout << "The summation of the values " << d << "+" << b << "+" << f << "="
	<< find_sum(d, b, f) << endl;
	cout << "The summation of the values " << e << "+" << c << "+" << d << "="
	<< find_sum(e, c, d) << endl;
	system("pause");
}

// the data type of x will be use for A, so which ever type you send for A will be the return type
