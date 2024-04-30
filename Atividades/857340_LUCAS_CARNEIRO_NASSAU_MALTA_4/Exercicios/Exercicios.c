// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias

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

// Funcao para determinar se o numero real esta entre o segundo e o terceiro parametros

bool belongsToClose_double ( double valor, double inferior, double superior )
{
// definir dados locais
	bool result = false;
// testar condicao
	if ( inferior <= valor && valor <= superior )
	{
		result = true;
	}
	return ( result );
}

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

// Funcao para determinar se caractere e' letra

bool isLetter ( char x )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( ( 'a' <= x && x <= 'z' ) || ( 'A' <= x && x <= 'Z' ) )
	{
		result = true;
	} // end if
	return ( result );	
} // end isLetter ( )

// Funcao para determinar se caractere e' letra maiuscula

bool isUpperCase ( char x )
{
// definir dado local
	bool result = false;
// testar a condicao
	if ( 'A' <= x && x <= 'Z' )
	{
		result = true;
	} // end if
	return ( result );	
} // end isUpperCase ( )

// Funcao para concatenar 'a cadeia de caracteres mais um digito

chars concatADigit ( chars string, char digit )
{
	return ( IO_concat ( string, IO_toString_c ( digit ) ) );
} // end concatADigit ( )

// Funcao para concatenar 'a cadeia de caracteres mais uma letra

chars concatALetter ( chars string, char character )
{
	return ( IO_concat( string, IO_toString_c( character ) ) );
} // end concatALetter ( )

// Funcao para retornar uma cadeia de caracteres que contem somente os que estao entre o segundo e o teceiro parametros

chars oneIsBiggerThan ( chars string, char characterbottom, char characterup )
{
// definir dado local
	chars result = IO_new_chars ( STR_SIZE ); result = "";
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
	// definir caractere local
		char localcharacter = string[posicao];
		bool check = ( characterbottom < localcharacter ) && ( localcharacter <= characterup );
	// testar a condicao
		if ( check )
		{
			result = IO_concat ( result, IO_toString_c ( localcharacter ) );
		}		
		posicao = posicao + 1;					
	}
	return ( result );
} // end isBiggerThan ( )

// Funcao para retornar uma cadeia de caracteres que contem somente os que estao entre o segundo e o teceiro ou entre o quarto e o quinto parametros

chars twoIsSmallerThan ( chars string, char characterbottom1, char characterbottom2, char characterup1, char characterup2 )
{
// definir dado local
	chars result = IO_new_chars ( STR_SIZE ); result = "";
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = ( characterbottom1 <= localcharacter && localcharacter < characterup1 ) || ( characterbottom2 <= localcharacter &&  localcharacter < characterup2 ) ;
		// testar a condicao
		if ( check )
		{
			result = IO_concat ( result, IO_concat ( IO_toString_c ( localcharacter ), " " ) );
		}		
		posicao = posicao + 1;					
	}
	return ( result );
} // end twoIsBiggerThan ( )

// Funcao para contar a quantidade de caracteres que estao entre o segundo e o terceiro parametros

int howManyIsBiggerThan ( chars string, char characterbottom, char characterup )
{
// definir dado local
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
	int contador = 0;
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = ( characterbottom < localcharacter ) && ( localcharacter <= characterup );
		// testar a condicao
		if ( check )
		{
			contador = contador + 1;
		}		
		posicao = posicao + 1;					
	}
	return ( contador );
} // end howManyIsBiggerThan ( )

// Funcao para contar a quantidade de caracteres que estao entre o segundo e o terceiro ou entre o quarto e o quinto parametros

int twoHowManyIsSmallerThan ( chars string, char characterbottom1, char characterbottom2, char characterup1, char characterup2 )
{
// definir dado local
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
	int contador = 0.;
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = ( characterbottom1 <= localcharacter && localcharacter < characterup1 ) || ( characterbottom2 <= localcharacter &&  localcharacter < characterup2 ) ;
		// testar a condicao
		if ( check )
		{
			contador = contador + 1;
		}		
		posicao = posicao + 1;					
	}
	return ( contador );
} // end howManyIsBiggerThan ( )

// Funcao para contar a quantidade de caracteres que sao digitos e pares

int howManyIsEven ( chars string )
{
// definir dados locais
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
	int contador = 0;
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
	// definir caractere local
		bool check = isDigit( string[posicao] );
	// testar se e' digito
		if ( check )
		{			
		// definir caractere local
			int localdigit = (int) string[posicao];
		// definir bool local
			bool even_ = even ( localdigit );
		// testar se e' par
			if ( even_ )
			{
				contador = contador + 1;
			}
		}
		posicao = posicao + 1;
	}
	return ( contador );
} // end howManyIsEven ( )

// Funcao para retornar uma cadeia de caraceres que contem somente simbolos nao alfanumericos

chars nonAlphanumericSymbols ( chars string )
{
// definir dado local
	chars result = IO_new_chars ( STR_SIZE ); result = "";
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = !( isLetter( localcharacter ) || isDigit (localcharacter) );
		// testar a condicao
		if ( check )
		{
			result = IO_concat ( result, IO_concat ( IO_toString_c ( localcharacter ), " " ) );
		}		
		posicao = posicao + 1;					
	}
	return ( result );
} // end nonAlphanumericSymbols ( )

// Funcao para retornar uma cadeia de caraceres que contem somente simbolos alfanumericos

chars AlphanumericSymbols ( chars string )
{
// definir dado local
	chars result = IO_new_chars ( STR_SIZE ); result = "";
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = isLetter( localcharacter ) || isDigit (localcharacter);
		// testar a condicao
		if ( check )
		{
			result = IO_concat ( result, IO_concat( IO_toString_c ( localcharacter ), " " ) );
		}		
		posicao = posicao + 1;					
	}
	return ( result );
} // end AlphanumericSymbols ( )

int howManyAlphanumericSymbols ( chars string )
{
// definir dado local
	int contador = 0;
	int posicao = 0;
	int controle = 0;
	int tamanho = strlen ( string );
// repetir letra por letra
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// definir caractere local
		char localcharacter = string[posicao];
		bool check = isLetter( localcharacter ) || isDigit (localcharacter);
		// testar a condicao
		if ( check )
		{
			contador = contador + 1;
		}		
		posicao = posicao + 1;					
	}
	return ( contador );
} // end howManyAlphanumericSymbols ( )




// Method_00

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_11

void method_11 ( void )
{
// definir dado
	double valor = 0.0;
	double inferior = 0.0;
	double superior = 0.0;	
	int quantidade = 0;
	int controle = 0;
	bool check = 0;
	int contador_dentro = 0;
	int contador_fora = 0;
// identificar
	IO_id ( "Method 11 - v0.0" );
// ler do teclado
	inferior = IO_readdouble ( "\nEntrar com um valor real para iniciar um intervalo fechado: " );
	do
	{
		superior = IO_readdouble ( "\nEntrar com outro valor real para terminar um intervalo fechado: " );
	} while ( superior <= inferior );
	do
	{
		quantidade = IO_readint ( "\nEntrar com uma quantidade: " );
	} while ( quantidade <= 0 );
// repetir pela quantidade de vezes informada
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	// ler e mostrar o valor do teclado
		valor = IO_readdouble ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );
	// chamar funcao
		check = belongsToClose_double( valor, inferior, superior );
	// testar se esta' dentro do intervalo
		if ( check )
		{
			contador_dentro = contador_dentro + 1;
		}
		else
		{
			contador_fora = contador_fora + 1;
		}
	}
// mostrar a quantidade de valores dentro do intervalo
	IO_printf ( "\n%s%d", "Quantidade de valores dentro do intervalo = ", contador_dentro );
// mostrar a quantidade de valores fora do intervalo
	IO_printf ( "\n%s%d", "Quantidade de valores fora do intervalo = ", contador_fora );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
// definir dados
	chars caracteres = IO_new_chars( STR_SIZE );
	int controle = 0;
	int contador = 0;
	int tamanho = 0;
	int posicao = 0;
	int check = 0;
// identificar
	IO_id ( "Method 12 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
// testar e contar a quantidade de letras maiusculas maiores que 'L'
	tamanho = strlen( caracteres );
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		check = isUpperCase ( caracteres[posicao] );
		if ( ( check ) && ( ( 'L' < caracteres[posicao] ) && ( caracteres[posicao] < 'Z' ) ) )
		{
			contador = contador + 1;
		}
		posicao = posicao + 1;
	}
// mostrar a quantidade de letras maiusculas maiores que 'L'
	IO_printf ( "\n%s%d\n", "Quantidade de letras maiusculas maiores que 'L': ", contador );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
// definir dados
	chars caracteres = IO_new_chars ( STR_SIZE );
	int quantidade = 0;
// identificar
	IO_id ( "Method 13 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para contar a quantidade de letras maiusculas maiores que 'L'
	quantidade = howManyIsBiggerThan( caracteres, 'L', 'Z' );
// mostrar a quantidade de letras maiusculas maiores que 'L'
	IO_printf ( "\n%s%d\n", "Letras maiusculas maiores que 'L': ", quantidade );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
// definir dados
	chars caracteres = IO_new_chars ( STR_SIZE );
	chars caracteresMaioresQueL = IO_new_chars ( STR_SIZE );
	int tamanho = 0;
	int controle = 0;
	int posicao = 0;
// identificar
	IO_id ( "Method 14 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para separar as letras maiusculas maiores que 'L'
	caracteresMaioresQueL = oneIsBiggerThan ( caracteres, 'L', 'Z' );
// mostrar as letras maiusculas maiores que 'L'
	IO_printf ( "\n%s", "Letras maiusculas maiores que 'L': " );
	tamanho = strlen( caracteresMaioresQueL );
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
	// definir dado local
		char caracterelocal = caracteresMaioresQueL[posicao];
	// mostrar os caracteres
		IO_printf ( "%c ", caracterelocal );
	// variacao de posicao
		posicao = posicao + 1;
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
// definir dados
	chars caracteres = IO_new_chars ( STR_SIZE );
	int quantidade = 0;
// identificar
	IO_id ( "Method 15 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para contar a quantidade de letras menores que 'L' ou 'l'
	quantidade = twoHowManyIsSmallerThan ( caracteres, 'A', 'a', 'L', 'l' );
// mostrar a quantidade de letras maiusculas maiores que 'L'
	IO_printf ( "\n%s%d\n", "Letras maiusculas menores que 'L' ou 'l: ", quantidade );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
// definir dado
	chars caracteres = IO_new_chars ( STR_SIZE );
	chars letras_maiores_que_L_ou_l = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method 16 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para separar as letras maiusculas maiores que 'L'
	letras_maiores_que_L_ou_l = twoIsSmallerThan ( caracteres, 'A', 'a', 'L', 'l' );
// mostrar as letras maiusculas maiores que 'L' ou 'l'
	IO_printf ( "\n%s%s", "Letras maiusculas menores que 'L' ou 'l': ", letras_maiores_que_L_ou_l );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
// definir dados
	chars caracteres = IO_new_chars ( STR_SIZE );
	int quantidade = 0;
// identificar
	IO_id ( "Method 17 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para contar a quantidade de digitos pares
	quantidade = howManyIsEven( caracteres );
// mostrar a quantidade de digitos pares
	IO_printf ( "\n%s%d", "Quantidade de digitos pares: ", quantidade );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
// definir dado
	chars caracteres = IO_new_chars ( STR_SIZE );
	chars simbolos_nao_alfanumericos = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method 18 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para separar os simbolos nao alfanumericos
	simbolos_nao_alfanumericos = nonAlphanumericSymbols ( caracteres );
// mostrar os simbolos nao alfanumericos
	IO_printf ( "\n%s%s", "Simbolos nao alfanumericos: ", simbolos_nao_alfanumericos );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
// definir dado
	chars caracteres = IO_new_chars ( STR_SIZE );
	chars simbolos_alfanumericos = IO_new_chars ( STR_SIZE );
// identificar
	IO_id ( "Method 19 - v0.0" );
// ler do teclado
	caracteres = IO_readstring ( "Entrar com uma cadeia de caracteres: " );
// chamar funcao para separar os simbolos alfanumericos
	simbolos_alfanumericos = AlphanumericSymbols ( caracteres );
// mostrar os simbolos alfanumericos
	IO_printf ( "\n%s%s", "Simbolos alfanumericos: ", simbolos_alfanumericos );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
// definir dados
	chars caracteres = IO_new_chars ( STR_SIZE ); 
	chars caracteres_alfanumericos = IO_new_chars ( STR_SIZE );
	int controle = 0;
	int n = 0;
	int contadortotal = 0;
	int contadorlocal = 0;
// identificar
	IO_id ( "Method 20 - v0.0" );
// ler um numero 'n' de cadeias de caracteres a serem lidas
	n = IO_readint ( "Entrar com uma quantidade 'n' de cadeias de caracteres a serem lidas: "  );
// repetir 'n' vezes o teste 
	for ( controle = 0; controle < n; controle = controle + 1 )
	{
	// definir dados locais
		caracteres = "";
		caracteres_alfanumericos = "";
		contadorlocal = 0;
	// ler do teclado
		caracteres = IO_readstring ( "\n\nEntrar com uma cadeia de caracteres: " );
	// chamar funcao para separar os caracteres alfanumericos
		caracteres_alfanumericos = AlphanumericSymbols ( caracteres );
	// chamar funcao para contar o numero de caracteres alfanumericos
		contadorlocal = howManyAlphanumericSymbols ( caracteres );
		contadortotal = contadortotal + contadorlocal;
	// mostrar os caracteres alfanumericos
		IO_printf ( "\n%s%s", "Caracteres alfanumericos locais: ", caracteres_alfanumericos );
	// mostrar a quantidade de caracteres alfanumericos
		IO_printf ( "\n%s%d", "Quantidade local de caracteres alfanumericos: ", contadorlocal );
	}
// mostrar a quantidade total de caracteres alfanumericos
	IO_printf ( "\n\n%s%d", "Quantidade total de caracteres alfanumericos: ", contadortotal );
// encerar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_20 ( )

// Funcao principal

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
		IO_println ( "11 - Method_11" );
		IO_println ( "12 - Method_12" );
		IO_println ( "13 - Method_13" );
		IO_println ( "14 - Method_14" );
		IO_println ( "15 - Method_15" ); 		
		IO_println ( "16 - Method_16" );
		IO_println ( "17 - Method_17" );
		IO_println ( "18 - Method_18" );
		IO_println ( "19 - Method_19" );
		IO_println ( "20 - Method_20" );
		IO_println ( "" );
		x = IO_readint ( "Entrar com uma opcao: " );
		// testar valor
		switch ( x )
		{
			case 0: method_00 ( ); break;
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
		default:
			IO_pause ( IO_concat ( "Valor diferente das opcoes (",
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




/* Method_11
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 11

Method 11 - v0.0

Autor: Lucas Carneiro Nassau Malta


Entrar com um valor real para iniciar um intervalo fechado: 13.6

Entrar com outro valor real para terminar um intervalo fechado: 22.6

Entrar com uma quantidade: 10
1: 5.1
2: 10.5
3: 12.4
4: 14.2
5: 15.3
6: 18.3
7: 20.4
8: 21.7
9: 23.1
10: 24.2

Quantidade de valores dentro do intervalo = 5
Quantidade de valores fora do intervalo = 5

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_12
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 12

Method 12 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma sequencia de caracteres: AaKkLmM0*Nx

Quantidade de letras maiusculas maiores que 'L': 2


Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_13
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 13

Method 13 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: AaKkLmM0*Nx

Letras maiusculas maiores que 'L': 2


Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_14
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 14

Method 14 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: AaKkLmM0*Nx

Letras maiusculas maiores que 'L': M N

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_15
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 15

Method 15 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: AaKkLmM0*Nx

Letras maiusculas menores que 'L' ou 'l: 4


Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_16
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 16

Method 16 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: AaKkLmM0*Nx

Letras maiusculas menores que 'L' ou 'l': A a K k

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_17
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 17

Method 17 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: A1b2C3d4E5f6

Quantidade de digitos pares: 3

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_18
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 18

Method 18 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: (A1b2+C3d4)*E5f6

Simbolos nao alfanumericos: ( + ) *

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_19
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 19

Method 19 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma cadeia de caracteres: (A1b2+C3d4)*E5f6

Simbolos alfanumericos: A 1 b 2 C 3 d 4 E 5 f 6

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/



/* Method_20
EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 20

Method 20 - v0.0

Autor: Lucas Carneiro Nassau Malta

Entrar com uma quantidade 'n' de cadeias de caracteres a serem lidas: 3


Entrar com uma cadeia de caracteres: (A1b2+C3d4)*E5f6

Caracteres alfanumericos locais: A 1 b 2 C 3 d 4 E 5 f 6
Quantidade local de caracteres alfanumericos: 12

Entrar com uma cadeia de caracteres: [P&&Q]||[R&&!S]

Caracteres alfanumericos locais: P Q R S
Quantidade local de caracteres alfanumericos: 4

Entrar com uma cadeia de caracteres: (a<b&&b<c)

Caracteres alfanumericos locais: a b b c
Quantidade local de caracteres alfanumericos: 4

Quantidade total de caracteres alfanumericos: 20

Apertar ENTER para continuar

EXEMPLO0400 - Programa - v0.0
Opcoes
0 - parar
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

Entrar com uma opcao: 0

Apertar ENTER para terminar
*/
