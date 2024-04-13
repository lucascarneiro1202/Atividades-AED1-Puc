// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include "io.h"

// Method_11

void method_11 ( void )
{
// definir dado
	int contador = 0;
	chars palavra = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method11 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// testar e mostras as maiusculas
	IO_printf ( "\n%s", "Maiusculas: " );
	for ( contador = 0; contador < strlen(palavra) ; contador = contador + 1 )
	{
		if ( ( 'A' <= palavra[contador] ) && ( palavra[contador] <= 'Z' ) )
		{
			IO_printf ( "%c ", palavra[contador] );
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_12.

void method_12 ( void )
{
// definir dado
	int aux = 0, contador = 0;
	chars palavra = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method12 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " ); 
// mostrar apenas as maiusculas do inicio para o fim
	IO_printf ( "\n%s", "Maiusculas: " );
	for ( aux = 0; aux < strlen(palavra); aux = aux + 1 )
	{
		if ( ( 'A' <= palavra[aux] ) && ( palavra[aux] <= 'Z' ) )
		{
			IO_printf ( "%c ", palavra[aux] );
			contador = contador + 1;
		}
	}
	IO_printf ( "\n\n%d%s", contador, " letras maiusculas" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_13.

void method_13 ( void )
{
// definir dado
	int aux = 0, contador = 0;
	chars palavra = IO_new_chars ( STR_SIZE );	
// identificar
	IO_id ( "Method13 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " ); 
// mostrar apenas as maiusculas do fim para o inicio
	IO_printf ( "\n%s", "Maiusculas: " );
	for ( aux = strlen(palavra); aux >= 0; aux = aux - 1 )
	{
		if ( ( 'A' <= palavra[aux] ) && ( palavra[aux] <= 'Z' ) )
		{
			IO_printf ( "%c ", palavra[aux] );
			contador = contador + 1;
		}
	}
	IO_printf ( "\n\n%d%s", contador, " letras maiusculas" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_14.

void method_14 ( void )
{
// definir dado
	int aux = 0, contador = 0;
	chars caracteres = IO_new_chars( STR_SIZE );
// identificar
	IO_id ( "Method14 - v0.0" );
// ler dado do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// mostrar os que forem letras (maiusculas ou minusculas) do inicio para o fim
	IO_printf ( "\n%s", "Letras (maiusculas ou minusculas): " );
	for ( aux = 0; aux < strlen (caracteres); aux = aux + 1 )
	{
		if ( ( ( 'a' <= caracteres[aux] ) && ( caracteres[aux] <= 'z' ) ) || ( ( 'A' <= caracteres[aux] ) && ( caracteres[aux] <= 'Z' ) ) )
		{
			IO_printf ( "%c ", caracteres[aux] );
			contador = contador + 1;
		}
	}
// mostrar o numero de caracteres que forem letras maiusculas ou minusculas
	IO_printf ( "\n\n%d%s", contador, " letras maiusculas ou minusculas" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_15.

void method_15 ( void )
{
// definir dado
	int aux = 0, contador = 0;
	chars caracteres = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method15 - v0.0" );
// ler dado do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// mostrar os que forem digitos do fim para o inicio
	IO_printf ( "\n%s", "Digitos: " );
	for ( aux = strlen(caracteres); aux >= 0; aux = aux - 1 )
	{
		if ( ( '0' <= caracteres[aux] ) && ( caracteres[aux] <= '9' ) )
		{
			IO_printf ( "%c ", caracteres[aux] );
			contador = contador + 1;
		}
	}
// mostrar o numero de caracteres que forem digitos
	IO_printf ( "\n\n%d%s", contador, " caracteres que sao digitos" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_16.

void method_16 ( void )
{
// definir dado
	int aux = 0, contador = 0;
	chars caracteres = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method16 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// mostrar tudo o que nao for digito e tambem nao for letra
	IO_printf ( "\n%s", "Nao e' digito nem letra: " );
	for ( aux = 0; aux < strlen(caracteres); aux = aux + 1 )
	{
		if ( !( ( ( '0' <= caracteres[aux] ) && ( caracteres[aux] <= '9' ) ) || ( ( ('a' <= caracteres[aux]) && (caracteres[aux] <= 'z') ) || ( ('A' <= caracteres[aux]) && (caracteres[aux] <= 'Z') ) ) ) )
		{
			IO_printf ( "%c ", caracteres[aux] );
			contador = contador + 1;
		}
	}
// mostrar o numero de caracteres diferentes de letra e de numero
	IO_printf ( "\n%d%s", contador, " caracteres diferentes de letra e de numero" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_17.

void method_17 ( void )
{
// definir dado
	int a = 0, b = 0, n = 0, aux = 0, i = 0, contador = 0; 	
// identificar
	IO_id ( "Method17 - v0.0" );
// ler do teclado dois valores inteiros para definir um intervalo fechado
	IO_printf ( "%s\n", "Digite dois valores inteiros para definir um intervalo fechado:" );
	do
	{
		a = IO_readint ( "\nPrimeiro valor: " );
		b = IO_readint ( "\nSegundo valor: " );
	} while( !( a < b ) );
// ler do teclado uma quantidade (n) de valores inteiros a serem testados
	do
	{
		n = IO_readint ( "\nDigite uma quantidade (n) de valores inteiros a serem testados: " );
	} while ( !( n > 0 ) );
// definir array
	int numeros[ (n - 1) ];
// ler do teclado (n) valores inteiros
	for ( aux = 0; aux < n ; aux = aux + 1 )
	{
		numeros[i] = IO_readint ( "\nDigite um valor inteiro: " );
		i = i + 1;		
	} 
// mostrar quantos desses valores inteiros pertencem ao intervalo fechado e sao multiplos de 6
	i = 0;
	for ( aux = 0; aux < n; aux = aux + 1 )
	{
		if ( ( ( a <= numeros[i] ) && ( numeros[i] <= b ) ) && ( numeros[i] % 6 == 0 )  )
		{
			IO_printf ( "\n(%d) pertence ao intervalo [%d,%d] e e' multiplo de 6", numeros[i], a, b );
			contador = contador + 1;
		}
		else
		{
			IO_printf ( "\n(%d)%s", numeros[i], " nao satisfaz as 2 condicoes." );				
		}
		i = i + 1;
	}
	IO_printf ( "\n%s%d%s", "As duas condicoes foram satisfeitas, simultaneamente, ", contador, " vezes." );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_18.

void method_18 ( void )
{
// definir dado
	int a = 0, b = 0, n = 0, aux = 0, i = 0, contador = 0; 	
// identificar
	IO_id ( "Method18 - v0.0" );
// ler do teclado dois valores inteiros para definir um intervalo fechado
	IO_printf ( "Digite dois valores inteiros para definir um intervalo fechado:\n" );
	do
	{
		a = IO_readint ( "\nPrimeiro valor: " );
		b = IO_readint ( "\nSegundo valor: " );
	} while( !( a < b ) );
// ler do teclado uma quantidade (n) de valores inteiros a serem testados
	do
	{
		n = IO_readint ( "\nDigite uma quantidade (n) de valores inteiros a serem testados: " );
	} while ( !( n > 0 ) );
// definir array
	int numeros[ (n - 1) ];
// ler do teclado (n) valores inteiros
	for ( aux = 0; aux < n ; aux = aux + 1 )
	{
		numeros[i] = IO_readint ( "\nDigite um valor inteiro: " );
		i = i + 1;		
	} 
// mostrar quantos desses valores inteiros pertencem ao intervalo fechado e sao multiplos de 4, mas nao sao multiplos de 5
	i = 0;
	for ( aux = 0; aux < n; aux = aux + 1 )
	{
		if ( ( ( a <= numeros[i] ) && ( numeros[i] <= b ) ) && ( numeros[i] % 4 == 0 ) && ( !( numeros[i] % 5 == 0 ) ) )
		{
			IO_printf ( "\n(%d)%s[%d,%d]%s", numeros[i], " pertence ao intervalo ", a, b, " e' multiplo de 4 e nao e' multiplo de 5." );
			contador = contador + 1;
		}
		else
		{
			IO_printf ( "\n(%d)%s", numeros[i], " nao satisfaz as 3 condicoes." );
		}
		i = i + 1;
	}
	IO_printf ( "\n\n%s%d%s", "As tres condicoes foram satisfeitas, simultaneamente, ", contador, " vez(es)." );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_19.

void method_19 ( void )
{
// definir dado	
	double a = 0.0, b = 0.0;
	int n = 0, aux = 0, i = 0, contador = 0;
// identificar
	IO_id ( "Method19 - v0.0" );
// ler do teclado dois valores reais para definirem um intervalo aberto (a:b)
	IO_printf ( "Digite dois valores reais para definir um intervalo aberto:\n" );
	do
	{
		a = IO_readdouble ( "\nPrimeiro valor: " );
		b = IO_readdouble ( "\nSegundo valor: " );
	} while ( !( a < b ) );
// ler do teclado uma quantidade (n) de valores a serem testados
	do
	{
		n = IO_readdouble ( "\nDigite uma quantidade (n) de valores reais a serem testados: " );
	} while ( !( n > 0 ) );
// definir array
	double numeros[ (n - 1) ];
// ler do teclado (n) valores reais
	for ( aux = 0; aux < n ; aux = aux + 1 )
	{
		numeros[i] = IO_readdouble ( "\nDigite um valor real: " );
		i = i + 1;		
	} 
// mostrar quantos desses valores reais pertencem ao intervalo aberto e cujas partes inteiras sao pares
	i = 0;
	for ( aux = 0; aux < n; aux = aux + 1 )
	{
		if ( ( ( a < numeros[i] ) && ( numeros[i] < b ) ) && ( ( (int) numeros[i] % 2 ) == 0) )
		{
			IO_printf ( "\n(%lf)%s(%lf:%lf)%s", numeros[i], " pertence ao intervalo ", a, b, " e sua parte inteira e' par." );
			contador = contador + 1;
		}
		else
		{
			IO_printf ( "\n(%lf)%s", numeros[i], " nao satisfaz as duas condicoes." );
		}
		i = i + 1;
	}
	IO_printf ( "\n\n%s%d%s", "As duas condicoes foram satisfeitas, simultaneamente, ", contador, " vez(es)." );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_20.

void method_20 ( void )
{// definir dado	
	double a = 0.0, b = 0.0, partfrac = 0.0;
	int n = 0, aux = 0, i = 0, contador = 0;
// identificar
	IO_id ( "Method20 - v0.0" );
// ler do teclado dois valores reais, maiores que 0 e menores que 1, para definirem um intervalo aberto (a:b)
	IO_printf ( "Digite dois valores reais, maiores que 0 e menores que 1, para definir um intervalo aberto:\n" );
	do
	{
		a = IO_readdouble ( "\nPrimeiro valor: " );
		b = IO_readdouble ( "\nSegundo valor: " );
	} while ( !( a < b ) || !( ( 0.0 < a ) && ( a < 1.0 ) ) || !( ( 0.0 < b ) && ( b < 1.0 ) ) );
// ler do teclado uma quantidade (n) de valores a serem testados
	do
	{
		n = IO_readint ( "\nDigite uma quantidade (n) de valores reais a serem testados: " );
	} while ( !( n > 0 ) );
// definir array
	double numeros[ (n - 1) ];
// ler do teclado (n) valores reais
	for ( aux = 0; aux < n ; aux = aux + 1 )
	{
		numeros[i] = IO_readdouble ( "\nDigite um valor real: " );
		i = i + 1;		
	} 
// mostrar quantos desses valores reais tem suas partes fracionarias fora do intervalo (a:b)
	i = 0;
	for ( aux = 0; aux < n; aux = aux + 1 )
	{
		partfrac = numeros[i] - (int) numeros[i];
		if ( ( a > partfrac ) || ( partfrac > b ) )
		{
			IO_printf ( "\n(%lf)%s(%lf)%s(%lf:%lf).", numeros[i], " A parte fracionaria, ", partfrac, ", nao pertence ao intervalo ", a, b );
			contador = contador + 1;
		}
		else
		{
			IO_printf ( "\n(%lf)%s(%lf)%s(%lf:%lf)%s", numeros[i], " A parte fracionaria, ", partfrac, ", pertence ao intervalo ", a, b, " (nao satisfaz)." );
		}
		i = i + 1;
	}
	IO_printf ( "\n\n%s%d%s", "A condicao foi satisfeita ", contador, " vez(es)." );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

int main ( void )
{
// definir dado
	int opcao = 0;
// identificar
	printf ( "%s\n", "Exercicio - Programa = v0.0" );
	printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta" );
	printf ( "\n" ); // mudar de linha
// acoes
// repetir
	do
	{
		// para mostrar opcoes
		printf ( "\n%s\n", "Opcoes:" );
		printf ( "\n%s" , "0 - Terminar" );
		printf ( "\n%s" , "11 - Method_11" );
		printf ( "\n%s" , "12 - Method_12" );
		printf ( "\n%s" , "13 - Method_13" );
		printf ( "\n%s" , "14 - Method_14" );
		printf ( "\n%s" , "15 - Method_15" );
		printf ( "\n%s" , "16 - Method_16" );
		printf ( "\n%s" , "17 - Method_17" );
		printf ( "\n%s" , "18 - Method_18" );
		printf ( "\n%s" , "19 - Method_19" );
		printf ( "\n%s" , "20 - Method_20" );
		printf ( "\n" );
		// ler a opcao do teclado
		printf ( "\n%s", "Opcao = " );
		scanf ( "%d", &opcao );
		getchar( ); // para limpar a entrada de dados
		// para mostrar a opcao lida
		printf ( "\n\n%s%d\n", "Opcao = ", opcao );
		// escolher acao dependente da opcao
		switch ( opcao )
		{
			case 0: /* nao fazer nada */ break;
			case 11: method_11 ( ); break;
			case 12: method_12 ( ); break;
			case 13: method_13 ( ); break;
			case 14: method_14 ( ); break;
			case 15: method_15 ( ); break;
			case 16: method_16 ( ); break;
			case 17: method_17 ( ); break;
			case 18: method_18 ( ); break;
			case 19: method_19 ( ); break;
			case 20: method_20 ( ); break;
			default: // comportamento padrao
			printf ( "\nERRO: Opcao invalida.\n" );
			break;
		} // end switch
	}
	while ( opcao != 0 );
// encerrar
	printf ( "\n\nApertar ENTER para terminar." );
	getchar( ); // aguardar por ENTER
	return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )

// Resultados:

/* Method_11
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 11


Opcao = 11

Method11 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: PaLaVrA

Maiusculas: P L V A

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_12
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 12


Opcao = 12

Method12 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: PaLaVrA

Maiusculas: P L V A

4 letras maiusculas

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_13
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 13


Opcao = 13

Method13 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma palavra: PaLaVrA

Maiusculas: A V L P

4 letras maiusculas

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_14
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 14


Opcao = 14

Method14 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: P4LaVr@

Letras (maiusculas ou minusculas): P L a V r

5 letras maiusculas ou minusculas

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_15
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 15


Opcao = 15

Method15 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: P4LaVr@1

Digitos: 1 4

2 caracteres que sao digitos

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_16
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 16


Opcao = 16

Method16 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: P4LaVr@O!

Nao e' digito nem letra: @ !
2 caracteres diferentes de letra e de numero

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_17
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 17


Opcao = 17

Method17 - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite dois valores inteiros para definir um intervalo fechado:

Primeiro valor: 15

Segundo valor: 60

Digite uma quantidade (n) de valores inteiros a serem testados: 7

Digite um valor inteiro: 10

Digite um valor inteiro: 20

Digite um valor inteiro: 30

Digite um valor inteiro: 42

Digite um valor inteiro: 54

Digite um valor inteiro: 60

Digite um valor inteiro: 84

(10) nao satisfaz as 2 condicoes.
(20) nao satisfaz as 2 condicoes.
(30) pertence ao intervalo [15,60] e e' multiplo de 6
(42) pertence ao intervalo [15,60] e e' multiplo de 6
(54) pertence ao intervalo [15,60] e e' multiplo de 6
(60) pertence ao intervalo [15,60] e e' multiplo de 6
(84) nao satisfaz as 2 condicoes.
As duas condicoes foram satisfeitas, simultaneamente, 4 vezes.

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_18
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 18


Opcao = 18

Method18 - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite dois valores inteiros para definir um intervalo fechado:

Primeiro valor: 20

Segundo valor: 60

Digite uma quantidade (n) de valores inteiros a serem testados: 7

Digite um valor inteiro: 10

Digite um valor inteiro: 20

Digite um valor inteiro: 30

Digite um valor inteiro: 48

Digite um valor inteiro: 52

Digite um valor inteiro: 60

Digite um valor inteiro: 84

(10) nao satisfaz as 3 condicoes.
(20) nao satisfaz as 3 condicoes.
(30) nao satisfaz as 3 condicoes.
(48) pertence ao intervalo [20,60] e' multiplo de 4 e nao e' multiplo de 5.
(52) pertence ao intervalo [20,60] e' multiplo de 4 e nao e' multiplo de 5.
(60) nao satisfaz as 3 condicoes.
(84) nao satisfaz as 3 condicoes.

As tres condicoes foram satisfeitas, simultaneamente, 2 vez(es).

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_19
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 19


Opcao = 19

Method19 - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite dois valores reais para definir um intervalo aberto:

Primeiro valor: 2.5

Segundo valor: 7.8

Digite uma quantidade (n) de valores reais a serem testados: 7

Digite um valor real: 1.0

Digite um valor real: 2.4

Digite um valor real: 3.3

Digite um valor real: 4.1

Digite um valor real: 5.5

Digite um valor real: 6.3

Digite um valor real: 8.4

(1.000000) nao satisfaz as duas condicoes.
(2.400000) nao satisfaz as duas condicoes.
(3.300000) nao satisfaz as duas condicoes.
(4.100000) pertence ao intervalo (2.500000:7.800000) e sua parte inteira e' par.
(5.500000) nao satisfaz as duas condicoes.
(6.300000) pertence ao intervalo (2.500000:7.800000) e sua parte inteira e' par.
(8.400000) nao satisfaz as duas condicoes.

As duas condicoes foram satisfeitas, simultaneamente, 2 vez(es).

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/



/* Method_20
Exercicio - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 20


Opcao = 20

Method20 - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite dois valores reais, maiores que 0 e menores que 1, para definir um intervalo aberto:

Primeiro valor: 0.25

Segundo valor: 0.50

Digite uma quantidade (n) de valores reais a serem testados: 7

Digite um valor real: 1.0

Digite um valor real: 2.8

Digite um valor real: 3.3

Digite um valor real: 4.1

Digite um valor real: 5.5

Digite um valor real: 6.9

Digite um valor real: 8.4

(1.000000) A parte fracionaria, (0.000000), nao pertence ao intervalo (0.250000:0.500000).
(2.800000) A parte fracionaria, (0.800000), nao pertence ao intervalo (0.250000:0.500000).
(3.300000) A parte fracionaria, (0.300000), pertence ao intervalo (0.250000:0.500000) (nao satisfaz).
(4.100000) A parte fracionaria, (0.100000), nao pertence ao intervalo (0.250000:0.500000).
(5.500000) A parte fracionaria, (0.500000), pertence ao intervalo (0.250000:0.500000) (nao satisfaz).
(6.900000) A parte fracionaria, (0.900000), nao pertence ao intervalo (0.250000:0.500000).
(8.400000) A parte fracionaria, (0.400000), pertence ao intervalo (0.250000:0.500000) (nao satisfaz).

A condicao foi satisfeita 4 vez(es).

Apertar ENTER para continuar.



Opcoes:

0 - Terminar
11 - Method_11
12 - Method_12
13 - Method_13
14 - Method_14
15 - Method_15
16 - Method_16
17 - Method_17
18 - Method_18
19 - Method_19
20 - Method_20
1 - Method_e1
2 - Method_e2

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/
