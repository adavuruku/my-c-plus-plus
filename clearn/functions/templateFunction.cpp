#include<iostream>
using namespace std;
//template function that finds the square of any numerical data type (int, float or double)
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

//template function are like generic in java
