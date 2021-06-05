#include<iostream>
using namespace std;
#include"friendFunction.h"
int main()
{
	friendFunction eobj1;
	cout <<"Initial value for the private data member:"<< getnum(eobj1) << endl;
	setnum(eobj1, 5);
	cout <<"After manipulation, the value of the private data member is:"<< getnum(eobj1) <<endl;
	system("pause");
}
