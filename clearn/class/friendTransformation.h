class rectangle;//forward declaration
class square{
	private:
		int side;
	public:
		square(int side=1)
		{
			this->side = side;
		}
		void area()
		{
			cout << "The area of square is:" << this->side*this->side << endl;
		}
		friend class rectangle; //square is a friend of rectangle class-> this will allow rectangle class to access private members of square
};

class rectangle{
	private:
		int len, wid;
	public:
		rectangle(int len = 1, int wid = 1)
		{
			this->len = len;
			this->wid = wid;
		}
		void area()
		{
			cout << "The area of rectangle is: " << this->len*this->wid << endl;
		}
		void transform(square& s)
		{
			this->len = s.side;
			this->wid = s.side;
		}
};

