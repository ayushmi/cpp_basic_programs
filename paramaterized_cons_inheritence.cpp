#include<iostream>
using namespace std;

class A{

	int a;
	public:
		A(int x)
		{
			a=x;
		}
		void showA()
		{
			cout<<"The value of a is "<<a<<endl;
		}
};
class B : public A{

	int b;
	public:
		B(int x,int y,int z):A(x)
		{
			b=y+z;
		}
		void showB()
		{
			A::showA();
			cout<<"The value of b is "<<b<<endl;
		}
};

main()
{
	B b(1,2,3);
	b.showB();
}
