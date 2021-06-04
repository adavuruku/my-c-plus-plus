#include<iostream>
using namespace std;
int funct(int = 3);
int main()
{
int a = 5, b = 7;
cout << funct(a) << endl;
cout << funct() << endl;
cout << funct(b) << endl;
cout << funct(10) << endl;
system("pause");
}//end of the code
int funct(int x)
{
static int k = 10;
k = k + x;
return k;
}

//static variable remain thesame for every function call
