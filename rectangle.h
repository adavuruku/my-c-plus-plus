class rectangle{
	private://default access specification in the class
		int length, width;
	public:
		int getLength()
		{
			return length;
		}
		int getWidth()
		{
			return width;
		}
		void setLength(int len)
		{
			length = len;
		}
		void setWidth(int wid)
		{
			width = wid;
		}
		int getArea()
		{
			return length*width;
		}
};
