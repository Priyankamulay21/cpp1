

/*Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'*/
#include<iostream>
using namespace std;
class students
{
	private:
		int roll_no;
		int long mobino;
		char name[20];
		char address[50];
		public:
			void get_info()
			{
				cout<<"\n  Enter the students name=";
				cin>>name;
				cout<<"\n  Enter the roll no=";
				cin>>roll_no;
				cout<<"\n  Enter the mobino=";
				cin>>mobino;
				cout<<"\n  Enter the address=";
				cin>>address;
				
				
			}
			void show_info()
			{
				cout<<"\n name="<<name;
				cout<<"\n roll_no="<<roll_no;
				cout<<"\n mobino="<<mobino;
				cout<<"\n Address="<<address;
			}
			
};
main()
{

students s1;
students s2 ;
s1.get_info();
s1.show_info();
s2.get_info();
s2.show_info();

