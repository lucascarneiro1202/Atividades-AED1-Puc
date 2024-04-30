// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    int x = 0, y = 0, a = 0;
    printf ( "%s", "3 - Exercicio0113.\n" );
    printf ( "%s", "\nDigite um valor inteiro: " );
    scanf ( "%d", &x );
    printf ( "%s", "Digite outro valor inteiro: " );
    scanf ( "%d", &y );
    printf ( "%s", "\nSupondo que %d e %d são os lados de um retângulo. ", x, y );
    a = x * y;
    a = a * 6;
    printf ( "%s", "\n\nA área seis vezes maior que a desse retângulo é: %d.", a );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);

}

/*
3 - Exercicio0113.

Digite um valor inteiro: 3
Digite outro valor inteiro: 5

Supondo que 3 e 5 são os lados de um retângulo. 

A área seis vezes maior que a desse retângulo é: 90.
*/