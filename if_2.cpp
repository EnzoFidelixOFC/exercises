#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

   // if(number % 2 == 0); errado -> ;
    if(number % 2 == 0) // certo
    {
        cout << "Even number." << endl;
    }

    return 0;
}