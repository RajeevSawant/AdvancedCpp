#include <iostream>
using namespace std;


class Num
{
	public:
		void input()
		{
			cout << "Enter the Number\n";
			cin >> a;
		}

		friend void compute (Num n1, int* arr);

	private:
		int a;	
};


void compute (Num n1, int* arr)
{

	arr[0] = n1.a * n1.a;
	arr[1] = n1.a * n1.a * n1.a;
}


int main()
{
	Num n;
	n.input();

	int res[2];

	compute(n, res);

	cout << "Square of the Number is " << res[0] << "\n";
	cout << "Cube of the Number is " << res[1] << "\n";

	return 0;
}

