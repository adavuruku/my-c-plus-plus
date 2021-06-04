#include<iostream>
#include<string>
using namespace std;
#include"student.h"
int main()
{
	{
		student stdobj1; //executes the default constructor
		student stdobj2(123456, "Ali Veli", 5600.55); //executes the parameterized constructor
		student stdobj3(stdobj1); //executes the explicit copy constructor
		stdobj1.printStd();
		stdobj2.printStd();
		stdobj3.printStd();
	}//end of block
	system("pause");
}

