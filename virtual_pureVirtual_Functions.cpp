#include<iostream>
using namespace std;
class A{

	int a;
	public:
	virtual void show()=0;	//This is pure virtual function.
	virtual void show2()
	{
		cout<<"Show2 of A is called :) \n";
	}
};
// Here is the class B which is publically accessing the class A
class B:public A{

	int b;
	public:
	void show()
	{
		cout<<"Show is called :) \n";
	}
	void show2()
	{
		A::show2();
		cout<<"Show2 of b is called :) \n";
	}
};

main()
{
	A *ptr;
	B b;
	ptr=&b;
	ptr->show();
	ptr->show2();
}
