/*
    Autor: Lucas Carneiro Nassau Malta
    Matrícula: 857340
*/

// EXEMPLO101

#include <stdio.h>

int main1 ()
{
    printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ();
    return ( 0 );
}

/*
    EXEMPLO101 - PRIMEIRO EXEMPLO EM C
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO102

#include <stdio.h>
#include <stdlib.h> 

int main2 ( )
{
    system ( "cls" ); 
    printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
    system ( "pause" ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO102 - PRIMEIRO EXEMPLO EM C
    Pressione qualquer tecla para continuar. . . 
*/

// EXEMPLO103

#include <stdio.h>
#include <stdlib.h> 

void clrscr ( ) { system ( "cls" ); } 

int main3 ( )
{
    clrscr ( ); 
    printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\n" ); 
    printf ( "MATRICULA: ______ ALUNO : __________________" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO103 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO104

#include <stdio.h>
#include <stdlib.h> 

int main4 ( )
{
    printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\n" ); 
    printf ( "MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "\n" ); 
    printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO104 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    PRESSIONAR <Enter> PARA TERMINAR. 
*/

// EXEMPLO105

#include <stdio.h> 
#include <stdlib.h> 

int main5 ( )
{
    printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); 
    printf ( "\nINTEIRO : %d", 10 ); 
    printf ( "\nREAL : %f", 3.1415 );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO105 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES :
    CARACTERE : A
    INTEIRO : 10
    REAL : 3.141500
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO106

#include <stdio.h> 
#include <stdlib.h> 
#define PI 3.1415

int main6 ( )
{
    printf ( "EXEMPLO106 - PRIMEIRO EXEMPLO EM C " );
    printf ( "\nMATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); 
    printf ( "\nINTEIRO : %d", 10 ); 
    printf ( "\nREAL : %f", PI );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
}

/*
    EXEMPLO106 - PRIMEIRO EXEMPLO EM C 
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES :
    CARACTERE : A
    INTEIRO : 10
    REAL : 3.141500
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO107

#include <stdio.h> 
#include <stdlib.h> 

int main7 ( )
{
    const float PI = 3.14; 
    printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); 
    printf ( "\nINTEIRO : %d", 10 ); 
    printf ( "\nREAL : %f" , PI ); 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO107 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES :
    CARACTERE : A
    INTEIRO : 10
    REAL : 3.140000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO108

#include <stdio.h> 
#include <stdlib.h> 

int main8 ( )
{
    const float PI = 3.14;
    float X = 10.01; 
    printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); 
    printf ( "\nINTEIRO : %d", 10 ); 
    printf ( "\nREAL : %f", PI ); 
    printf ( "\nREAL : %f", X ); 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO108 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES : 
    CARACTERE : A
    INTEIRO : 10
    REAL : 3.140000
    REAL : 10.010000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO109

#include <stdio.h> 
#include <stdlib.h>

int main9 ( )
{
    const float PI = 3.14;
    float X = 10.01;
    int I = 10;
    printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nINTEIRO : %i" , I );
    printf ( "\nREAL : %f" , X );
    printf ( "\nREAL : %f" , PI );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
}

/*
    EXEMPLO109 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES : 
    INTEIRO : 10
    REAL : 10.010000
    REAL : 3.140000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO110

#include <stdio.h> 
#include <stdlib.h> 
int main10 ( )
{
    const double PI = 3.14; 
    float X = 10.01;
    int I = 10;
    char N = '\n';
    printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
    printf ( "%c%s", N, "MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta" );
    printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
    printf ( "%c%s%i" , N, "INTEIRO : " , I );
    printf ( "%c%s%f" , N, "REAL : " , X );
    printf ( "%c%s%lf", N, "REAL : " , PI );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO110 - PRIMEIRO EXEMPLO EM C
    MATRICULA: 857340 ALUNO : Lucas Carneiro Nassau Malta
    EXEMPLOS DE VALORES : 
    INTEIRO : 10
    REAL : 10.010000
    REAL : 3.140000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO201

#include <stdio.h>
#include <stdlib.h>

int main11 ( )
{
    int X = 0;
    printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
    printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI: %d", X );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO
    FORNECER UM VALOR INTEIRO QUALQUER: 456

    O VALOR DIGITADO FOI: 456
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO202

#include <stdio.h> 
#include <stdlib.h> 

int main12 ( )
{
    double X = 0.0;
    printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
    printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
    scanf ( "%lf", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI: %lf", X );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL
    FORNECER UM VALOR REAL QUALQUER: 5

    O VALOR DIGITADO FOI: 5.000000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO203

#include <stdio.h>
#include <stdlib.h>

int main13 ( )
{
    char X = '0';
    printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
    printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
    scanf ( "%c", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI: %c", X );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO203 - LER E IMPRIMIR UM CARACTERE
    FORNECER UM CARACTERE QUALQUER: H

    O VALOR DIGITADO FOI: H
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO204

#include <stdio.h>
#include <stdlib.h> 

int main14 ( )
{
    char X [10];
    printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
    printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
    scanf ( "%s", X ); 
    getchar( ); 
    printf ( "\nFOI DIGITADO: %s", X );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES
    DIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: 123456789

    FOI DIGITADO: 123456789
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO205

#include <stdio.h>
#include <stdlib.h> 

int main15 ( )
{
    int X=0, Y=0, Z=0;
    printf ( "EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS" );
    printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &Y );
    getchar( ); 
    Z = X + Y;
    printf ( "\nA SOMA DOS DOIS = %d", Z );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS
    FORNECER UM VALOR INTEIRO QUALQUER: 5

    FORNECER OUTRO VALOR INTEIRO QUALQUER: -2

    A SOMA DOS DOIS = 3
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO206

#include <stdio.h> 
#include <stdlib.h> 

int main16 ( )
{
    float X=0.0, Y=0.0, Z=0.0;
    printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
    printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
    scanf ( "%f", &X );
    getchar( ); 
    printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
    scanf ( "%f", &Y );
    getchar( );
    Z = X - Y;
    printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS
    FORNECER UM VALOR REAL QUALQUER: 5.7

    FORNECER OUTRO VALOR REAL QUALQUER: 1.2

    A DIFERENCA ENTRE OS DOIS = 4.500000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO207

#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 

int main17 ( )
{
    bool X=false, Y=false, Z=false;
    printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
    X = true;
    Y = false;
    Z = X || Y; 
    printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
    Z = X && Y; 
    printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO207 - OPERAR VALORES LOGICOS
    A DISJUNCAO ENTRE VERDADEIRO E FALSO = 1
    A CONJUNCAO ENTRE VERDADEIRO E FALSO = 0
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO208

#include <stdio.h> 
#include <stdlib.h> 

int main18 ( )
{
    double D = 0.0, 
    T = 0.0, 
    V = 0.0; 
    printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
    printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
    scanf ( "%lf", &D );
    getchar( ); 
    printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
    scanf ( "%lf", &T );
    getchar( ); 
    V = D / T;
    printf ( "\nV = D / T = %lf%s", V, " m/s " );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO
    FORNECER UMA DISTANCIA QUALQUER EM METROS: 100

    FORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: 5

    V = D / T = 20.000000 m/s 
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO209

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main19 ( )
{
    const char SENHA[5] = "XXXX";
    char S [10];
    printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
    printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
    scanf ( "%s", S ); 
    getchar( ); 
    printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( ( EXIT_SUCCESS ) );
} 

/*
    EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA
    FORNECER UMA CADEIA DE CARACTERES QUALQUER: XXXX

    A COMPARACAO COM A SENHA = 1
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO210

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main20 ( )
{
    const double PI = 3.14;
    double ARCO = 0.0,
    COSSENO = 0.0,
    SENO = 0.0,
    TANGENTE = 0.0;
    printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
    printf ( "\nFORNECER O VALOR DO SENO: " );
    scanf ( "%lf", &SENO );
    getchar( ); 
    COSSENO = sqrt( 1.0 - pow(SENO,2) );
    TANGENTE = SENO / COSSENO;
    ARCO = atan( TANGENTE );
    printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
    FORNECER O VALOR DO SENO: 0

    O ARCO TRIGONOMETRICO EM GRAUS = 0.000000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO301

#include <stdio.h> 
#include <stdlib.h> 

int main21 ( )
{
    int X = 0;
    printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
    printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &X );
    getchar( ); 
    if ( X == 0 )
    printf ( "\nO VALOR DIGITADO FOI ZERO" );
    else
    printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO
    FORNECER UM VALOR INTEIRO QUALQUER: 0

    O VALOR DIGITADO FOI ZERO
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO302

#include <stdio.h> 
#include <stdlib.h> 

int main22 ( )
{
    float X = 0.0;
    printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
    printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
    scanf ( "%f", &X );
    getchar( ); 
    if( X != 0.0 )
    printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO302 - LER E TESTAR UM VALOR REAL
    FORNECER UM VALOR REAL DIFERENTE DE ZERO: 3,1415

    O VALOR DIGITADO FOI DIFERENTE DE ZERO
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO303

#include <stdio.h> 
#include <stdlib.h> 

int main23 ( )
{
    char X = '0';
    printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
    printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
    scanf ( "%c", &X );
    getchar( ); 
    if( X >= '0' && X <= '9' )
    {
    printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
    printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO303 - LER E TESTAR UM CARACTERE
    FORNECER UM ALGARISMO QUALQUER: 6

    O VALOR DIGITADO FOI UM ALGARISMO
    O ALGARISMO DIGITADO FOI: 6
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO304

#include <stdio.h> 
#include <stdlib.h> 

int main24 ( )
{
    char X = '0';
    printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
    printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
    scanf ( "%c", &X );
    getchar( ); 
    if( !( X >= '0' && X <= '9') )
    {
    printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
    printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO304 - LER E TESTAR CARACTERE
    FORNECER UM CARACTERE QUALQUER: G

    NAO FOI DIGITADO UM ALGARISMO
    FOI DIGITADO O CARACTERE: G
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO305

#include <stdio.h> 
#include <stdlib.h> 

int main25 ( )
{
    int X=0, Y=0;
    printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
    printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &Y );
    getchar( );
    if( X == Y )
    printf ( "\nDOIS VALORES IGUAIS" );
    else
    {
    printf ( "\n%d", X );
    printf ( " DIFERENTE DE " );
    printf ( "%d", Y );
    }
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS
    FORNECER UM VALOR INTEIRO QUALQUER: 5

    FORNECER OUTRO VALOR INTEIRO QUALQUER: 6

    5 DIFERENTE DE 6
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO306

#include <stdio.h> 
#include <stdlib.h> 

int main26 ( )
{
    double X=0.0, Y=0.0;
    printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
    printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
    scanf ( "%lf", &X );
    getchar( ); 
    printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
    scanf ( "%lf", &Y );
    getchar( ); 
    if( ! (X == Y) )
    {
    printf ( "\n%lf", X );
    printf ( " DIFERENTE DE " );
    printf ( "%lf", Y );
    }
    else
    {
    printf ( "VALORES IGUAIS" );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS
    FORNECER UM VALOR REAL QUALQUER: 5.98

    FORNECER OUTRO VALOR REAL QUALQUER: 2.32

    5.980000 DIFERENTE DE 2.320000
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO307

#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 

int main27 ( )
{
    int X=0, Y=0;
    bool Z=false;
    printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
    printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
    scanf ( "%d", &Y );
    getchar( ); 
    Z = (X == Y);
    if( Z )
        printf ( "VALORES IGUAIS" );
    else
        printf ( "VALORES DIFERENTES" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO307 - TRATAR VALORES LOGICOS
    FORNECER UM VALOR INTEIRO QUALQUER: 5

    FORNECER OUTRO VALOR INTEIRO QUALQUER: 2
    VALORES DIFERENTES
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO308

#include <stdio.h> 
#include <stdlib.h> 

int main28 ( )
{
    char X = '0';
    printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
    printf ( "\nFORNECER UMA LETRA QUALQUER: " );
    scanf ( "%c", &X );
    getchar( ); 
    if( X >= 'A' && X <= 'Z' )
    printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
    else
    if( X >= 'a' && X <= 'z' )
    printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
    else
    printf ( "NAO FOI DIGITADA UMA LETRA" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO308 - LER E TESTAR UMA LETRA
    FORNECER UMA LETRA QUALQUER: g
    FOI DIGITADA UMA LETRA MINUSCULA
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO309

#include <stdio.h> 
#include <stdlib.h>

int main29 ( )
{
    char X = '0';
    printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
    printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
    scanf ( "%c", &X );
    getchar( ); 
    switch( X )
    {
        case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
        break;
        case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
        break;
        case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
        break;
        default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO309 - COMPARAR CARACTERES < , = , >
    FORNECER UM DOS CARACTERES CITADOS: =
    FOI DIGITADO O SINAL DE IGUAL
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO310

#include <stdio.h> 
#include <stdlib.h> 

int main30 ( )
{
    char X = '0';
    printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
    printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
    scanf ( "%c", &X );
    getchar( ); 
    switch ( X )
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
    break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
    printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
    break;
    default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO310 - IDENTIFICAR CARACTERES
    FORNECER UM CARACTERE QUALQUER: 4
    FOI DIGITADO UM ALGARISMO
    O NUMERO CORRESPONDENTE = 4
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO401

#include <stdio.h> 
#include <stdlib.h> 

int main31 ( )
{
    int X = 0,
    CONTADOR = 0;
    printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
    printf ( "\n" );
    CONTADOR = 1;
    while ( CONTADOR <= 3 )
    {
        printf ( "\n" ); 
        printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
        scanf( "%d", &X );
        getchar( ); 
        printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
        CONTADOR = CONTADOR + 1;
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS

    1. FORNECER UM VALOR INTEIRO : 1

    O VALOR DIGITADO FOI : 1

    2. FORNECER UM VALOR INTEIRO : 3

    O VALOR DIGITADO FOI : 3

    3. FORNECER UM VALOR INTEIRO : 5

    O VALOR DIGITADO FOI : 5

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO402

#include <stdio.h> 
#include <stdlib.h> 

int main32 ( )
{
    int X = 0, N = 0, CONTADOR = 0;
    printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &N );
    getchar( ); 
    CONTADOR = 1;
    while ( CONTADOR <= N )
    {
    printf ( "\n%d", CONTADOR );
    printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    CONTADOR = CONTADOR + 1;
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS

    FORNECER O NUMERO DE VEZES (N) : 3

    1 FORNECER UM VALOR INTEIRO QUALQUER : 1

    O VALOR DIGITADO FOI : 1

    2 FORNECER UM VALOR INTEIRO QUALQUER : 2

    O VALOR DIGITADO FOI : 2

    3 FORNECER UM VALOR INTEIRO QUALQUER : 4

    O VALOR DIGITADO FOI : 4

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO403

#include <stdio.h> 
#include <stdlib.h> 

int main33 ( )
{
    int X = 0, N = 0;
    printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &N );
    getchar( ); 
    while ( N > 0 ) 
    {
    printf ( "\n%d", N );
    printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    N = N - 1;
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS

    FORNECER O NUMERO DE VEZES (N) : 3

    3 FORNECER UM VALOR INTEIRO QUALQUER : 1

    O VALOR DIGITADO FOI : 1

    2 FORNECER UM VALOR INTEIRO QUALQUER : 2

    O VALOR DIGITADO FOI : 2

    1 FORNECER UM VALOR INTEIRO QUALQUER : 4

    O VALOR DIGITADO FOI : 4

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO404

#include <stdio.h> 
#include <stdlib.h> 

int main34 ( )
{
    int X = 0,
    CONTADOR = 0;
    printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
    for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
    {
    printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS

    1. FORNECER UM VALOR INTEIRO : 4

    O VALOR DIGITADO FOI : 4

    2. FORNECER UM VALOR INTEIRO : 1

    O VALOR DIGITADO FOI : 1

    3. FORNECER UM VALOR INTEIRO : 2

    O VALOR DIGITADO FOI : 2

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO405

#include <stdio.h> 
#include <stdlib.h> 

int main35 ( )
{
    int X = 0,
    N = 0,
    CONTADOR = 0;
    printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &N );
    getchar( ); 
    for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
    {
    printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d", X );
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
}

/*
    EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS

    FORNECER O NUMERO DE VEZES (N) : 3

    1. FORNECER UM VALOR INTEIRO : 3

    O VALOR DIGITADO FOI : 3
    2. FORNECER UM VALOR INTEIRO : 2

    O VALOR DIGITADO FOI : 2
    3. FORNECER UM VALOR INTEIRO : 6

    O VALOR DIGITADO FOI : 6
    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO406

#include <stdio.h> 
#include <stdlib.h> 

int main36 ( )
{
    int X = 0,
    CONTADOR = 0;
    printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
    CONTADOR = 1;
    do
    {
    printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    CONTADOR = CONTADOR + 1;
    }
    while ( CONTADOR <= 3 ); 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS

    1. FORNECER UM VALOR INTEIRO : 1

    O VALOR DIGITADO FOI : 1

    2. FORNECER UM VALOR INTEIRO : 2

    O VALOR DIGITADO FOI : 2

    3. FORNECER UM VALOR INTEIRO : 3

    O VALOR DIGITADO FOI : 3

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO407

#include <stdio.h>
#include <stdlib.h> 

int main37 ( )
{
    int X = 0,
    CONTADOR = 0;
    printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
    printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
    scanf ( "%d", &CONTADOR );
    getchar( ); 
    do 
    {
    printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
    scanf ( "%d", &X );
    getchar( ); 
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    CONTADOR = CONTADOR - 1;
    }
    while ( CONTADOR > 0 ); 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS

    FORNECER O NUMERO DE VEZES (N) : 2

    2. FORNECER UM VALOR INTEIRO : 567

    O VALOR DIGITADO FOI : 567

    1. FORNECER UM VALOR INTEIRO : 86732

    O VALOR DIGITADO FOI : 86732

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO408

#include <stdio.h> 
#include <stdlib.h> 

int main38 ( )
{
    int X = 0;
    printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
    printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
    scanf ( "%d", &X );
    getchar( ); 
    while ( X != 0 ) 
    {
    printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
    printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
    scanf ( "%d", &X );
    getchar( ); 
    } 
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS

    FORNECER UM VALOR INTEIRO (0 = PARAR) : -2

    O VALOR DIGITADO FOI : -2

    DIGITE UM VALOR INTEIRO QUALQUER : 41

    O VALOR DIGITADO FOI : 41

    DIGITE UM VALOR INTEIRO QUALQUER : -2934

    O VALOR DIGITADO FOI : -2934

    DIGITE UM VALOR INTEIRO QUALQUER : 0

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO409

#include <stdio.h> 
#include <stdlib.h> 

int main39 ( )
{
    int X = 0;
    printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
    printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
    scanf ( "%d", &X );
    getchar( ); 
    while ( X == 0 ) 
    {
    printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
    scanf ( "%d", &X );
    getchar( ); 
    } 
    printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO409 - PARA LER UM INTEIRO NAO NULO

    FORNECER UM VALOR DIFERENTE DE ZERO : 0

    FORNECER UM VALOR DIFERENTE DE ZERO : 0

    FORNECER UM VALOR DIFERENTE DE ZERO : -45

    DIGITADO UM NUMERO DIFERENTE DE ZERO

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO410

#include <stdio.h> 
#include <stdlib.h>

int main40 ( )
{
    int X = 0;
    printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
    do 
    {
    printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
    scanf ( "%d", &X );
    getchar( ); 
    }
    while ( X == 0 ); 
    printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO410 - LER UM INTEIRO NAO NULO

    FORNECER UM VALOR DIFERENTE DE ZERO : 0

    FORNECER UM VALOR DIFERENTE DE ZERO : -9

    DIGITADO UM NUMERO DIFERENTE DE ZERO

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO501

#include <stdio.h> 
#include <stdlib.h> 

void P1 ( void )
{
    printf ( "\n" );
    printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
    printf ( "\n" );
} 

int main41 ( void )
{
    printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
    P1 ( ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO

    CHAMADO O PROCEDIMENTO P1 SEM PARAMETROS


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO502

#include <stdio.h> 
#include <stdlib.h> 

int X = 0; 

void P1 ( void )
{
    printf ( "\n" );
    printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
    printf ( "\n" );
} 

int main42 ( void )
{
    printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
    for ( X = 1; X <= 5; X = X + 1 )
    P1 ( ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL


    CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)


    CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)


    CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)


    CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)


    CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO503

#include <stdio.h> 
#include <stdlib.h> 

int X = 0; 

void P1 ( void )
{
    X = X + 1; 
    printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
    printf ( "\n" );
    if ( X < 5 )
    P1 ( ); 
    printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
    X = X - 1; 
    getchar ( ); 
} 

int main43 ( void )
{
    printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
    X = 0;
    P1 ( ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL

    CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO504

#include <stdio.h> 
#include <stdlib.h> 

void P1 ( int X )
{
    printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X );
    if ( X < 5 )
    P1( X + 1 ); 
    printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
    getchar ( ); 
} 

int main44 ( void )
{
    printf ( "EXEMPLO0504 - CHAMADA/RETORNO COM PARAMETRO\n" );
    P1 ( 1 ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0504 - CHAMADA/RETORNO COM PARAMETRO

    CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO505

#include <stdio.h> 
#include <stdlib.h> 

void P1 ( int X )
{
    printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X );
    if ( X > 1 )
    P1 ( X - 1 );
    printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
    getchar ( ); 
} 

int main45 ( void )
{
    printf ( "EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n" );
    P1 ( 5 ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO

    CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO506

#include <stdio.h> 
#include <stdlib.h> 

void P2 (int X); 

void P1 (int X)
{
    printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
    if ( X < 5 )
    P2 ( X );
    printf ( "RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
    getchar ( ); 
} 

void P2 (int X)
{
    printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
    X = X+1;
    printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X );
    getchar ( ); 
    P1 ( X );
} 

int main46 ( void )
{
    printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
    P1 ( 1 ); 
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO

    CHAMADO O PROCEDIMENTO P1 COM X = 1
    CHAMADO O PROCEDIMENTO P2 COM X = 1
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2

    CHAMADO O PROCEDIMENTO P1 COM X = 2
    CHAMADO O PROCEDIMENTO P2 COM X = 2
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 3

    CHAMADO O PROCEDIMENTO P1 COM X = 3
    CHAMADO O PROCEDIMENTO P2 COM X = 3
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 4

    CHAMADO O PROCEDIMENTO P1 COM X = 4
    CHAMADO O PROCEDIMENTO P2 COM X = 4
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 5

    CHAMADO O PROCEDIMENTO P1 COM X = 5
    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 5

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 1



    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO507

#include <stdio.h> 
#include <stdlib.h> 

void P1 ( int* X )
{
    *X = *X + 1; 
    printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X );
    if ( *X < 5 )
    P1 ( X );
    printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X );
    *X = *X - 1; 
    getchar ( ); 
} 

int main47 ( void )
{
    int X;
    printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
    X = 0;
    P1 ( &X );
    printf ( "\n" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA

    CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

    CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1


    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO508

#include <stdio.h>
#include <stdlib.h> 

void P2 ( int X ); 

void P1 ( int X )
{
    X = X + 1;
    printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
    if ( X < 4 )
    {
    P1 ( X );
    P2 ( X );
    }
    printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
    getchar ( ) ; 
} 

void P2 ( int X )
{
    printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
    if ( X > 1 )
    P2 ( X - 1 );
    printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X );
    getchar ( ); 
} 

int main48 ( void )
{
    printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
    P1 ( 1 );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS

    CHAMADO O PROCEDIMENTO P1 COM X = 2
    CHAMADO O PROCEDIMENTO P1 COM X = 3
    CHAMADO O PROCEDIMENTO P1 COM X = 4

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 4

    CHAMADO O PROCEDIMENTO P2 COM X = 3
    CHAMADO O PROCEDIMENTO P2 COM X = 2
    CHAMADO O PROCEDIMENTO P2 COM X = 1
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 1
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 3

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 3

    CHAMADO O PROCEDIMENTO P2 COM X = 2
    CHAMADO O PROCEDIMENTO P2 COM X = 1
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 1
    RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2

    RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 2


    PRESSIONAR <Enter> PARA TERMINAR.
    */

// EXEMPLO509

#include "my_lib.h" 

int main49 ( void )
{
    println ( "EXEMPLO0509 - USO DE MODULOS" );
    pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0509 - USO DE MODULOS

    PRESSIONAR <Enter> PARA TERMINAR.
*/

// EXEMPLO510

#include "my_def.h" 
#include "my_lib.h"

int main50 ( void )
{
    chars text = "MUDAR DE LINHA";
    println ( "EXEMPLO0509 - USO DE MODULOS" );
    printf ( "%c", EOL );
    printf ( "%s%c", text, EOL );
    pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
    return ( EXIT_SUCCESS );
} 

/*
    EXEMPLO0509 - USO DE MODULOS

    MUDAR DE LINHA

    PRESSIONAR <Enter> PARA TERMINAR.
*/
