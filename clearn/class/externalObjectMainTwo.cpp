#include<iostream>
using namespace std;
#include"externalObject.h"
int main()
{
	{
		extobj.addValue(5);
		
		for (int i = 0; i < 3; i++)
		{
			//automatic object
			externalObject autoObj;
			autoObj.addValue(10);
			//static object
			static externalObject statObj;
			statObj.addValue(15);
			cout << "The Automatic Object has the value:" << autoObj.getValue() << endl;
			cout << "The Static object has the value:" << statObj.getValue() << endl;
			
			/*
				from the output you will notice that static objets are never desroyed in this iteration while the automatic object is destroyed
				Reason: static object belong to the whole program (code block main) while automatice belong to the for loop block since its declared inside the block
				so for every completed iteration, the automatic object is destroyed.
				Also the external belong to the whole program as well and it only get destroyed once the program stop executing
			*/
		}
		cout << "The External Object has the value:" << extobj.getValue() << endl;
	}
	system("pause");
}
