/*find the compoud interst
write aprogram that takes the principle amount,interest 
rate compounding frequency and time period as input and calculates 
the compound interest=
A=p(1+r/n)^n*/
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float p,r,t,am,ci;
	cout<<"Enter the value of p";
	cin>>p;
	cout<<"Enter the value of r";
	cin>>r;
	cout<<"Enter the value of t";
	cin>>t;
	am=p*(pow((1+r/100),t));
	cout<<"\n Amount="<<am;
	ci=am-p;
	cout<<"The compound interest is="<<ci;
}


