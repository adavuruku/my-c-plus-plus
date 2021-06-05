//1. using Reference Object
/*class friendFunctionTwo{
	private:
		int n;
	public:
		friendFunctionTwo()
		{
			cout << "Enter an integer number:";
			cin >> this->n;
		}
		int getn()
		{
			return this->n;
		}
		friend void findcube(friendFunctionTwo&);
};
void findcube(friendFunctionTwo& cobj)
{
	cobj.n = cobj.n*cobj.n*cobj.n;
}
*/

//2. using Non-reference object

class friendFunctionTwo{
	private:
		int n;
	public:
		friendFunctionTwo()
		{
			cout << "Enter an integer number:";
			cin >> this->n;
		}
		int getn()
		{
			return this->n;
		}
		friend void findcube(friendFunctionTwo);
};
void findcube(friendFunctionTwo cobj)
{
	cout<< cobj.n * cobj.n * cobj.n;
}
