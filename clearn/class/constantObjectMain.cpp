#include<iostream>
using namespace std;
#include"constantObject.h"
int main()
{
	//create a constant object
	const constantObject constObj(5);
	
	//create non-constant object
	constantObject nonConstObj(10);
	
	//may i call constant member function for const object???
	cout << constObj.getX() << endl;
	
	//may i call non-const member function for const object???
	//constObj.setX(40); //ERROR!!! constant object cannot be modified!!!
//	constObj.greet(); //ERROR!!! contant object cant access non constant members
	
	//may i call constant member function for non-const object?
	cout << nonConstObj.getX() << endl;
	
	//may i call non-const member function for non-const object???
	nonConstObj.setX(40);
	system("pause");
}
