#include<iostream>
using namespace std;
#include"friendFunctThree.h"
int main()
{
	A aobj(5);
	B bobj(6);
	compare(aobj, bobj);
	
	aobj.seta(10);
	bobj.setb(9);
	compare(aobj, bobj);
	
	aobj.seta(20);
	bobj.setb(20);
	compare(aobj, bobj);
	system("pause");
}

