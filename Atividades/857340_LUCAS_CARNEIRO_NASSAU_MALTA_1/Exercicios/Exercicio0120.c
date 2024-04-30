// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...
#define PI 3.1415

int main ()
{
    float x = 0, v = 0;
    printf ( "%s", "10 - Exercicio0120." );
    printf ( "%s", "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nSupondo que %f represente o raio de uma esfera.", x );
    x = ( x * 3 ) / 4;
    v = ( 4 * PI * pow ( x, 3 ) ) / 3;
    printf ( "%s", "\n\nO volume de uma esfera com três quartos desse raio é: %f", v );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
10 - Exercicio0120.

Digite um valor real: 5.0

Supondo que 5.000000 represente o raio de uma esfera.

O volume de uma esfera com três quartos desse raio é: 220.886719

Apertar ENTER para terminar.
*/