#include <iostream>
using namespace std;

class abstractInterface
{
	public:
		virtual void numbers() = 0;
		void input();
		int a, b;
};


void abstractInterface :: input()
{
	cout << "Enter the numbers\n";
	cin >> a >> b;
}


class add : public abstractInterface
{
	public:
		void numbers()
		{
			int sum;
			sum = a + b;
			cout << "Sum is " << sum << "\n";
		}
};

class sub : public abstractInterface
{
	public:
		void numbers()
		{
			int diff;
			diff = a - b;
			cout << "Difference is " << diff << "\n";
		}
};


int main()
{
	add obj1;
	obj1.input();
	obj1.numbers();

	sub obj2;
	obj2.input();
	obj2.numbers();

	return 0;
}

