#include<iostream>
using namespace std;
class student{

	int roll_no,marks,grade;
	char name[100];
	
	public: void get()
		{
			cout << "Enter the roll_no, name and the marks of the student";
			cin >>roll_no>>name>>marks;
			grades();
		}
		void show()
		{
			cout<< "Roll Number ="<< roll_no;
			cout<< "name = "<< name;
			cout<< "marks = "<< marks;
		}
		void grades()
		{
			if(marks>80)
				grade = 'A';
			else
			if(marks>60)
				grade = 'B';
			else
				grade = 'C';
		}
};

main()
{
	int menu=1;
	student data;
	while(menu!=0)
	{
		cout << "Press the number to perform the task\n";
		cout << "Option\tNumber\nEnter data\t1\nShowdata\t2\n";
		cin >> menu;
		if(menu==1)
			data.get();
		else
		if(menu==2)
			data.show();
		else
			cout << "Bye";
	}
}
