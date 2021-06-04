class externalObject{
	int value;
	public:
		externalObject()
		{
			this->value = 0;
		}
		void addValue(int val_in)
		{
			this->value += val_in;
		}
		int getValue() const
		{
			return this->value;
		}
		~externalObject()
		{
			cout << "The object with value:" << this->value << " is destroyed." << endl;
		}
};
//let's create an external object
externalObject extobj;
