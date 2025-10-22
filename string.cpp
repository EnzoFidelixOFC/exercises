#include <iostream>
using namespace std;

int main()
{   
    string title = "Mr. ";
    string name = ("John");
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[1] << endl;
    cout << end << endl;

    cout << title + name << endl; // concatenação string: title + name

    name = name + " Doe"; // += ou então: name + " Doe";
    name.append(end);
    cout << name << endl;

    cout << title.append(name) << endl;
    cout << title << endl;

    return 0;
}