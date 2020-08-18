#include <iostream>
using namespace std;


class student
{
	public:
		void input();
		void display();
	private:
		int roll_no;
		char name[20];
};


void student::input()
{
	cout << "Enter the name " << "\n";
	cin >> name;

	cout << "Enter the roll-no: " << "\n";
	cin >> roll_no;
}

void student::display()
{
	cout << "Roll-no is  " << roll_no << "\n";
	cout << "Name is  " << name << "\n";
}


class exam_inherit : public student
{
	public:
		void input_exam();
		void display_exam();
		int total;
	private:
		int sub1;
		int sub2;
		int sub3;
};

void exam_inherit :: input_exam()
{
	cout << "Enter marks of subject1: " << "\n";
	cin >> sub1;
	cout << "Enter marks of subject2: " << "\n";
	cin >> sub2;
	cout << "Enter marks of subject3: " << "\n";
	cin >> sub3;
}

void exam_inherit :: display_exam()
{
	total = sub1 + sub2 + sub3;
	cout << "Total is:  " << total << "\n";
}

class grade_inherit : public exam_inherit
{
	public:
		void average();
	private:
		int avg;
};

void grade_inherit :: average()
{
	avg = total/3;
	cout << "Average is :"<< avg << "\n"; 
}

int main()
{
	grade_inherit gd;

	gd.input();
	gd.input_exam();
	gd.display();
	gd.display_exam();
	gd.average();

 	return 0;
}	
