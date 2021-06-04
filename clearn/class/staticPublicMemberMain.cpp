#include<iostream>
using namespace std;
#include"staticPublicMember.h"
int main()
{
	{
		cout << "The initial number of objects:" << staticPublicMember::counter << endl;
		staticPublicMember tobj1; //invokes the default constructor
		staticPublicMember tobj2(10); //invokes parameterized constructor
		cout << "tobj1:" << tobj1.getx() << endl;
		cout << "tobj2:" << tobj2.getx() << endl;
	}//end of block
	cout << "The final number of objects:" << staticPublicMember::counter << endl;
	system("pause"); 
}
