#include<iostream>
using namespace std;
template<class swap>
void swap_val(swap &x, swap &y)
{
	swap temp;
	temp = x;
	x = y;
	y = temp;
}
void main()
{
	int a = 3, b = 5;
	float c = 1.2, d = 2.3;
	char e = 'E', f = 'F';
	double g = 123.45, h = 345.66;
	
	cout << "Values before swap:" << endl;
	cout << "int values:"<<a << " " << b << endl;
	cout << "float values:"<<c << " " << d << endl;
	cout << "char values:" << e << " " << f << endl;
	cout << "double values:" << g << " " << h << endl;
	swap_val(a, b);
	swap_val(c, d);
	swap_val(e, f);
	swap_val(g, h);
	
	cout << "Values after swap:" << endl;
	cout << "int values:" << a << " " << b << endl;
	
	cout << "float values:" << c << " " << d << endl;
	cout << "char values:" << e << " " << f << endl;
	cout << "double values:" << g << " " << h << endl;
	system("pause")
}
