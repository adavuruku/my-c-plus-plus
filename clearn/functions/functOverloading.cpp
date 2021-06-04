#include<iostream>
using namespace std;

int find_square(int);
float find_square(float);
double find_square(double);

int main()
{
	int a = 5;
	float b = 1.2;
	double c = 125.75;
	cout << "The square of " << a << " is=" << find_square(a)<<endl;
	cout << "The square of " << b << " is=" << find_square(b)<<endl;
	cout << "The square of " << c << " is=" << find_square(c)<<endl;
	system("pause");
}
int find_square(int x)
{
	return x*x;
}
float find_square(float y)
{
	return y*y;
}
double find_square(double z)
{
	return z*z;
}
