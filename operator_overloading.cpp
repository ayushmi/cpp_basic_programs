#include<iostream>
using namespace std;

class A{

	int a;
	public:
	A()
	{a=10;}
	A operator+(A a1)
	{
		A a2;
		a2.a=a+a1.a;
		cout<<"operator overloading executed :) \n";
		return(a2);
		
	}
	void show()
	{
		cout<<"a = "<<a<<endl;
	}
};

int main()
{
	A a1,a2,a3;
	a1.show();
	a2.show();
	a3=a1+a2;
	a3.show();
}
