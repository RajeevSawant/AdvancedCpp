
#include <iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
		char name[20];
		int sub1;
		int sub2;
		int sub3;
		int total;
};

class Show : public Student
{
	public:
		void input();
		void display();
};


void Show :: input()
{
	cout << "Enter the roll-no  \n";
	cin >> roll_no;

	cout << "Enter the name  \n";
	cin >> name;
}

void Show :: display()
{
	cout << "The Roll-no is " << roll_no << endl;
	cout << "The Name is  " << name << endl;
}

class Exam : public Student
{
	public:
		void input_exam();
		void total_marks();
};


void Exam :: input_exam()
{
	cout << "Enter the marks of sub1 \n";
	cin >> sub1;

	cout << "Enter the marks of sub2 \n";
	cin >> sub2;
	
	cout << "Enter the marks of sub3 \n";
	cin >> sub3;
}



void Exam :: total_marks()
{
	total = sub1 + sub2 + sub3;
	cout << "The Total is : " << total << endl;
}


int main()
{
	Student st;
	Show sw;
	Exam ex;

	sw.input();
	ex.input_exam();

	sw.display();
	ex.total_marks();

	return 0;
}
