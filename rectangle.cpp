#include<iostream>
using namespace std;
//#include"rectangle.h"
#include"rectangle2.h"
int main()
{
	rectangle rectObj;
	rectObj.setLength(60);
	rectObj.setWidth(30);
	cout << "Length:"<<rectObj.getLength()
	<< "\tWidth:" << rectObj.getWidth() << endl;
	//Let's calculate and display area of rectObj object.
	cout << "Area:" << rectObj.getArea() << endl;
//	rectangle rectObj2(50, 40);
	system("pause");
}
