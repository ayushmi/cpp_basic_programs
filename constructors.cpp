#include<iostream>
using namespace std;
class A{

	int a,b,c;
	public:
		A()
		{
			a=10;
			cout<<"Default constructor called :) and a = "<<a<<endl;
		}
		A(int  x, int y)
		{
			a=10;
			cout<<"paramaterized constructor called :) recieved x = "<<x<<"and y = "<<y<<endl; 
		}
		A(A &a1)
		{
			a=10;
			a = a + a1.a;
			cout<<"Copy Constructor called and a becomes "<<a<<endl;
		}
};
main()
{
	A a1,a2(2,3),a3(a1);
}
