#include<iostream>
using namespace std;
#include"staticMembers.h"
int main()
{
	{
		cout << "The initial number of objects:" << staticMembers::getcounter() << endl;
		staticMembers tobj1; //invokes the default constructor
		staticMembers tobj2(10); //invokes parameterized constructor
		cout << "tobj1: " << tobj1.getx() << endl;
		cout << "tobj2: " << tobj2.getx() << endl;
	}//end of block
	cout << "The final number of objects: " << staticMembers::getcounter() << endl;
	system("pause");
}
