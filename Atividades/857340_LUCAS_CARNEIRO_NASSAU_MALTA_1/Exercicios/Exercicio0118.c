// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeia de caracteres
#include <math.h> // para funcoes matematicas: pow(), sqrt(), sin(), cos()...

int main ()
{
    float x = 0, y = 0, z = 0, v = 0;
    printf ( "%s", "8 - Exercicio0118." );
    printf ( "%s", "\n\nDigite um valor real: " );
    scanf ( "%f", &x );
    getchar ();
    printf ( "%s", "\nDigite outro valor real: " );
    scanf ( "%f", &y );
    getchar ();
    printf ( "%s", "\nDigite mais um valor real: " );
    scanf ( "%f", &z );
    getchar ();
    printf ( "%s", "\nSupondo que %f, %f e %f correspondam ao comprimento, à largura e à altura de um paralelepípedo, respectivamente.", x, y, z );
    x = x / 8;
    y = y / 8;
    z = z / 8;
    v = x * y * z;
    printf ( "%s", "\n\nO volume do sólido com um oitavo desses valores é: %f", v );
    printf ( "%s", "\n\nApertar ENTER para terminar." );
    getchar( ); 
    return (0);
}

/*
8 - Exercicio0118.

Digite um valor real: 3.0

Digite outro valor real: 4.0

Digite mais um valor real: 5.0

Supondo que 3.000000, 4.000000 e 5.000000 correspondam ao comprimento, à largura e à altura de um paralelepípedo, respectivamente.

O volume do sólido com um oitavo desses valores é: 0.117188

Apertar ENTER para terminar.
*/