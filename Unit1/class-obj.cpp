#include <iostream>
using namespace std;

class square
{
	int x;
	public:
	int area(int);
};

int square :: area (int a){
    x = a;
   return x*x;
}


int main()
{
	square sq;
	
	cout << "Area of the square is " << sq.area(4) << "\n";
	return 0;	
}



