#include<iostream>
#include<string>
using namespace std;
#include"friendempBoss.h"
int main()
{
	employee eobj;
	eobj.setName("Ayse");
	eobj.setSalary(2500);
	boss bobj;
	cout << eobj.getName() << " gets " << eobj.getSalary() << endl;
	bobj.giveRaise(eobj, 500);
	cout << "After salary increase" << endl;
	cout << eobj.getName() << " gets " << eobj.getSalary() << endl;
	system("pause");
}
