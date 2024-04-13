// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include "io.h"

// Method_11.

void method_11 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_11 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );
// testar
	if ( (x % 2) == 0 )
	{
		IO_printf ( "\n%s (%d).", "Numero par", x );
	}
	else
	{
		IO_printf ( "\n%s (%d).", "Numero impar", x );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_12.

void method_12 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_12 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );
// testar	
	if ( (0 == (x % 2)) && (x > 25) )
	{
		IO_printf ( "\n%s (%d).", "Numero par e maior que 25", x );
	}
	else
	{
		if ( (0 == (x % 2)) && (x <= 25) )
		{
			IO_printf ( "\n%s (%d).", "Numero par e menor que 25", x );
		}
		else
		{
			if ( ( (1 == (x % 2)) || ((x % 2)) == -1 ) && (x < -25) )
			{
				IO_printf ( "\n%s (%d).", "Numero impar e menor que -25", x );
			}
			else
			{
				if ( ( (1 == (x % 2)) || ((x % 2) == -1) ) && (x >= -25) )
				{
					IO_printf ( "\n%s (%d).", "Numero impar e maior ou igual a -25", x );
				}
			}	
		}
	}	
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_13.

void method_13 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_13 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );
// testar
	if ( (35 < x) && (x < 65) )
	{
		IO_printf ( "\n%s (%d)", "Pertence ao intervalo aberto entre (35:65)", x );
	}
	else
	{
		IO_printf ( "\n%s (%d)", "Nao pertence ao intervalo aberto entre (35:65)", x );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_14.

void method_14 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_14 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );	
// testar
	if ( (15 <= x) && (x <=60) )
	{
		IO_printf ( "\n%s (%d)", "Pertence ao intervalo fechado [15:60]", x );
	}
	else{
		IO_printf ( "\n%s (%d)", "Nao pertence ao intervalo fechado [15:60]", x );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_15.

void method_15 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_15 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );
// testar
	if ( (25 < x) && (x <= 30) )
	{
		IO_printf ( "\n%s (%d)", "Percente a intersecao entre os intevalos [10:30] e (25:50)", x );
	}
	else
	{
		if ( (10 <= x) && (x <= 25) )
		{
			IO_printf ( "\n%s (%d)", "Pertence apenas ao intervalo [10:30]", x );
		}
		else
		{
			if ( (30 < x) && (x < 50) )
			{
				IO_printf ( "\n%s (%d)", "Pertence apenas ao intervalo (25:50)", x );
			}
			else
			{
				IO_printf ( "\n%s (%d)", "Nao percente nem ao intervalo [10:30] nem ao intervalo (25:50)", x );
			}	
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_16.

void method_16 ( void )
{
// definir dado
	int x = 0, y = 0;
// identificar
	IO_id ( "Method_16 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );	
	y = IO_readint ( "\nDigite outro valor inteiro: " );
// testar
	if ( ( (1 == (x % 2)) || ((x % 2) == -1) ) && ( 0 == (y % 2) ) )
	{
		IO_printf ( "\n%s (%d, %d)", "O primeiro e impar e o segundo e par", x, y );
	}
	else
	{
		IO_printf ( "\n%s", "O primeiro nao e impar e o segundo nao e par simultaneamente" );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_17.

void method_17 ( void )
{
// definir dado
	int x = 0, y = 0;
// identificar
	IO_id ( "Method_17 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Digite um valor inteiro: " );	
	y = IO_readint ( "\nDigite outro valor inteiro: " );
// testar
	if ( (0 == (x % 2)) && (x < 0) ) 
	{
		IO_printf ( "\n%s (%d)", "Primeiro par e negativo", x );
	}
	else
	{
		if ( (0 == (x % 2)) && (x >= 0) )
		{
			IO_printf ( "\n\n%s (%d)", "Primeiro par e positivo", x );			
		}
		else
		{
			IO_printf ( "\n%s", "Primeiro nao e par" );
		}
	}
	if ( ((1 == (y % 2)) || ((y % 2) == -1)) && (y >= 0) ) 
	{
		IO_printf ( "\n%s (%d)", "Segundo impar e positivo", y );
	}
	else
	{
		if ( ((1 == (y % 2)) || ((y % 2) == -1)) && (y < 0) )
		{
			IO_printf ( "\n\n%s (%d)", "Segundo impar e negativo", y );			
		}
		else
		{
			IO_printf ( "\n%s", "Segundo nao e impar" );
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_18.

void method_18 ( void )
{
// definir dado
	double x = 0, y = 0;
// identificar
	IO_id ( "Method_18 - Programa - v0.0" );
// ler do teclado
	x = IO_readdouble ( "Digite um valor real: " );	
	y = IO_readdouble ( "\nDigite outro valor real: " );
// testar
	x = x / 3.0;
	if ( y == x )
	{
		IO_printf ( "\n%s (%lf) %s (%lf)", "Um terco do primeiro", x, "igual ao segundo", y );
	}
	else
	{
		if ( y > x )
		{
			IO_printf ( "\n%s (%lf) %s (%lf)", "Um terco do primeiro", x, "menor que o segundo", y );			
		}
		else
		{
			if ( y < x )
			{
				IO_printf ( "\n%s (%lf) %s (%lf)", "Um terco do primeiro", x, "maior que o segundo", y );				
			}
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_19.

void method_19 ( void )
{
// definir dado
	double x = 0, y = 0, z = 0;
// identificar
	IO_id ( "Method_19 - Programa - v0.0" );
// ler do teclado
	x = IO_readdouble ( "Digite um valor real: " );	
	y = IO_readdouble ( "\nDigite outro valor real: " );
	z = IO_readdouble ( "\nDigite outro valor real: " );
// testar
	if (y != z)
	{
		if ( ( (y < x) && (x < z) ) || ( (z < x) && (x < y) ) ) {
			IO_printf ( "\n%s", "O primeiro esta entre o segundo e o terceiro" );
		}
		else
		{
			IO_printf ( "\n%s", "O primeiro nao esta entre o segundo e o terceiro" );
		}
	}
	else
	{
		IO_printf ( "\n%s", "Erro: segundo e terceiro numeros sao iguais" );
	}
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_20.

void method_20 ( void )
{
// definir dado
	double x = 0, y = 0, z = 0;
// identificar
	IO_id ( "Method_20 - Programa - v0.0" );
// ler do teclado
	x = IO_readdouble ( "Digite um valor real: " );	
	y = IO_readdouble ( "\nDigite outro valor real: " );
	z = IO_readdouble ( "\nDigite outro valor real: " );
// testar
	if ( (x != y) && (x != z) && (y != z))
	{
		if ( !( ( (y < x) && (x < z) ) || ( (z < x) && (x < y) ) ))
		{
			
			IO_printf ( "\n%s", "O primeiro nao esta entre o segundo e o terceiro" );
		}
		else
		{
			IO_printf ( "\n%s", "O primeiro esta entre o segundo e o terceiro" );
		}
	}
	else
	{
		IO_printf ( "\n%s", "Os numeros nao sao todos diferentes entre si" );
	}
	// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_e1.

void method_e1 ( void )
{
// definir dado
	char x = 0, y = 0, z = 0;
// identificar
	IO_id("Method_e1 - Programa - v0.0");
// ler do teclado
	x = IO_readchar("Digite um caractere: ");
	y = IO_readchar("\nDigite outro caractere: ");
	z = IO_readchar("\nDigite outro caractere: ");
// testar
	if ( ( (y < x) && (x < z) ) || ( (z < x) && (x < y) ) )
	{
		IO_printf("\n%s", "O primeiro esta entre o segundo e o terceiro");
	}
	else
	{
		if ( (x == y) || ( x == z ) )
		{
			IO_printf ( "\n%s", "O primeiro e igual ao segundo ou ao terceiro");
		}
		else
		{
			IO_printf ( "\n%s", "O primeiro nao esta entre o segundo e o terceiro nem e igual a um deles"); 
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );	
}

// Method_e2.

void method_e2 ( void )
{
// definir dado
	char x = 0, y = 0, z = 0;
// identificar
	IO_id("Method_e2 - Programa - v0.0");
// ler do teclado
	x = IO_readchar("Digite um caractere: ");
	y = IO_readchar("\nDigite outro caractere: ");
	z = IO_readchar("\nDigite outro caractere: ");
// testar
	if ( y != z )
	{
		if ( !(( (y <= x) && (x <= z) ) || ( (z <= x) && (x <= y) )) )
		{
			IO_printf ( "\n%s\n", "O primeiro esta fora do intervalo definido pelos outros dois" );
		}
		else
		{
			IO_printf ( "\n%s\n", "O primeiro esta dentro do intervalo definido pelos outros dois" );
		}
	}
	else
	{
		IO_printf ( "\n%s\n", "O segundo numero e o terceiro numero sao iguais" );
	}
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
		printf ( "\n%s" , "1 - Method_e1" );
		printf ( "\n%s" , "2 - Method_e2" );
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
			case 1: method_e1 ( ); break;
			case 2: method_e2 ( ); break;
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

/*

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

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -6

Numero par (-6).

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

Opcao = 11


Opcao = 11

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -3

Numero impar (-3).

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

Opcao = 11


Opcao = 11

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 0

Numero par (0).

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

Opcao = 11


Opcao = 11

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 3

Numero impar (3).

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

Opcao = 11


Opcao = 11

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 6

Numero par (6).

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

Opcao = 11


Opcao = 11

Method_11 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 9

Numero impar (9).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -60

Numero par e menor que 25 (-60).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -13

Numero impar e maior ou igual a -25 (-13).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 0

Numero par e menor que 25 (0).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 13

Numero impar e maior ou igual a -25 (13).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 26

Numero par e maior que 25 (26).

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

Opcao = 12


Opcao = 12

Method_12 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 39

Numero impar e maior ou igual a -25 (39).

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 15

Nao pertence ao intervalo aberto entre (35:65) (15)

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 25

Nao pertence ao intervalo aberto entre (35:65) (25)

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 30

Nao pertence ao intervalo aberto entre (35:65) (30)

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 35

Nao pertence ao intervalo aberto entre (35:65) (35)

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 65

Nao pertence ao intervalo aberto entre (35:65) (65)

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

Opcao = 13


Opcao = 13

Method_13 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 70

Nao pertence ao intervalo aberto entre (35:65) (70)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 5

Nao pertence ao intervalo fechado [15:60] (5)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 15

Pertence ao intervalo fechado [15:60] (15)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 20

Pertence ao intervalo fechado [15:60] (20)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 45

Pertence ao intervalo fechado [15:60] (45)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 45

Pertence ao intervalo fechado [15:60] (45)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 60

Pertence ao intervalo fechado [15:60] (60)

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

Opcao = 14


Opcao = 14

Method_14 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 65

Nao pertence ao intervalo fechado [15:60] (65)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 5

Nao percente nem ao intervalo [10:30] nem ao intervalo (25:50) (5)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 15

Pertence apenas ao intervalo [10:30] (15)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 20

Pertence apenas ao intervalo [10:30] (20)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 25

Pertence apenas ao intervalo [10:30] (25)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 30

Percente a intersecao entre os intevalos [10:30] e (25:50) (30)

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

Opcao = 15


Opcao = 15

Method_15 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 60

Nao percente nem ao intervalo [10:30] nem ao intervalo (25:50) (60)

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

Opcao = 16


Opcao = 16

Method_16 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 5

Digite outro valor inteiro: 15

O primeiro nao e impar e o segundo nao e par simultaneamente

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

Opcao = 16


Opcao = 16

Method_16 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 35

Digite outro valor inteiro: 40

O primeiro e impar e o segundo e par (35, 40)

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

Opcao = 16


Opcao = 16

Method_16 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 60

Digite outro valor inteiro: 72

O primeiro nao e impar e o segundo nao e par simultaneamente

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

Opcao = 16


Opcao = 16

Method_16 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 40

Digite outro valor inteiro: 63

O primeiro nao e impar e o segundo nao e par simultaneamente

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

Opcao = 16


Opcao = 16

Method_16 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 89

Digite outro valor inteiro: 98

O primeiro e impar e o segundo e par (89, 98)

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

Opcao = 17


Opcao = 17

Method_17 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -5

Digite outro valor inteiro: -15

Primeiro nao e par

Segundo impar e negativo (-15)

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

Opcao = 17


Opcao = 17

Method_17 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -13

Digite outro valor inteiro: 20

Primeiro nao e par
Segundo nao e impar

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

Opcao = 17


Opcao = 17

Method_17 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -30

Digite outro valor inteiro: 45

Primeiro par e negativo (-30)
Segundo impar e positivo (45)

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

Opcao = 17


Opcao = 17

Method_17 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: 60

Digite outro valor inteiro: 72


Primeiro par e positivo (60)
Segundo nao e impar

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

Opcao = 17


Opcao = 17

Method_17 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor inteiro: -89

Digite outro valor inteiro: -98

Primeiro nao e par
Segundo nao e impar

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

Opcao = 18


Opcao = 18

Method_18 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 0.5

Digite outro valor real: 1.5

Um terco do primeiro (0.166667) menor que o segundo (1.500000)

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

Opcao = 18


Opcao = 18

Method_18 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 3.0

Digite outro valor real: 3.0

Um terco do primeiro (1.000000) menor que o segundo (3.000000)

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

Opcao = 18


Opcao = 18

Method_18 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: -5.5

Digite outro valor real: 6.4

Um terco do primeiro (-1.833333) menor que o segundo (6.400000)

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

Opcao = 18


Opcao = 18

Method_18 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 7.8

Digite outro valor real: -8.7

Um terco do primeiro (2.600000) maior que o segundo (-8.700000)

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

Opcao = 19


Opcao = 19

Method_19 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 0.75

Digite outro valor real: 0.5

Digite outro valor real: 1.8

O primeiro esta entre o segundo e o terceiro

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

Opcao = 19


Opcao = 19

Method_19 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 3.6

Digite outro valor real: 4.5

Digite outro valor real: 2.4

O primeiro esta entre o segundo e o terceiro

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

Opcao = 19


Opcao = 19

Method_19 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 6.3

Digite outro valor real: 7.2

Digite outro valor real: 6.5

O primeiro nao esta entre o segundo e o terceiro

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

Opcao = 19


Opcao = 19

Method_19 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 9.8

Digite outro valor real: 8.9

Digite outro valor real: 8.9

Erro: segundo e terceiro numeros sao iguais

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

Opcao = 20


Opcao = 20

Method_20 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 0.75

Digite outro valor real: 0.5

Digite outro valor real: 1.8

O primeiro esta entre o segundo e o terceiro

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

Opcao = 20


Opcao = 20

Method_20 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 3.6

Digite outro valor real: 4.5

Digite outro valor real: 2.4

O primeiro esta entre o segundo e o terceiro

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

Opcao = 20


Opcao = 20

Method_20 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 6.3

Digite outro valor real: 7.2

Digite outro valor real: 6.5

O primeiro nao esta entre o segundo e o terceiro

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

Opcao = 20


Opcao = 20

Method_20 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um valor real: 9.8

Digite outro valor real: 8.9

Digite outro valor real: 8.9

Os numeros nao sao todos diferentes entre si

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

Opcao = 1


Opcao = 1

Method_e1 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: e

Digite outro caractere: c

O primeiro nao esta entre o segundo e o terceiro nem e igual a um deles

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

Opcao = 1


Opcao = 1

Method_e1 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: e

Digite outro caractere: a

Digite outro caractere: c

O primeiro nao esta entre o segundo e o terceiro nem e igual a um deles

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

Opcao = 1


Opcao = 1

Method_e1 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: c

Digite outro caractere: e

O primeiro nao esta entre o segundo e o terceiro nem e igual a um deles

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

Opcao = 1


Opcao = 1

Method_e1 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: e

Digite outro caractere: c

Digite outro caractere: a

O primeiro nao esta entre o segundo e o terceiro nem e igual a um deles

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

Opcao = 1


Opcao = 1

Method_e1 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: e

Digite outro caractere: a

O primeiro e igual ao segundo ou ao terceiro

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

Opcao = 2


Opcao = 2

Method_e2 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: e

Digite outro caractere: c

O primeiro esta fora do intervalo definido pelos outros dois


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

Opcao = 2


Opcao = 2

Method_e2 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: e

Digite outro caractere: a

Digite outro caractere: c

O primeiro esta fora do intervalo definido pelos outros dois


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

Opcao = 2


Opcao = 2

Method_e2 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: c

Digite outro caractere: e

O primeiro esta fora do intervalo definido pelos outros dois


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

Opcao = 2


Opcao = 2

Method_e2 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: e

Digite outro caractere: c

Digite outro caractere: a

O primeiro esta fora do intervalo definido pelos outros dois


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

Opcao = 2


Opcao = 2

Method_e2 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Digite um caractere: a

Digite outro caractere: e

Digite outro caractere: a

O primeiro esta dentro do intervalo definido pelos outros dois


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
