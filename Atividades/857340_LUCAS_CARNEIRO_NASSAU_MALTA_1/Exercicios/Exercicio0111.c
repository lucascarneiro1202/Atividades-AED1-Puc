// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    int x = 0;
    printf ( "%s\n", "1 - Exercicio0111." );
    printf ( "\n%s", "Digite um valor inteiro: " );
    scanf ( "%d", &x);
    printf ( "\n%s", "Supondo que %d é o lado de um quadrado. ", x);
    x = x * 3;
    x = pow ( x, 2 );
    printf ( "\n\n%s %d.", "A área de outro quadrado com o lado três vezes maior é:", x);
    printf ( "\n\n%s", "Apertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
1 - Exercicio0111.

Digite um valor inteiro: 5

Supondo que 5 é o lado de um quadrado. 

A área de outro quadrado com o lado três vezes maior é: 225.
*/