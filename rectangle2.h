class rectangle{
	private://default access specification in the class
		int length, width;
	public:
		int getLength();
		int getWidth();
		void setLength(int);
		void setWidth(int);
		int getArea();
};//end of class
int rectangle::getLength()
{
	return length;
}
int rectangle::getWidth()
{
	return width;
}
void rectangle::setLength(int len)
{
	length = len;
}
void rectangle::setWidth(int wid)
{
	width = wid;
}
int rectangle::getArea()
{
	return length*width;
}
