/*2.
Assign and print the roll number, phone number and address 
of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'
*/
#include<iostream>
using namespace std;
class student
{
	public:
		string name,adress;
		int roll_no;
		long int mobino;
		 student()
		 {
		 	cout<<"\nEnter the students details:";
		 	cout<<"\nEnter the students name:";
		 	cin>>name;
		 	cout<<"\nEnter the students rollno:";
		 	cin>>roll_no;
		 	cout<<"\nEnter the students mobino:";
		 	cin>>mobino;
		 	cout<<"\nEnter the students adress:";
		 	cin>>adress;
		 	
		 }
		 void show()
		 {
		 	cout<<"\nname="<<name;
		 	cout<<"\nrollno="<<roll_no;
		 	cout<<"\mobi no="<<mobino;
		 	cout<<"\nadress="<<adress;
		 }
};

main()
{
	student r1,r2;
	r1.show();
	r2.show();
	
}

