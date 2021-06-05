class B;
class A{
	private:
		int a;
		friend void compare(A, B);
	public:
		A(int a)
		{
			this->a = a;
		}
		int const geta()
		{
			return this->a;
		}
		void seta(int a)
		{
			this->a = a;
		}
};


class B{
	private:
		int b;
		friend void compare(A, B);
	public:
		B(int b)
		{
			this->b = b;
		}
		int getb() const
		{
			return this->b;
		}
		void setb(int b)
		{
			this->b = b;
		}
};
void compare(A aobj, B bobj)
{
	if (aobj.a > bobj.b)
		cout << "Greater value is:" << aobj.a<<endl;
	else if (bobj.b > aobj.a)
		cout << "Grater value is:" << bobj.b<<endl;
	else
		cout << "Values are equal!!!" << endl;
}
