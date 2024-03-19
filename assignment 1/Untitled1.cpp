1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.



#include<iostream>
using namespace std;
class students
{
	private:
		int roll_no;
		char name[20];
		public:
			void get_info()
			{
				cout<<"\nEnter the student name:";
				cin>>name;
				cout<<"\nEnter the roll no:";
				cin>>roll_no;


			}
			void show_info()
			{
				cout<<"\n name"<<name<<"\n roll no"<<roll_no;
			}
		
			
};
main()
{
students t1;
t1.get_info();
t1.show_info();
}


