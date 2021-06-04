class student{
	private:
		long stdid;
		string name; //we need to include "string" header
		double balance;
	public:
		student() //user-defined default constructor
		{
			cout << "Enter student id:";
			cin >> this->stdid;
			cin.ignore(); //to ignore the blank string
			cout << "Enter student name:";
			//cin >> this->name; --Will not allow us to enter string values (if it has more than one part)
			getline(cin, this->name);
			cout << "Enter balance:";
			cin >> this->balance;
		}
		student(long stdid, string name, double balance) //parameterized constructor
		{
			this->stdid = stdid;
			this->name = name;
			this->balance = balance;
		}
		student(const student& stdobj) //copy constructor
		{
			this->stdid = stdobj.stdid;
			this->name = stdobj.name;
			this->balance = stdobj.balance;
		}
		void setStdid(long stdid)
		{
			this->stdid = stdid;
		}
		void setName(string name)
		{
			this->name = name;
		}
		void setBalance(double balance)
		{
			this->balance = balance;
		}
		long getStdid()
		{
			return this->stdid;
		}
		string getName()
		{
			return this->name;
		}
		double getBalance()
		{
			return this->balance;
		}
		void withdraw(double amt)
		{
			if (amt < balance)
			{
				balance = balance - amt;
				cout << "You have withdrawn " << amt << ". It has been decresed from the balance." << endl;
			}
			else
				cout << "WARNING!!! Not enough balance." << endl;
		}
		void deposit(double amt)
		{
			balance = balance + amt;
			cout << "You have deposited " << amt << ". It has been added to your balance." << endl;
		}
		~student() //destructor
		{
			cout << "The object with student id = " << this->stdid << " has been destroyed." << endl;
		}
		void printStd()
		{
			cout << "*******************" << endl;
			cout << "Student Info:" << endl;
			cout << "Student Id:" << this->stdid << "\tStudent Name:" << this->name << endl;
			cout << "Balance:" << this->balance << endl;
			cout << "*******************" << endl;
		}
};
