#include <iostream>
using namespace std;


class Student
{
	protected:
		int roll_no;
		char name[20];
};



class Exam_Inherit
{
	protected:
		int sub1;
		int sub2;
		int sub3;
};


class grade: public Student, public Exam_Inherit
{
	public:
		void input();
		void display();
		void average();
		int total;
		void input_exams();
		void display_exams();

	private:
		int avg;
};


void grade :: input()
{
	cout << "Enter the Roll-no \n";
	cin >> roll_no;

	cout << "Enter the name \n";
	cin >> name;
}


void grade :: display()
{
	cout << "The Roll-No of the student is " << roll_no << endl;
	cout << "The Name of the student is "<< name << endl;
}

void grade :: input_exams()
{
	cout << "Enter the marks of sub1 \n";
	cin >> sub1;

	cout << "Enter the marks of sub2 \n";
	cin >> sub2;

	cout << "Enter the marks of sub3 \n";
	cin >> sub3;
}


void grade :: display_exams()
{
	total = sub1 + sub2 + sub3;
	cout << "The total marks is " << total << endl;
}


void grade :: average()
{
	avg = total / 3;
	cout << "The Average of the marks is " << avg << endl;
}


int main()
{

	grade gd;
	gd.input();
	gd.input_exams();
	gd.display();
	gd.display_exams();
	gd.average();

	return 0;
}


