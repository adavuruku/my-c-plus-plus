class staticMembers{
	private:
		int x;
		static int counter;
	public:
		staticMembers()
		{
			this->x = 0;
			counter++;
		}
		staticMembers(int x)
		{
			this->x = x;
			counter++;
		}
		~staticMembers()
		{
			cout << "The object with x=" << this->x << " has been deleted." << endl;
			counter--;
		}
		int getx()
		{
			return this->x;
		}
		void setx(int x)
		{
			this->x = x;
		}
		static int getcounter()
		{
			return counter;
		}
}; //end of class
int staticMembers::counter=0; //by default the initial value is always ZERO

/*
	Static Members of a class
	-> they are shared among all object of a class -> they are shared among all object of a class
	-> Rule: It has to be initialise outside the scope of the class
	-> Rule: Only static objects can access static members of a cllass -> to access values of static members of a class outside the class
		one must declare a static method to access the class
		 
*/

