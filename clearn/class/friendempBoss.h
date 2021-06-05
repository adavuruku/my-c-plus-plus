class boss; //forward declaration
class employee{
	private:
		string name;
		double salary;
	public:
		employee()
		{
			this->name = " ";
			this->salary = 0.0;
		}
		void setName(string name)
		{
			this->name = name;
		}
		void setSalary(double salary)
		{
			this->salary = salary;
		}
		string getName()
		{
			return this->name;
		}
		double getSalary()
		{
			return this->salary;
		}
		friend class boss;
};

class boss{
	public:
		void giveRaise(employee &eobj, double amt)
		{
			eobj.salary = eobj.salary + amt;
		}
};

