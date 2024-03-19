
/*3.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
using namespace std;
class Tringle
{
	private:
		int s1,s2,s3,height,perimeter;

		float area;
		public:
			void get_Tringle()
			{
				cout<<"\n enter the s1";
				cin>>s1;
				cout<<"\n enter the s2";
				cin>>s2;
				cout<<"\n enter the s3";
				cin>>s3;
				cout<<"\n enter the height";
				cin>>height;
				
				area=(s1*s2)/2;
				
				perimeter=s1+s2+s3;
			}
			void show_Tringle()
			{
				cout<<"\narea ="<<area;
				cout<<"\n perimeter ="<<perimeter;
			}
};
main()
{
	Tringle p;
	
	
	p.get_Tringle();
	
	p.show_Tringle();
	
	
}
