#include <iostream>
#include "new.h"
using namespace std;
int main()
{
    // int a, b;
    // cout << "Enter the vlaue of a and b\n";
    // cin >> a >> b;
    // myclass obj;
    // obj.get_value(a, b);
    cout << "Enter the vlaues of the first object\n";
    myclass obj;
    cin >> obj;
    // obj.display();
    cout << obj;
    cout << "A small change has been added to the file" << endl;
    myclass obj2;
    obj2.get_value(2, 3);

    cout << "The value after adding two vectors is" << endl;
    myclass obj3 = obj.add(obj2);
<<<<<<< HEAD
    // obj3.display();
    cout << obj3;
    cout << "We added a branch called new_changes to add 'add' function " << endl;
    cout << "We created emergency_fix to fix the error without disturubing master branch and new_changes branch\n";
=======
    obj3.display();
    cout<<"We are editing the files now\n";
>>>>>>> new_changes
}
