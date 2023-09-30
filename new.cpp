#include <iostream>
#include "new.h"
using namespace std;
void myclass::display()
{
    cout << x << "\t" << y << endl;
}
<<<<<<< HEAD
istream &operator>>(istream &input, myclass &another)
{
    input >> another.x >> another.y;
    return input;
}
ostream &operator<<(ostream &output, myclass &another)
{
    output << another.x << another.y << endl;
    return output;
=======
myclass myclass::add(const myclass &obj1)
{
    myclass temp;
    temp.x = x + obj1.x;
    temp.y = y + obj1.y;
    return temp;
>>>>>>> new_changes
}