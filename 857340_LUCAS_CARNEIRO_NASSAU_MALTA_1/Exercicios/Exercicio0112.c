// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    int x = 0;
    float m = 0, a = 0, p = 0;
    printf ( "%s", "2 - Exercicio0112.\n" );
    printf ( "%s", "\nDigite um valor inteiro: " );
    scanf ( "%d", &x);
    printf ( "%s", "\nSupondo que %d é o lado de um quadrado. ", x);
    m = x / 2.0;
    a = pow ( m, 2.0 );
    p = m * 4.0;
    printf ( "%s", "\n\nA área e o perímetro de outro quadrado com a metade do tamanho lado são, respectivamente: %f e %f.", a, p);
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);

}

/*
2 - Exercicio0112.

Digite um valor inteiro: 5

Supondo que 5 é o lado de um quadrado. 

A área e o perímetro de outro quadrado com a metade do tamanho lado são, respectivamente: 6.250000 e 10.000000.
*/