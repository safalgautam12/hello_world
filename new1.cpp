#include <iostream>
#include "new.h"
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the vlaue of a and b\n";
    cin >> a >> b;
    myclass obj;
    obj.get_value(a, b);
    obj.display();
    cout << "A small change has been added to the file" << endl;
}