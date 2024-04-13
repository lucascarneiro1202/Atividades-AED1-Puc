// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    float x = 0, v = 0;
    printf ( "%s", "7 - Exercicio0117." );
    printf ( "%s", "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nSupondo que %f represente os lados de um cubo.", x );
    x = x * 5;
    v = pow ( x, 3 );
    printf ( "%s", "\n\nO volume de um cubo com cinco vezes a medida desse lado é: %f", v );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
7 - Exercicio0117.

Digite um valor real: 5

Supondo que 5.000000 represente os lados de um cubo.

O volume de um cubo com cinco vezes a medida desse lado é: 15625.000000

Apertar ENTER para terminar.
*/