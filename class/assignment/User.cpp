#include<iostream>
#include<string>
using namespace std;
#include "User.h"
int main()
{
	{
		User uObj1;
		User uObj2(uObj1);
		User otherUsers[] = { User("Munir", "Ibeto", "1992-02-02", "muniru"), User("Abdulraheem", "Sherif", "1987-12-12", "sherifu102"), User("Juliat", "Yusus", "2000-09-21", "jully")};
		otherUsers[0].setUserAge(23);
		otherUsers[1].setUserAge(32);
		otherUsers[2].setUserAge(19);

		
		User::displayTotalUser();
	}
	system("pause");
}

