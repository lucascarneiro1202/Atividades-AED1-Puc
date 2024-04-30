// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    float x = 0, alt = 0, ar = 0, p = 0;
    printf ( "%s", "6 - Exercicio0116." );
    printf ( "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nSupondo que %f represente o lado de um triângulo equilátero.", x );
    x = 3 * x;
    alt = ( x * sqrt (3) ) / 2;
    ar = ( pow (x, 2) * sqrt (3) ) / 4;
    p = 3 * x;
    printf ( "%s", "\n\nA altura, a área e o perímetro de um triângulo com o triplo desse lado são, respectivamente: %f, %f e %f.", alt, ar, p );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
5 - Exercicio0115.

Digite um valor real: 5.0

Supondo que 5.000000 represente o lado de um triângulo equilátero.

A altura, a área e o perímetro de um triângulo com o triplo desse lado são, respectivamente: 12.990381, 97.427856 e 45.000000.

Apertar ENTER para terminar.
*/