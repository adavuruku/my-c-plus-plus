class constantObject{
	private:
		int x;
	public:
		constantObject(int x)
		{
			this->x = x;
		}
		void setX(int x) //non-const members
		{
			this->x = x;
		}
		int getX() const //const members
		{
			return this->x;
		}
		void greet() //const members
		{
			cout<< "Hello My Man" << endl;
		}
};
