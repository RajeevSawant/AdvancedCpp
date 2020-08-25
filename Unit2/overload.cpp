#include <iostream>
using namespace std;


int add (int a, int b, int c)
{
	return (a + b + c);
}

float add (float b , float d)
{
	return (b + d);
}

int main()
{
     //	int add (int, int, int);
    //	float add (float, float);

	int a, b, c;
	float d, e, sum;

	cout << "Enter the integers \n";
	cin >> a >> b >> c;

	sum = add (a, b, c);
	cout << "Sum of the integers is " << sum << endl;

	cout << "Enter the float value \n";
	cin >> d >> e;

	sum = add(d, e);
	cout << "Sum of the float is  " << sum << endl;

	return 0;
}
