/*Accept a number from user only if number is perfectly div by 5 and 3 
else till it is not given keep takin number
*/
#include<iostream>
using namespace std;
main()
{
	int a,flag;
	cout<<"Enter a numbers:";
	cin>>a;
do

	{
		if(a%5==0&&a%3==0)
		{
		
	flag=1;
	cout<<"\nThe number is fully divisible by 3 and 5";
}

else
{
	cout<<"\nThe number is not divisible by 3 and 5";
}
break;
	    
 	
	  }
	  while(flag!=1);
	  
	    
}

