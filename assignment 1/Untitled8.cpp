
8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.

#include<iostream>
using namespace std;
class average 
{
	
		public:
			 int calaverage(int a,int b,int c)
			{
			
			
			
			return (a+b+c)/3;
		}
		
			
		

};
 int main()
{
	average a1;
	cout<<"\nEnter three Numbers=";
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
    float avg;
    
	avg=a1.calaverage(a,b,c);
	cout<<"\naverage="<<avg;
    
}


9.
Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user.

#include<iostream>
using namespace std;
class Complex
{
	public:
	int a,b;
	char c1,c2;
	void add()
	{
	  cout<<"\nEnter real part";
	  cin>>a>>b;
	  cout<<"\nenter imaginary part";
	  cin>>c1>>c2;
}
	  void diff()
	  {
	  
	  cout<<"\n"<<a<<c1<<"+"<<b<<c2<<"="<<a-b<<c1-c2;
     }
      void pro()
	  {
      	
      	cout<<"\n"<<a<<c1<<"+"<<b<<c2<<"="<<a*b<<c1*c2;
	  }
	
};
main()
{
	
	Complex c1;
	c1.add();
	c1.diff();
	c1.pro();
}





