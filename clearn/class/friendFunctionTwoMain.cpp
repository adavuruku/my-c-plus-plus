#include<iostream>
using namespace std;
#include"friendFunctionTwo.h"

//1. using Reference object

/*int main()
{
	friendFunctionTwo cobj;
	cout << cobj.getn() << endl;
	findcube(cobj);
	cout << "The cube is:" << cobj.getn() << endl;
	system("pause");
}*/


//2. using Non-reference object

int main()
{
	friendFunctionTwo cobj;
	cout <<"The value you have entered is:"<< cobj.getn() << endl;
	cout << "The cube is:";
	findcube(cobj); cout << endl;
	system("pause");
}
