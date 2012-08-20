#include<iostream>
using namespace std;

class A{

	int Feet,inch;
	public:
		void get()
		{
			cout<<"Enter the value of feet and the inch\n";
			cin>>Feet>>inch;
		}
		A operator+(A s)
		{
			A t;
			t.Feet=Feet+s.Feet;
			t.inch=inch+s.inch;
			while(t.inch>=12)
			{
				t.inch-=12;
				t.Feet++;
			}
			return(t);
		}
		void show()
		{
			cout<<"Feet = "<<Feet<<" Inch = "<<inch<<endl;
		}
};

main()
{
	A a1,a2,a3;
	a1.get();
	a1.show();
	a2.get();
	a2.show();
	a3=a1+a2;
	cout<<"Final output : \n";
	a3.show();
	
}
