#include<iostream>
using namespace std;
class A{

	int a;
	public:
		A()
		{
			a=10;
		}
		void fun()
		{
			cout<<"FUN 1 is called :) a="<<a<<endl;
		}
		void fun(int x)
		{
			cout<<"FUN 2 is called :) a+x="<<a+x<<endl;
		}
		void fun(int x, char y)
		{
			cout<<"FUN 3 is called :) a+x="<<a+x<<" and character y="<<y<<endl;
		}
		void fun(char name[])
		{
			cout<<"FUN 4 is called :) name ="<<name<<endl;
		}
};

int main()
{
	int x=10;
	char y='A',name[6]="Ayush";
	A a;
	a.fun();
	a.fun(x);
	a.fun(x,y);
	a.fun(name);
	return(1);
}	
