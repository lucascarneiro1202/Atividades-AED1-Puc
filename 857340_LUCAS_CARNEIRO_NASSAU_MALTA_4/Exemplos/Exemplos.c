/*
Exemplo0400 - v0.0. - 18 / 03 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// dependencias

#include "io.h" // para definicoes proprias

// Funcao para determinar se valor inteiro e' positivo

bool positive ( int x )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( x > 0 )
	{
		result = true;
	} // end if
	return ( result );
} // end positive ( )

// Funcao para determinar se o valor inteiro pertence a intervalo aberto

bool belongsTo ( int x, int inferior, int superior )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( inferior < x && x < superior )
	{
		result = true;
	} // end if
	return ( result );
} // end belongsTo ( )

// Funcao para determinar se valor inteiro e' par

bool even ( int x )
{
// definir dado local
	bool result = false;
// testar a condicao ( resto inteiro (%) da divisao por 2 igual a zero )
	if ( x % 2 == 0 )
	{
		result = true;
	} // end if
	return ( result );
} // end even ( )

// Funcao para determinar se caractere e' minuscula

bool isLowerCase ( char x )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( 'a' <= x && x <= 'z' )
	{
		result = true;
	} // end if
	return ( result );
} // end isLowerCase ( )

// Funcao para determinar se o caractere e' digito

bool isDigit ( char x )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( '0' <= x && x <= '9' )
	{
		result = true;
	} // end if
	return ( result );
} // end isDigit ( )

// Funcao para determinar se caractere e' digito

bool isADigit ( char x )
{
	return ( '0' <= x && x <= '9' );
} // end isADigit ( )

// Funcao para concatenar 'a cadeia de caracteres mais um digito

chars concatADigit ( chars string, char digit )
{
	return ( IO_concat ( string, IO_toString_c ( digit ) ) );
} // end concatADigit ( )




// Method_00 - nao faz nada.

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_01 - Repeticao para ler certa quantidade de valores

void method_01 ( void )
{
// definir dado
	int quantidade = 0;
	int valor = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 01 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
	controle = 1;
	while ( controle <= quantidade )
	{
	// ler e mostrar valor do teclado
		valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );
	// passar ao proximo valor
		controle = controle + 1;
	} // end while
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

// Method_02 - Ler valores e contar positivos

void method_02 ( void )
{
// definir dado
	int quantidade = 0;
	int valor = 0;
	int controle = 0;
	int contador = 0;
// identificar
	IO_id ( "Method02 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
	controle = 1;
	while ( controle <= quantidade )
	{
	// ler valor do teclado
		valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ),": " ) );
	// testar e contar se valor for positivo
		if ( positive ( valor ) )
		{
			contador = contador + 1;
		} // end if
	// passar ao proximo valor
		controle = controle + 1;
	} // end while
// mostrar a quantidade de valores positivos
	IO_printf ( "%s%d\n", "Positivos = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

// Method_03 - Ler valores e contar positivos menores que 100

void method_03 ( void )
{
// definir dado
	int quantidade = 0;
	int valor = 0;
	int controle = 0;
	int contador = 0;
// identificar
	IO_id ( "Method_03 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
	controle = 1;
	while ( controle <= quantidade )
	{
	// ler valor do teclado
		valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );
	// testar e contar se valor for positivo
		if ( belongsTo ( valor, 0, 100 ) )
		{
			contador = contador + 1;
		} // end if
	// passar ao proximo valor
		controle = controle + 1;
	} // end while
// mostrar a quantidade de valores positivos
	IO_printf ( "%s%d\n", "Positivos menores que 100 = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

// Method_04 - Ler valores e contar positivos menores que 100 e pares

void method_04 ( void )
{
// definir dado
	int quantidade = 0;
	int valor = 0;
	int controle = 0;
	int contador = 0;
// identificar
	IO_id ( "Method_04 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
	controle = 1;
	while ( controle <= quantidade )
	{
	// ler valor do teclado
		valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );
	// testar e contar se valor for positivo menor que 100 e par
		if ( belongsTo ( valor, 0, 100 ) && even ( valor ) )
		{
			contador = contador + 1;
		} // end if
// passar ao proximo valor
		controle = controle + 1;
	} // end while
// mostrar a quantidade de valores positivos
	IO_printf ( "%s%d\n", "Positivos menores que 100 e pares = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

// Method_05 - Ler valores e contar positivos menos que 100 e pares (alternativo)

void method_05 ( void )
{
// definir dado
	int quantidade = 0;
	int valor = 0;
	int controle = 0;
	int contador = 0;
	bool ok = false;
// identificar
	IO_id ( "Method05 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// repetir para a quantidade de vezes informada
	controle = 1;
	while ( controle <= quantidade )
	{
	// ler valor do teclado
		valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );
	// testar e contar se valor for positivo menor que 100 e par
		ok = belongsTo ( valor, 0, 100 );
		ok = ok && even ( valor );
		if ( ok )
		{
			contador = contador + 1;
		} // end if
// passar ao proximo valor
		controle = controle + 1;
	} // end while
// mostrar a quantidade de valores positivos
	IO_printf ( "%s%d\n", "Positivos menores que 100 e pares = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

// Method_06 - Ler palavra e contar letras minusculas

void method_06 ( void )
{
// definir dado
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int posicao = 0;
	char simbolo = '_';
	int contador = 0;
// identificar
	IO_id ( "Method06 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// determinar a quantidade de simbolos na palavra
	tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
	for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
	{
	// isolar um simbolo por vez
		simbolo = palavra [ posicao ];
	// testar e contar se caractere e' letra minuscula
		if ( isLowerCase ( simbolo ) )
		{
			contador = contador + 1;
		} // end if
	} // end for
// mostrar a quantidade de minusculas
	IO_printf ( "%s%d\n", "Minusculas = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )

// Method_07 - Ler palavra, contar e mostrar letras minusculas

void method_07 ( void )
{
// definir dado
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int posicao = 0;
	char simbolo = '_';
	int contador = 0;
// identificar
	IO_id ( "Method07 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// determinar a quantidade de simbolos na palavra
	tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
	for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
	{
	// isolar um simbolo por vez
		simbolo = palavra [ posicao ];
	// testar e contar se caractere e' letra minuscula
		if ( isLowerCase ( simbolo ) )
		{
		// mostrar
			IO_printf ( "%c ", simbolo );
		// contar
			contador = contador + 1;
		} // end if
	} // end for
// mostrar a quantidade de minusculas
	IO_printf ( "\n%s%d\n", "Minusculas = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )

// Method_08  - Ler palavra, contar e mostrar letras minusculas (alternativo)

void method_08 ( void )
{
// definir dado
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int posicao = 0;
	char simbolo = '_';
	int contador = 0;
	chars minusculas = IO_new_chars ( STR_SIZE );
	strcpy ( minusculas, STR_EMPTY ); // vazio
// identificar
	IO_id ( "Method08 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// determinar a quantidade de simbolos na palavra
	tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
	for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
	{
	// isolar um simbolo por vez
		simbolo = palavra [ posicao ];
	// testar e contar as letras minusculas de uma palavra
		if ( isLowerCase ( simbolo ) )
		{
		// concatenar simbolo encontrado
			minusculas = IO_concat ( minusculas, IO_toString_c ( simbolo ) );
		// contar
			contador = contador + 1;
		} // end if
	} // end for
// mostrar a quantidade de minusculas
	IO_printf ( "\n%s%d [%s]\n", "Minusculas = ", contador, minusculas );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )

// Method_09 - Ler palavra e contar os algarismos

void method_09 ( void )
{
// definir dado
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int posicao = 0;
	char simbolo = '_';
	int contador = 0;
// identificar
	IO_id ( "Method09 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com caracteres: " );
// determinar a quantidade de simbolos
	tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
	for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
	{
	// isolar um simbolo por vez
		simbolo = palavra [ posicao ];
	// testar e contar os algarismos em uma cadeia de caracteres
		if ( isDigit ( simbolo ) )
		{
		// mostrar
			IO_printf ( "%c ", simbolo );
		// contar
			contador = contador + 1;
		} // end if
	} // end for
// mostrar a quantidade de digitos
	IO_printf ( "\n%s%d\n", "Algarismos = ", contador );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )

// Method_10 - Ler palavra, contar os algarismos e concatena'-los 

void method_10 ( void )
{
// definir dado
	chars palavra = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int posicao = 0;
	char simbolo = '_';
	chars digitos = IO_new_chars ( STR_SIZE );
	strcpy ( digitos, STR_EMPTY ); // vazio
// identificar
	IO_id ( "Method_10 - v0.0" );
// ler do teclado
	palavra = IO_readstring ( "Entrar com uma palavra: " );
// determinar a quantidade de simbolos na palavra
	tamanho = strlen ( palavra );
// repetir para a quantidade de vezes informada
	for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
	{
	// isolar um simbolo por vez
		simbolo = palavra [ posicao ];
	// testar e contar os algarismos em uma cadeia de caracteres
		if ( isADigit ( simbolo ) )
		{
		// concatenar simbolo encontrado
			digitos = concatADigit ( digitos, simbolo );
		} // end if
	} // end for
// mostrar a quantidade de digitos
	IO_printf ( "\n%s%d [%s]\n", "Algarismos = ", (int) strlen( digitos ), digitos );
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
		IO_println ( "EXEMPLO0400 - Programa - v0.0" );
		// ler do teclado
		IO_println ( "Opcoes" );
		IO_println ( "0 - parar" );
		IO_println ( "1 - Repeticao para ler certa quantidade de valores" );
		IO_println ( "2 - Ler valores e contar positivos" );
		IO_println ( "3 - Ler valores e contar positivos menores que 100" );
		IO_println ( "4 - Ler valores e contar positivos menores que 100 e pares" );
		IO_println ( "5 - Ler valores e contar positivos menos que 100 e pares (alternativo)" ); 		
		IO_println ( "6 - Ler palavra e contar letras minusculas" );
		IO_println ( "7 - Ler palavra, contar e mostrar letras minusculas" );
		IO_println ( "8 - Ler palavra, contar e mostrar letras minusculas (alternativo)" );
		IO_println ( "9 - Ler palavra e contar os algarismos" );
		IO_println ( "10 - Ler palavra, contar os algarismos e concatena'-los " );
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
0.1 18/03 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
