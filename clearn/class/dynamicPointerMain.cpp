#include<iostream>
using namespace std;
#include"dynamicPointer.h"

int main()
{
	{
		//create a pointer object that executes default constructor
		dynamicPointer rectObj1, *rectptr1;
		rectptr1 = &rectObj1;
		rectptr1->setDimensions(40, 20); //or (*rectptr1).setDimensions(40, 20);
		rectptr1->print();
		
		//create a pointer object that executes the parameterized constructor
		dynamicPointer rectObj2(60, 40), *rectptr2;
		rectptr2 = &rectObj2;
		rectptr2->print();
		
		//create an array object for rectangle class that will hold 5 rectangle objects.
		//then assign the array object to the pointer!
		
		dynamicPointer rectArr[5], *arrptr1;
		arrptr1 = rectArr; //note we didnt use &rectArr because is an array pointer
		arrptr1[0].setDimensions(50, 30);
		
		for (int i = 0; i < 5; i++)
			arrptr1[i].print();
		
		//create another array object that will exectue the parameterized constructor.
		dynamicPointer rectArr2[2] = { dynamicPointer(10, 10), dynamicPointer(20, 20) }, *arrptr2;
		arrptr2 = rectArr2; //note we didnt use &rectArr because is an array pointer
		for (int i = 0; i < 2; i++)
			arrptr2[i].print();
			
		//create a dynamic object that will execute default constructor
		dynamicPointer *dptr1 = new dynamicPointer;
		dptr1->print();
		cout << "Total number of rectangle objects: " << dynamicPointer::getCounter() << endl;
		//to destroy dynamic object say;
		delete dptr1; //delete single dynamic pointer
		
		//create a dynamic array of object that will execute default constructor
		dynamicPointer *dptrArr = new dynamicPointer[2];
		for (int i = 0; i < 2; i++)
			dptrArr[i].print();
		delete[] dptrArr; //delete dynamic array 
		
		//create a dynamic array of object that will execute default constructor
		dynamicPointer *dptrArrTwo = new dynamicPointer[2]{ dynamicPointer(2, 3), dynamicPointer(1, 5)};
		for (int i = 0; i < 2; i++)
			dptrArrTwo[i].print();
		delete[] dptrArrTwo;
	}
	cout << "Total number of rectangle objects: " << dynamicPointer::getCounter() << endl;
	system("pause");
}
