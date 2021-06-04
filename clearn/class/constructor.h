class constructor{
	private:
		int hour, minute;
	public:
		constructor() //default / explicit constructor
		{
			cout << "Enter hour and minute:";
			cin >> hour >> minute;
		}
		constructor(int h, int m) //parameterized constructor
		{
			hour = h;
			minute = m;
		}
		constructor(const constructor &oldObj) //user-defined (explicit) copy constructor 
		{
			hour = oldObj.hour;
			minute = oldObj.minute;
		}
		void settime(int h, int m)
		{
			hour = h;
			minute = m;
		}
		int getHour()
		{
			return hour;
		}
		int getMinute()
		{
			return minute;
		}
		void printTime()
		{
			cout << hour << ":" << minute << endl;
		}
		void printFormattedTime()
		{
			if (hour == 12 && minute >=0)
				cout << hour << ":" << minute << "P.M." << endl;
			else if (hour > 12)
				cout <<hour-12<<":"<<minute<< " P.M."<<endl;
			else
				cout << hour<<":"<<minute<<"A.M."<<endl;
		}
};

/*
	Constructors explain->they are use to initialise private members of a class
	-> they dont return anything not even void
	-> A class with no user define constructor uses default constructor (implicit constructor)
	-> Explicit constructor are constructor with no arguments
	-> parameterize constructor are constructors with arguments
	-> copy constructor
		-> implicit copy constructor is a process of assigning instance of a class to another class -> class_name oldObj; class_name obj = oldObj
		- explixit copy constructor is a constructor that accept instance of its own class as parameter -> class_name(const class_name &oldObj)
*/
