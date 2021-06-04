#include<iostream>
//using namespace std;
float findaver(int, float, int);
void main()
{
    //defining variable
    int a, b;
    float c;
    //definition of cout,cin,endl are in standard namespace
    // :: means scope resolution operator
    std::cout << "Enter 3 values:";
    std::cin >> a >> b >> c;
    std::cout<<"The average is:"<<findaver(a, c, b)<<std::endl;
    system("pause");
}
float findaver(int x, float y, int t)
{
    return (x + y + t) / 3;
}