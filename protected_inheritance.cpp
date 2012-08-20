#include<iostream>
using namespace std;

class A{

	protected:
	int a,b;
	public:
		void get()
		{
			cout<<"Enter the value of a and b\n";
			cin>>a>>b;
		}
		void show()
		{
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};

class B : protected A{

	protected:
		int c;
	public:
		void set()
		{
			A::get();
		}
		void add()
		{
			c=a+b;
		}
		void disp()
		{
			A::show();
			cout<<"c=a+b= "<<c<<endl;
		}
};
main()
{
	B b;
	b.set();
	b.add();
	b.disp();
}
