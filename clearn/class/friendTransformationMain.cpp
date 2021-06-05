#include<iostream>
using namespace std;
#include"friendTransformation.h"
int main()
{
	rectangle robj(5, 10);
	square sobj(8);
	cout << "Before transformation" << endl;
	robj.area();
	sobj.area();
	robj.transform(sobj);
	cout << "After transformation" << endl;
	robj.area();
	sobj.area();
	system("pause");
}
