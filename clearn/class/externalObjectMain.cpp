#include<iostream>
using namespace std;
#include"externalObject.h"
int main()
{
	{
		extobj.addValue(5);
		
		//automatic object
		externalObject autoObj;
		autoObj.addValue(10);
		
		//static object
		static externalObject statObj;
		statObj.addValue(15);
		
		//constant object
		const externalObject constObj;
		//constObj.addValue(20); ERROR const object but non-constant member function
		
		cout << "The External Object has the value:" << extobj.getValue() << endl;
		cout << "The Automatic Object has the value:" << autoObj.getValue() << endl;
		cout << "The Static object has the value:" << statObj.getValue() << endl;
		cout << "The Constant Object has the value:" << constObj.getValue() << endl;
	}
	system("pause");
}


/*
	->Objects
	Automatic object -> are object created inside the main function
	External objet -> are object created outside the scope of main function
	Static Object -> are object created in/out the scope of main function -> they retain their value till end of program
	Array object -> may be automatic or external
	constant objects -> constant object are object created with the const keywords -> constant objects cant be modified and only contant method may access constant objects
*/
