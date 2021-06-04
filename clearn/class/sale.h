class sale{
	private:
		double taxRate, total;
		static int counter;
		void calcSale(double cost)
		{
			this->total = cost + (cost*this->taxRate);
		}
	public:
		sale()
		{
			this->taxRate = 0.0;
			this->total = 0.0;
			counter++;
		}
		sale(double cost)//sale is tax free
		{
			this->taxRate = 0.0;
			total = cost;
			counter++;
		}
		sale(double cost, double taxRate)
		{
			this->taxRate = taxRate;
			calcSale(cost);
			counter++;
		}
		sale(const sale &eobj)
		{
			this->taxRate = eobj.taxRate;
			this->total = eobj.total;
			counter++;
		}
		~sale()
		{
			cout << "the object with total = " << this->total << " has been destroyed." << endl;
			counter--;
		}
		double getTotal()
		{
			return this->total;
		}
		static int getCounter()
		{
			return counter;
		}
};
int sale::counter = 0;

