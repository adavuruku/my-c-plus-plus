class staticPublicMember{
	private:
		int x;
	public:
		static int counter;
		staticPublicMember()
		{
			this->x = 0;
			counter++;
		}
		staticPublicMember(int x)
		{
			this->x = x;
			counter++;
		}
		~staticPublicMember()
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
}; //end of class
int staticPublicMember::counter = 0; //by default the initial value is always ZERO
//A static public member dont need a public static method to access i.e staticPublicMember::counter will access static counter
