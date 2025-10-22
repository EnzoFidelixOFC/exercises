#include <cstdio>
using namespace std;

int main()
{
    int x = 2;
    int y = 1;

    // incremento
    x++; // postfix
    ++y; // prefix
    printf("%d %d\n", x, y);

    // decremento
    --x; // prefix
    y--; // postfix
    printf("%d %d\n", x, y);

    // x = 2 e y = 1
    printf("%d", x-- == ++y);
    // x = 1 e y = 2

    return 0;
}