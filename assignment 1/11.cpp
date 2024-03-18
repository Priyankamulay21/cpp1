/*find the simple interest 
write a program that takes the principal amount,inetrest
rate,and time period as input and calculates the simple interest*/
#include<iostream>
using namespace std;
main()
{
	int p;
	float n,si,r;
	cout<<"Enter the value of p,n and r:";
	cin>>p>>r>>n;
	si=p*r*n;
	cout<<"The simple intrest is:"<<si;
}
