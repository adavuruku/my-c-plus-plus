#include<iostream>
using namespace std;
int funct(int = 3);
int main()
{
int a = 5, b = 7;
cout << funct(a) << endl;
cout << funct() << endl;
cout << funct(b) << endl;
system("pause");
}
int funct(int x)
{
int k = 10;
k = k + x;
return k;
}
