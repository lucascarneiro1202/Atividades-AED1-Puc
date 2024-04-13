// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    float x = 0,  y = 0, a = 0;
    printf ( "%s", "5 - Exercicio0115." );
    printf ( "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nDigite outro valor real: " );
    scanf ( "%f", &y );
    getchar ();
    printf ( "%s", "\nSupondo que %f e %f representem base e altura, respectivamente, de um triângulo.", x, y );
    y = 2 * y;
    a = ( x * y ) / 2;
    printf ( "%s", "\n\nA área de um triângulo com o dobro dessa altura é: %f.", a );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
5 - Exercicio0115.

Digite um valor real: 3

Digite outro valor real: 4

Supondo que 3.000000 e 4.000000 representem base e altura, respectivamente, de um triângulo.

A área de um triângulo com o dobro dessa altura é: 12.000000.
*/