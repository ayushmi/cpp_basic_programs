#include<iostream>
using namespace std;
class A{

	int a;
	public:
		A()
		{
			a=10;
		}
		static void static_fun()
		{
			cout<<"Static Function called without making object of the class :) \n";
		}
};
main()
{
	A::static_fun();
}
