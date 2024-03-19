5 /*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.
*/

#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int l, b;
    public:
        void get(int len, int bre)
        {
            l = len;
            b = bre;
        }
        int area()
        {
            return l * b;
        }
};
int main(){
    Rectangle T1,T2;
    T1.get(4,5);
    T2.get(5,8);
    cout << "\nArea of r1: " <<T1.area() ;
    cout << "\nArea of r2: " << T2.area() ;
}

