/*
Exemplo0300 - v0.0. - 11 / 03 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// dependencias
#include "io.h" // para definicoes proprias

// Method_00 - nao faz nada.

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_01 - Repeticao com teste no inicio.

void method_01 ( void )
{
// definir dado
	int x = 0;	
// identificar
	IO_id ( "Method_01 - v0.0" );
// ler do teclado o valor inicial
	x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
	while ( x > 0 )
	{
	// mostrar valor atual
		IO_println ( IO_toString_d ( x ) );
	// passar ao proximo valor
		x = x - 1;
	} // end while
	// encerrar
		IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

// Method_02 - Repeticao com teste no inicio

void method_02 ( void )
{
// definir dado
	int x = 0;
	int y = 0;
// identificar
	IO_id ( "Method_02 - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
	y = x; // copiar o valor lido (e' melhor)
	while ( y > 0 )
	{
// mostrar valor atual
		IO_println ( IO_toString_d ( x ) );
// passar ao proximo valor
		y = y - 1;
	} // end while
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

// Method_03 - Repeticao com teste no inicio

void method_03 ( void )
{
// definir dado
	int x = 0;
	int y = 0;
// identificar
	IO_id ( "Method_03 - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
	y = 1; // o valor lido devera' ser preservado
	while ( y <= x )
	{
// mostrar valor atual
		IO_printf ( "%d\n", y );
// passar ao proximo valor
		y = y + 1;
	} // end while
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

// Method_04 - Repeticao com teste no inicio e variacao

void method_04 ( void )
{
// definir dado
	int x = 0;
	int y = 0;
	int z = 0;
// identificar
	IO_id ( "Method_04 - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
// inicio teste variacao
	for ( y = 1; y <= x; y = y + 1 )
	{
	// ler valor do teclado
		z = IO_readint ( "Valor = " );
	// mostrar valor atual
		IO_printf ( "%d. %d\n", y, z );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

// Method_05 - Repeticao com teste no inicio e variacao

void method_05 ( void )
{
// definir dado
	int x = 0;
	int y = 0;
	int z = 0;
// identificar
	IO_id ( "Method_05 - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
// inicio teste variacao
	for ( y = x; y >= 1; y = y - 1 )
	{
// ler valor do teclado
		z = IO_readint ( "Valor = " );
// mostrar valor atual
		IO_printf ( "%d. %d\n", y, z );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

// Method_06 - Repeticao sobre cadeia de caracateres

void method_06 ( void )
{
// definir dado
	int y = 0;
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
// identificar
	IO_id ( "Method_06 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// repetir para cada letra
	tamanho = strlen ( palavra ) - 1;
// OBS: A cadeia de caracteres iniciam suas posições em zero.
// inicio teste variacao
	for ( y = tamanho; y >= 0; y = y - 1 )
	{
	// mostrar valor atual
		IO_printf ( "%d: [%c]\n", y, palavra [y] );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )

// Method_07 - Repeticao sobre cadeia de caracateres

void method_07 ( void )
{
// definir dado
	int y = 0;
	char palavra [STR_SIZE];
	int tamanho = 0;
// identificar
	IO_id ( "Method07 - v0.0" );
// ler do teclado
	IO_printf ( "Entrar com uma palavra: " );
	scanf ( "%s", palavra ); getchar( );
// OBS: A cadeia de caracteres dispensa a indicacao de endereco (&) na leitura.
// repetir para cada letra
	tamanho = strlen ( palavra );
// OBS: A cadeia de caracteres iniciam suas posições em zero.
// inicio teste variacao
	for ( y = 0; y < tamanho; y = y + 1 )
	{
	// mostrar valor atual
		IO_printf ( "%d: [%c]\n", y, palavra [y] );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )

// Method_08 - Repeticao com intervalos

void method_08 ( void )
{
// definir dado
	int inferior = 0;
	int superior = 0;
	int x = 0;
// identificar
	IO_id ( "Method08 - v0.0" );
// ler do teclado
	inferior = IO_readint ( "Limite inferior do intervalo: " );
	superior = IO_readint ( "Limite superior do intervalo : " );
// inicio teste variacao
	for ( x = inferior; x <= superior; x = x + 1 )
	{
	// mostrar valor atual
		IO_printf ( "%d\n", x );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )

// Method_09 - Repeticao com intervalos

void method_09 ( void )
{
// definir dado
	double inferior = 0;
	double superior = 0;
	double passo = 0;
	double x = 0;
// identificar
	IO_id ( "Method_09 - v0.0" );
// ler do teclado
	inferior = IO_readdouble ( "Limite inferior do intervalo : " );
	superior = IO_readdouble ( "Limite superior do intervalo : " );
	passo = IO_readdouble ( "Variacao no intervalo (passo): " );
// inicio teste variacao
	for ( x = superior; x >= inferior; x = x - passo )
	{
	// mostrar valor atual
		IO_printf ( "%lf\n", x );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )

// Method_10

void method_10 ( void )
{
// definir dado
	double inferior = 0;
	double superior = 0;
	double passo = 0;
	double x = 0;
// identificar
	IO_id ( "Method10 - v0.0" );
// ler do teclado
	inferior = IO_readdouble ( "Limite inferior do intervalo : " );
// repetir ate' haver confirmacao de validade
	do
	{
		superior = IO_readdouble ( "Limite superior do intervalo: " );
	}
	while ( inferior >= superior );
// repetir ate' haver confirmacao de validade
	do
	{
		passo = IO_readdouble ( "Variacao no intervalo (passo): " );
	}
	while ( passo <= 0.0 );
// inicio teste variacao
	for ( x = inferior; x <= superior; x = x + passo )
	{
	// mostrar valor atual
		IO_printf ( "%lf\n", x );
	} // end for
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_10 ( )

/*
Funcao principal.
@return codigo de encerramento
*/

int main ( )
{
// definir dado
	int x = 0;
// repetir até desejar parar
	do
	{
	// identificar
		IO_id ( "EXEMPLO0300 - Programa - v0.0" );
	// ler do teclado
		IO_println ( "Opcoes" );
		IO_println ( "0 - parar" );
		IO_println ( "1 - repeticao com teste no inicio" );
		IO_println ( "2 - repeticao com teste no inicio" );
		IO_println ( "3 - repeticao com teste no inicio" );
		IO_println ( "4 - repeticao com teste no inicio e variacao" );
		IO_println ( "5 - repeticao com teste no inicio e variacao" ); 		
		IO_println ( "6 - repeticao sobre cadeia de caracateres" );
		IO_println ( "7 - repeticao sobre cadeia de caracateres" );
		IO_println ( "8 - repeticao com intervalos" );
		IO_println ( "9 - repeticao com intervalos" );
		IO_println ( "10 - repeticao com confirmacao" );
		IO_println ( "" );
		x = IO_readint ( "Entrar com uma opcao: " );
	// testar valor
		switch ( x )
		{
			case 0: method_00 ( ); break;
			case 1: method_01 ( ); break;
			case 2: method_02 ( ); break;
			case 3: method_03 ( ); break;
			case 4: method_04 ( ); break;
			case 5: method_05 ( ); break;
			case 6: method_06 ( ); break;
			case 7: method_07 ( ); break;
			case 8: method_08 ( ); break;
			case 9: method_09 ( ); break;
			case 10: method_10 ( ); break;
			default:
				IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
				IO_concat ( IO_toString_d ( x ), ")" ) ) );
			} // end switch
	}
	while ( x != 0 );
// encerrar
	IO_pause ( "Apertar ENTER para terminar" );
	return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 11/03 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/


// Segue o resultado de cada um dos metodos:


/* Method_01

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 0

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 1
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 2
2
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 3
3
2
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 4
4
3
2
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 1

Method_01 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: -1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_02

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 2

Method_02 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 0

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 2

Method_02 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 1
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 2

Method_02 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 5
5
5
5
5
5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 2

Method_02 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: -5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_03

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 3

Method_03 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 0

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 3

Method_03 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 1
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 3

Method_03 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 3
1
2
3

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 3

Method_03 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 5
1
2
3
4
5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 3

Method_03 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: -5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_04

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 4

Method_04 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 0

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 4

Method_04 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 1
Valor = 1
1. 1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 4

Method_04 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 3
Valor = 1
1. 1
Valor = 2
2. 2
Valor = 3
3. 3

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 4

Method_04 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 5
Valor = 1
1. 1
Valor = 2
2. 2
Valor = 3
3. 3
Valor = 4
4. 4
Valor = 5
5. 5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 4

Method_04 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: -5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_05

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 5

Method_05 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 0

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 5

Method_05 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 1
Valor = 1
1. 1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 5

Method_05 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 3
Valor = 1
3. 1
Valor = 2
2. 2
Valor = 3
1. 3

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 5

Method_05 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: 5
Valor = 1
5. 1
Valor = 2
4. 2
Valor = 3
3. 3
Valor = 4
2. 4
Valor = 5
1. 5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 5

Method_05 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade: -5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_06

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 6

Method_06 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: a
0: [a]

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 6

Method_06 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: abc
2: [c]
1: [b]
0: [a]

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 6

Method_06 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: abc def
2: [c]
1: [b]
0: [a]

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_07

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 7

Method07 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: a
0: [a]

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 7

Method07 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: abc
0: [a]
1: [b]
2: [c]

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 7

Method07 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: abc def
0: [a]
1: [b]
2: [c]

Apertar ENTER para continuar

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_08

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 8

Method08 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo: 0
Limite superior do intervalo : 1
0
1

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 8

Method08 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo: 1
Limite superior do intervalo : 5
1
2
3
4
5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 8

Method08 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo: 3
Limite superior do intervalo : 5
3
4
5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 8

Method08 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo: -5
Limite superior do intervalo : 5
-5
-4
-3
-2
-1
0
1
2
3
4
5

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_09

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 0
Limite superior do intervalo : 1
Variacao no intervalo (passo): 1
1.000000
0.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 1
Limite superior do intervalo : 5
Variacao no intervalo (passo): 1
5.000000
4.000000
3.000000
2.000000
1.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 1
Limite superior do intervalo : 5
Variacao no intervalo (passo): 2
5.000000
3.000000
1.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 3
Limite superior do intervalo : 5
Variacao no intervalo (passo): 1
5.000000
4.000000
3.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : -5
Limite superior do intervalo : 5
Variacao no intervalo (passo): 1
5.000000
4.000000
3.000000
2.000000
1.000000
0.000000
-1.000000
-2.000000
-3.000000
-4.000000
-5.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : -5
Limite superior do intervalo : 5
Variacao no intervalo (passo): 2
5.000000
3.000000
1.000000
-1.000000
-3.000000
-5.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 9

Method_09 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : -5
Limite superior do intervalo : 5
Variacao no intervalo (passo): 5
5.000000
0.000000
-5.000000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_10

EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 10

Method10 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 0.1
Limite superior do intervalo: 0.5
Variacao no intervalo (passo): 0.1
0.100000
0.200000
0.300000
0.400000
0.500000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 10

Method10 - v0.0

Autor: Lucas Carneiro Nassau Malta

Limite inferior do intervalo : 0.1
Limite superior do intervalo: 0.5
Variacao no intervalo (passo): -0.1
Variacao no intervalo (passo): -0.1
Variacao no intervalo (passo): 0.1
0.100000
0.200000
0.300000
0.400000
0.500000

Apertar ENTER para continuar


EXEMPLO0300 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Opcoes
0 - parar
1 - repeticao com teste no inicio
2 - repeticao com teste no inicio
3 - repeticao com teste no inicio
4 - repeticao com teste no inicio e variacao
5 - repeticao com teste no inicio e variacao
6 - repeticao sobre cadeia de caracateres
7 - repeticao sobre cadeia de caracateres
8 - repeticao com intervalos
9 - repeticao com intervalos
10 - repeticao com confirmacao

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/
