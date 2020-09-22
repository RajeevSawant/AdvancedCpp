#include <iostream>
#include <vector>
using namespace std;


void display (vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < 15)
		{
			throw "The Employee is Under Age!";
		}
		cout << "The Age of Employee is " << nums[i] << "\n";
	}
}



int main()
{
	vector <int> inp;
	int num, temp;

	cout << "Enter the no. of Employees \n";
	cin >> num;


	cout << "Enter the age of employees \n";

	for(int i = 0; i < num; i++)
	{
		cin >> temp;
		inp.push_back(temp);
	}
	
	try
	{
		display(inp);
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}

	return 0;
}
