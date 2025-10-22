#include <iostream>
using namespace std;

int main()
{
    // binary and infix
    cout << 2 + 2 + 10 << endl;
    cout << 2 - 2 << endl;
    cout << 2 * 2 << endl;
    cout << 2 / 2 << endl;
    cout << 10 % 4 << endl; // % resto da divisão
    cout << 10 + 3 * 7 << endl;
    cout << (10 + 3) * 7 << endl;

    int x;
    int y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << x + y << endl
         << x - y << endl
         << x * y << endl
         << x / y << endl
         << x % y << endl;

    return 0;
}