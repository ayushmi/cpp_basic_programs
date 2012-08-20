#include<iostream>
using namespace std;
class B;
class A{

	int a;
	public:
		void get()
		{
			cout<<"Enter an integer value for a \n";
			cin>>a;
		}
		friend void show(A,B);
};

class B{

	int b;
	public:
		void get()
		{
			cout<<"Enter the value of b\n";
			cin>>b;
		}
		friend void show(A,B);
};
void show(A s,B t)
{
	cout<<"Hey! this is friend function. \nThe value of a = "<<s.a<<endl;
	cout<<"And the value of b = "<<t.b<<endl;
}

main()
{
	A a1;
	B b1;
	a1.get();
	b1.get();
	show(a1,b1);
}
