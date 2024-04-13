// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...
#define PI 3.1415

int main ()
{
    float x = 0, a = 0;
    printf ( "%s", "9 - Exercicio0119." );
    printf ( "%s", "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nSupondo que %f represente o raio de um círculo.", x );
    x = x / 6;
    a = ( PI * pow ( x, 2 ) ) / 2;
    printf ( "%s", "\n\nA área de um semicírculo com um sexto do raio é: %f", a );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
9 - Exercicio0119.

Digite um valor real: 5

Supondo que 5.000000 represente o raio de um círculo.

A área de um semicírculo com um sexto do raio é: 1.090799

Apertar ENTER para terminar.
*/