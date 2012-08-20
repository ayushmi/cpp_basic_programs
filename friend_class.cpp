#include<iostream>
using namespace std;
class A{

	int a;
	public:
		A()
		{
			a=10;
		}
		friend class B;
		~A()
		{
			cout<<"object Destroyed!!!\n";
		}	
};
class B{
	
	int b;
	public:
		B()
		{b=20;}
		friend class A;
                void show(A s)
                {
                        cout<<"The value of a = "<<s.a<<endl;
                        cout<<"The value of b = "<<b<<endl;
                }


};
int main()
{
	A a;
	B b;
	b.show(a);
}
