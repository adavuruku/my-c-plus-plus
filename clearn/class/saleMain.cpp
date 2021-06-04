#include<iostream>
using namespace std;
#include"sale.h"
int main()
{
	{
		sale sobj1; //invokes default constructor
		
		sale sobj2(45.55);//invokes parameterized with one parameter
		
		sale sobj3(50.20, 0.1); //invokes parameterized with two parameters
		
		sale sobj4 = sobj2; //invokes the implicit copy constructor
		
		sale sobj5(sobj1); //invokes the explicit copy constructor
		
		cout << "Total of sobj1 : " << sobj1.getTotal() << endl;
		cout << "Total of sobj2 : " << sobj2.getTotal() << endl;
		cout << "Total of sobj3 : " << sobj3.getTotal() << endl;
		cout << "Total of sobj4 : " << sobj4.getTotal() << endl;
		cout << "Total of sobj5 : " << sobj5.getTotal() << endl;
		cout << "Total number of objects : " << sale::getCounter() << endl;
	}
	cout << "Final total number of objects : " << sale::getCounter() << endl;
	system("pause");
}
