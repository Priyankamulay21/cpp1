12.
Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects

#include<iostream>
using namespace std;
class Employee
{
private:
	int doj;
	char name[50];
	float sal;

public:	

	void set_Employee()
	{
		cout<<"\nEnter Date of joining name & salary";
		cin>>doj>>name>>sal;
		
	}
	
	void get_Employee()	{
		cout<<"\n"<<doj      <<"\t             "<<name        <<"\t         "<<sal;
		
		
	}
	
};
main()
{
	Employee obj[10];
	int i;
	cout<<"\nEnter 10 Employee details";
	for(i=0;i<10;i++)
	{
	obj[i].set_Employee();
	}
	cout<<"\nEmployee Details";
	cout<<"\nDate of joining    name        salary";
	cout<<"\n---------------------------------------------------";
	for(i=0;i<10;i++)
	{
		
	    obj[i].get_Employee();
	}
	
}



13.
Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.
*/
#include<iostream>
using namespace std;
class Student{
	public:
		int avgmark, rollno=0;
	void set(){
		cout<<"\nenter average marks";
		cin>>avgmark;
		rollno++;
	}
	void get(){
		int rollno;
		cout<<"\nroll_no="<<rollno<<"      Average Marks="<<avgmark;
	}
};
main(){
Student s[8];
int i;
for(i=0;i<8;i++){
	s[i].set();
}
for(i=0;i<8;i++){
	s[i].get();
}
}


