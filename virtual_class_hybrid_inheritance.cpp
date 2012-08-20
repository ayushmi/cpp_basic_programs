#include<iostream>
using namespace std;
class A{
	
	int a;
	public:
		A()
		{a=10;}
		void showA()
		{
			cout<<"THe value of a is "<<a<<endl;
		}
};
class B:virtual public A{

	int b;
	public:
		B()
		{b=20;}
		void showB()
		{
			cout<<"The value of b is "<<b<<endl;
		}
	
};
class C:virtual public A{

        int c;
        public:
                C()
                {c=30;}
                void showC()
                {
                        cout<<"The value of c is "<<c<<endl;
                }

};
class D:public B,public C{

        int d;
        public:
                D()
                {d=40;}
                void showD()
                {
                        cout<<"The value of d is "<<d<<endl;
                }

}; 
int main()
{
	D d;
	d.showA();
	d.showB();
	d.showC();
	d.showD();
}
