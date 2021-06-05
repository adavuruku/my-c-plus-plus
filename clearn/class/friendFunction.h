class friendFunction{
	private:
		int num;
	public:
		friendFunction()
		{
			this->num = 0;
		}
		//1.
		friend int getnum(friendFunction); //no manipulation is required in this function. 
 		//No reference operator is needed.
		friend void setnum(friendFunction&, int); //we need to update the value of "num", that's why we need to make it a reference object.
};//end of class

// 3.
int getnum(friendFunction eobj)
{
	return eobj.num;
}
//5.
void setnum(friendFunction& eobj, int n)
{
	eobj.num = n;
}

/*
	Friend function is a special function thats not a member of a class but can access the private and protected members of the class
	Rules:
	1. -> Its not a member of the class but the prototype must be declare between the scope of the class
	2. -> The definition must declared outside the scope of the class
	3. -> During the definition of a friend function neither scope or class_name resolution operator is required
	4. -> whenever a friend function is called neither the name of the object nor the dot(.) operator is required
	5. ->if we want the reference function to manipulate the private members of a class we need to pass (&) the object as parameter
	
	-> is friendship symmetric [No] if class1 is a friend of class2 is not necessary that class2 is a friend of class1
	-> is friendship transitive [No] if class1 is a friend of class2 and class2 is a friend of class3 -> is not necessary that class1 is a friend of class3
	
*/
