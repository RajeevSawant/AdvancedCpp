#include <iostream>
using namespace std;

class frnd
{
	public:
		void input()
		{
			cout <<"Enter the values of a and b\n";
			cin >> a >> b;
		}
	
	friend int compute(frnd f1);
	
	private:
		int a , b;

};

int compute (frnd f1)
{
	int x = f1.a + f1.b;
	return x;
}


int main()
{
	frnd f;
	f.input();
	cout << "The result is: " << compute(f) << "\n";

	return 0;
}
