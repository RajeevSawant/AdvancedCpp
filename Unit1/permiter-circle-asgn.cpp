#include <iostream>
using namespace std;


class Circle{
   
	public:
	      double perimeter (int);

	private:
		int x;	      
	
};


double Circle :: perimeter (int r){
	x = r;
	return (2 * 3.1412 * x);
}

int main()
{

	Circle cp;

	cout << "Perimeter of the cricle is " << cp.perimeter(5)<< "\n";
	return 0;
}
