// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    int x = 0, y = 0;
    float a = 0, p = 0;
    printf ( "%s", "4 - Exercicio0114.\n" );
    printf ( "\nDigite um valor inteiro: " );
    scanf ( "%d", &x );
    printf ( "%s", "Digite outro valor inteiro: " );
    scanf ( "%d", &y );
    printf ( "%s", "\nSupondo que %d e %d são os lados de um retângulo. ", x, y );
    x = x / 4.0;
    y = y / 4.0;
    a = x * y;
    p = 2 * ( x + y );
    printf ( "%s", "\n\nA área e o perímetro de um retângulo com um quarto dos tamanhos dos lados são, respectivamente: %f e %f.", a, p );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);

}

/*
4 - Exercicio0114.

Digite um valor inteiro: 5
Digite outro valor inteiro: 3

Supondo que 5 e 3 são os lados de um retângulo. 

A área e o perímetro de um retângulo com um quarto dos tamanhos dos lados são, respectivamente: 0.937500 e 4.000000.
*/