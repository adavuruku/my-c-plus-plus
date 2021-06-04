class dynamicPointer{
	private:
		int length, width;
		static int counter;
	public:
		dynamicPointer()
		{
			/*cout << "Enter length and width:";
			cin >> this->length >> this->width;*/
			this->length = 1;
			this->width = 1;
			counter++;
		}
		dynamicPointer(int length, int width)
		{
			this->length = length;
			this->width = width;
			counter++;
		}
		dynamicPointer(const dynamicPointer &exObj)
		{
			this->length = exObj.length;
			this->width = exObj.width;
			counter++;
		}
		~dynamicPointer()
		{
			cout << "Rectangle object with values length:" << this->length
			<< " and width:" << this->width << " has been destroyed." << endl;
			counter--;
		}
		void setDimensions(int length, int width)
		{
			this->length = length;
			this->width = width;
		}
		int getArea()
		{
			return this->length*this->width;
		}
		void print()
		{
			cout << "Length:" << this->length << "\tWidth:" << this->width << endl;
			cout << "The area of the rectangle is:" << getArea() << endl;
		}
		static int getCounter()
		{
			return counter;
		}
};
int dynamicPointer::counter = 0;
