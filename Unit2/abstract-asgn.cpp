#include <iostream>
#include <string>
using namespace std;


class abstractInterface
{
	public:
		virtual void Info() = 0;
};



class marks  : public abstractInterface
{
	public:
		void Info()
		{
			cout << "Enter marks of Subjects \n";
			cin >> sub1 >> sub2 >> sub3;
		}

		int sub1, sub2, sub3;
};

class sports : public abstractInterface
{
	public:
		void Info()
		{
			cout << "Enter marks of Sports \n";
			cin >> sports;
		}

		int sports;
};


class total : public marks, public sports 
{
	public:
		void Info()
		{
			cout << "The total marks are " << getTotal() << "\n";
		}

		int getTotal()
		{
			return (sub1 + sub2 + sub3 + sports);
		}
};

class result : public total
{
	public:
		void input();
		void display()
		{
			cout << "The name of the student is  " << name <<"\n";
			cout << "The roll-no of the student is  " << roll_no << "\n";
		}
		
		string name;
		int roll_no;
};

void result :: input()
{
	cout << "Enter the name of the student \n";
	cin >> name;

	cout << "Enter the roll-no \n";
	cin >> roll_no;
}

int main()
{
	marks obj1;
	obj1.Info();

	sports obj2;
	obj2.Info();

	result obj4;
	obj4.input();
	obj4.display();
	

	total obj3;
	obj3.Info();

	return 0;
}
