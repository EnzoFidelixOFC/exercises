#include <cstdio>

int main()
{
    double price = 100.50;
    double tax = 0.10;
    // Sentença de código que define a criação de uma variável dentro do programa.
    // Escreva tipo identificador = valor;

    // Escreva tipo identificador = expressão;
    double finalPrice = price * (1 + tax);
    // * = multiplicação

    printf("The final price is %f.\n", finalPrice);
    
    return 0;
}