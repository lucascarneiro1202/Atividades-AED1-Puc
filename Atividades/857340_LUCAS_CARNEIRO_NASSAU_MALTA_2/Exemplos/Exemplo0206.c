/*
Exemplo0206 - v0.0. - 04 / 03 / 2024
Author: Lucas Carneiro Nassau Malta
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0206 exemplo0206.c
Windows: gcc -o exemplo0206 exemplo0206.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0206
Windows: exemplo0206
*/

// dependencias
#include "io.h" // bibliotecas e outras definicoes

// Method_01.

void method_01 ( void )
{
// definir dado
	int x = 0;
// identificar
	IO_id ( "Method_01 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
// testar valor
	if ( x == 0 )
	{
		IO_printf ( "%s(%d)\n", "Valor igual a zero", x );
	}
	if ( x != 0 )
	{
		IO_printf ( "\n%s (%d)\n", "Valor diferente de zero", x );		
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_01 ( )

// Method_02.

void method_02 ( void )
{
// definir dado
	int x = 0; // definir variavel com valor inicial
// identificar
	IO_id ( "Method_02 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
// testar valor
	if ( x == 0 )
	{
		IO_printf ( "\n%s (%d)\n", "Valor igual a zero", x );
	}
	else // equivalente a "caso diferente do já' testado"
	{
		IO_printf ( "\n%s (%d)\n", "Valor diferente de zero", x );
	} // end if
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

// Method_03.

void method_03 ( void )
{
// definir dado
	int x = 0; // definir variavel com valor inicial
// identificar
	IO_id ( "Method_03 - Programa - v0.0" );
// ler do teclado
	x = IO_readint ( "Entrar com um valor inteiro: " );
// testar valor
	if ( x == 0 )
	{
		IO_printf ( "\n%s (%d)\n", "Valor igual a zero", x );
	}
	else
	{
		IO_printf ( "\n%s (%d)\n", "Valor diferente de zero ", x );
		if ( x > 0 )
		{
			IO_printf ( "\n%s (%d)\n", "Valor maior que zero", x );
		}
		else
		{
			IO_printf ( "\n%s (%d)\n", "Valor menor que zero", x );
		} // end if
	} // end if
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

// Method_04.

void method_04 ( void )
{
// definir dado
	double x = 0.0; // definir variavel com valor inicial
// identificar
	IO_id ( "Method_04 - Programa - v0.0" );
// ler do teclado
	x = IO_readdouble ( "\nEntrar com um valor real: " );
// testar valor
	if ( 1.0 <= x && x <= 10.0 )
	{
		IO_printf ( "%s (%lf)\n", "Valor dentro do intervalo [1:10] ", x );
	}
	else
	{
		IO_printf ( "%s (%lf)\n", "Valor fora do intervalo [1:10] ", x );
		if ( x < 1.0 )
		{
			IO_printf ( "%s (%lf)\n", "Valor abaixo do intervalo [1:10] ", x );
		}
		else
		{
			IO_printf ( "%s (%lf)\n", "Valor acima do intervalo [1:10]", x );
		} // end if
	} // end if
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

// Method_05.

void method_05 ( void )
{
// definir dado
	char x = '_';
// identificar
	IO_id ( "Method_05 - Programa - v0.0" );
// ler do teclado
	x = IO_readchar ( "Entrar com um caractere: " );
// testar valor
	if ( ('a' <= x) && (x <= 'z') )
	{
		IO_printf ( "\n%s (%c)\n", "Letra minuscula", x );
	}
	else
	{
		IO_printf ( "\n%s (%c)\n", "Valor diferente de minuscula", x );
		if ( ('A' <= x) && (x <= 'Z') )
		{
			IO_printf ( "\n%s (%c)\n", "Letra maiuscula", x );
		}
		else {
			if ( ('0' <= x) && (x <= '9') )
			{
				IO_printf ( "\n%s (%c)\n", "Algarismo", x );
			}
			else
			{
				IO_printf ( "\n%s (%c)\n", "Valor diferente de algarismo", x );
			} // end if
		} // end if
	} // end if
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

// Method_06.

void method_06 ( void )
{
// definir dado
	char x = '_'; // definir variavel com valor inicial
// identificar
	IO_id ( "Method_06 - Programa - v0.0" );
// ler do teclado
	x = IO_readchar ( "Entrar com um caractere: " );
// testar valor
	if ( ( 'a' <= x && x <= 'z' ) || ( 'A' <= x && x <= 'Z' ) )
	{
		IO_printf ( "%s (%c)\n", "Letra", x );
	}
	else
	{
		IO_printf ( "%s (%c)\n", "Valor diferente de letra", x );
	} // end if
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )

/*
Funcao principal.
@return codigo de encerramento
*/

int main ( void )
{
// definir dado
	int opcao = 0;
// identificar
	printf ( "%s\n", "Exemplo0206 - Programa = v0.0" );
	printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta" );
	printf ( "\n" ); // mudar de linha
// acoes
// repetir
	do
	{
		// para mostrar opcoes
		printf ( "\n%s\n", "Opcoes:" );
		printf ( "\n%s" , "0 - Terminar" );
		printf ( "\n%s" , "1 - Method_01" );
		printf ( "\n%s" , "2 - Method_02" );
		printf ( "\n%s" , "3 - Method_03" );
		printf ( "\n%s" , "4 - Method_04" );
		printf ( "\n%s" , "5 - Method_05" );
		printf ( "\n%s" , "6 - Method_06" );
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
			case 1: method_01 ( ); break;
			case 2: method_02 ( ); break;
			case 3: method_03 ( ); break;
			case 4: method_04 ( ); break;
			case 5: method_05 ( ); break;
			case 6: method_06 ( ); break;
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
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 04/03 esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( OK ) identificacao de programa
*/

/*
Exemplo0206 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
1 - Method_01
2 - Method_02
3 - Method_03
4 - Method_04
5 - Method_05
6 - Method_06

Opcao = 6


Opcao = 6

Method_06 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com um caractere: t
Letra (t)

Apertar ENTER para continuar


Opcoes:

0 - Terminar
1 - Method_01
2 - Method_02
3 - Method_03
4 - Method_04
5 - Method_05
6 - Method_06

Opcao = 6


Opcao = 6

Method_06 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com um caractere: 7
Valor diferente de letra (7)

Apertar ENTER para continuar


Opcoes:

0 - Terminar
1 - Method_01
2 - Method_02
3 - Method_03
4 - Method_04
5 - Method_05
6 - Method_06

Opcao = 0


Opcao = 0


Apertar ENTER para terminar.
*/
