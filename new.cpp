#include <iostream>
#include "new.h"
using namespace std;
void myclass::display()
{
    cout << x << "\t" << y << endl;
}
istream &operator>>(istream &input, myclass &another)
{
    input >> another.x >> another.y;
    return input;
}
ostream &operator<<(ostream &output, myclass &another)
{
    output << another.x << another.y << endl;
    return output;
}