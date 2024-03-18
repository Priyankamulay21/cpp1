/*find area ofright angle tringle
promt:write a program that takes the base and height of a right angle 
tringle as input
and calculates its area
formula=A=1/2*bh*/
#include<iostream>
using namespace std;
main()
{
	float b,h,a;
	cout<<"Enter the base and height of right angle tringle:";
	cin>>b>>h;
	a=(0.5)*(b)*(h);
	cout<<"The area of the right angle tringle is"<<a;
}
