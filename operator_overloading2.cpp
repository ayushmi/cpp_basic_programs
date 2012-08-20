#include<iostream>
using namespace std;
class A{

	int a,b,c;
	public:
	A()
	{
		a=1,b=2,c=3;
	}
	void operator++()
	{
		//pre increment
		a++;
		b*=10;
		c+=20;
		cout<<"Overloaded pre increment called :) \n";
	}
	void operator++(int)
	{
		a++;
		b*=5;
		c+=10;
		cout<<"Overloaded post increment called :) \n";
	}
	void show()
	{
		cout<<"a = "<<a<<"b = "<<b<<"c = "<<c<<endl;
	}
};

main()
{
	A a;
	++a;
	a.show();
	a++;
	a.show();
}
