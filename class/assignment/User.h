class User{
	private:
		int userId;
		string username; //we need to include "string" header
		string firstname;
		string lastname;
		string dob;
		int age;
	public:
		static int idGenerator;
		static int totalUsers;
		User() //user-defined default constructor
		{
			totalUsers++;
			idGenerator++;
			this->userId = idGenerator;
		}
		User(string firstname, string lastname,string dob, string username) //parameterized constructor
		{
			this->firstname = firstname;
			this->lastname = lastname;
			this->dob = dob;
			this->username = username;
			totalUsers++;
			idGenerator++;
			this->userId = idGenerator;
		}
		User(const User& copyUser) //copy constructor
		{
			this->firstname = copyUser.firstname;
			this->lastname = copyUser.lastname;
			this->dob = copyUser.dob;
			this->username = copyUser.username;
			totalUsers++;
			idGenerator++;
			this->userId = idGenerator;
		}
		void setUserAge(int age)
		{
			this->age = age;
		}
		void setFirstname(string firstname)
		{
			this->firstname = firstname;
		}
		void setLastname(string lastname)
		{
			this->lastname = lastname;
		}
		void setDateOfBirth(string dob)
		{
			this->dob = dob;
		}
		void setUsername(string username)
		{
			this->username = username;
		}
		
		~User() //destructor
		{
			cout << "The object with User id = " << this->userId << " has been destroyed." << endl;
		}
		static int getTotalUsers()
		{
			return totalUsers;
		}
		static void displayTotalUser()
		{
			cout << "*******************" << endl;
			cout << "Total Users :" << getTotalUsers() << endl;
			cout << "*******************" << endl;
		}
};
int User::totalUsers  = 0;
int User::idGenerator  = 14401;
