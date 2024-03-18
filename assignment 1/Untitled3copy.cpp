#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int roll_no;
		student()
		{
			name="john";
			roll_no=5;
			
		}
		void show()
		{
			cout<<"\nName="<<name<<"\nroll_no="<<roll_no;
		}
};
main()
{
	student r1;
	r1.show();
	
}
