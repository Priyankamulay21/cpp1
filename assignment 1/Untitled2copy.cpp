#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int rollno;
	student()
		{
		
		name ="john";
		rollno =2;
	}
		void show()
		{

			cout<<"\nname="<<name;
			cout<<"\nrollno="<<rollno;
		}
};
main()
{
	student t1;
	t1.show();
}
