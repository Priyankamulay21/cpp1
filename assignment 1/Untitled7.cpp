/*7.
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard*/
#include<iostream>
#include<math.h>
using namespace std;
class Area 
{
 private:
    int l,b,a;
    public:
     void area_return()
     {
         cout<<"\nEnter the length=";
         cin>>l;
         cout<<"\nEnter the breadth=";
         cin>>b;
         
        
     }
    int get()

    {
        a=l*b;
        return a;
    }
     



};
int main()
{
    Area a;
    int c;
    a.area_return();
    c=a.get();
    cout<<"\narea="<<c;
    
}
