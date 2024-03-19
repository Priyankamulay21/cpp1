6. *Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/

#include<iostream>
using namespace std;
class Area
{
    private:
    int l;
    int b;
    int area;
    public:
    void setDim()
    {
        cout<<"\nEnter the length=";
        cin>>l;
        cout<<"\nEnter the breadth=";
        cin>>b;
        area=l*b;

    }
    void get_Area()
    {
        cout<<"\n area of rectangle="<<area;
    }
};
main()
{
    Area t2;
    t2.setDim();
    t2.get_Area();
    
}



