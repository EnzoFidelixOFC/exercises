#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    printf("%d > 10 -> %d\n", x, x > 10);
    printf("%d >= 10 -> %d\n", x, x >= 10);

    printf("%d < 10 -> %d\n", x, x < 10);
    printf("%d <= 10 -> %d\n", x, x <= 10);

    printf("%d == 10 -> %d\n", x, x == 10); // igualdade
    printf("%d != 10 -> %d\n", x, x != 10); // diferença

    return 0;
}