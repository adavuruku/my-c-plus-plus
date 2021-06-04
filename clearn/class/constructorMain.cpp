#include<iostream>
using namespace std;
#include"constructor.h"
int	 main()
{
	constructor school; //this uses the defauult constructor
	constructor lunch(12, 30); //this uses the parameterize constructor
	
	cout << "Printing School Time:";
	school.printFormattedTime();
	
	cout << "Printing Lunch Time:";
	lunch.printFormattedTime();
	
	//Lets modify lunch time: 13:40
	lunch.settime(13, 40);
	cout << "Printing Modified Lunch Time:";
	lunch.printFormattedTime();
	
	constructor newTime = lunch; //implicit copy contructor -> assignment operator copies the values of lunch obj into newTime obj
	cout << "New time is:";
	newTime.printTime();
	
	constructor newschool(school);//explicit copy constructor should be exectued
	school.settime(9,15);
	cout << "New school time is:";
	newschool.printTime();
	
	cout << "Modified school time:";
	school.printTime();
}
