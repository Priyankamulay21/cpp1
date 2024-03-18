/*calculate the volume sphere:
promt:write a program that take the radius of a sphere as input and calculates
its volume=4/3*3.14r*r*/
#include<iostream>
using namespace std;
main()
{
	float r,v;
	cout<<"Enter the redius of sphere=";
	cin>>r;
	v=1.33*3.14*r*r*r;
	cout<<"The volume of the sphere is="<<v;
	
}
