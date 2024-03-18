/* take the total bill amount from user and then depending on sell give discount
   if total_bill>10000 10% off, if bill is between 9999 to 5000 5% off on bill ,if bill in 4999 to 2000 2% off
   below 2000 just 100INR off.
  output: Total bill amount  11000
                discount given x% 10%
                Discount of INR  1100
                Amount to pay   11000-1100
 */
 
#include<iostream>
using namespace std;
main()
{
float total_bill,discount,amount;
cout<<"\n Enter total amount.";
cin>>total_bill;
cout<<"\n Total bill amount "<<total_bill;

if(total_bill>10000)
{
cout<<"\n your discount is 10% 0ff";
discount=total_bill*10/100;
cout<<"\n your discount amount is "<<discount;
amount=total_bill-discount;
cout<<"\n you have to pay "<<amount;
}
else if(total_bill<=9999 && total_bill>=5000)
{
cout<<"\n your discount is 5% 0ff";
discount=total_bill*5/100;
cout<<"\n your discount amount is "<<discount;
amount=total_bill-discount;
cout<<"\n you have to pay "<<amount;
}

else if(total_bill<=4999 && total_bill>=2000){
	
	
cout<<"\n your discount is 2% 0ff";
discount=total_bill*2/100;
cout<<"\n your discount amount is "<<discount;
amount=total_bill-discount;
cout<<"\n you have to pay "<<amount;
}
if(total_bill<2000)
{
cout<<"\n your discount is 100 0ff";

cout<<"\n your discount amount is 100 ";

amount=total_bill-100;

cout<<"\n you have to pay "<<amount;
}

}




