#include "io.h"

int f_01 ( chars cadeia );

int f_02 ( int a, int b );

void f_03 ( void );

void f_04 ( void );

int f_05 ( chars cadeia );

bool primo ( int x );

int f_06a ( int inferior, int superior );

void f_06b ( int inferior, int superior, int array[] );

void f_06c ( int quantidade, int array [] );

int f_07 ( chars cadeia );

int f_08a ( int x );

int f_08b ( int x );

int f_08c ( chars cadeia );

int f_08d ( chars cadeia );

// Method_00

void method_00 ()
{
//  nao faz nada
} // end method_00 ( 

// Method_01

void method_01 ( void )
{
//  definir dados 
	int y = 0;
// identificar
	IO_id ( "Method 01 - v0.0" );
//  chamar funcao
	y = f_01 ( "5aP4+0_8r4nK0" );
//  mostrar resultado
	IO_printf ( "\n%d", y );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_01 ( )

// Method_02

void method_02 ( void )
{
// identificar
	IO_id ( "Method 02 - v0.0" );
//  chamar e mostrar funcao
	IO_printf ( "\nf_02 (35,75) = %d\n", f_02 (35, 75) );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_02 ( )

/*
	Resultado: a) 3 ( ACERTEI )
*/

// Method_03

void method_03 ( void )
{
// identificar
	IO_id ( "Method 03 - v0.0" );
//  chamar metodo
	f_03 ();
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_03 ( )

/*
	Resultado: e) a = 3; b = 5 + 2; c = 2*x - 3; ( ACERTEI )
*/

// Method_04

void method_04 ( void )
{
// identificar
	IO_id ( "Method 04 - v0.0" );
//  chamar metodo
	f_04 ();
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_04 ( )

/*
Resultado: b) 1 1 2 5 7 ( ACERTEI )
*/

// Method_05

void method_05 ( void )
{
// identificar
	IO_id ( "Method 05 - v0.0" );
//  chamar metodo
	IO_printf ( "%d", f_05 ( "14641" ) );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_05 ( )

/*
	Resultado: e) 2 ( ACERTEI )
*/

// Method_06

void method_06 ( void )
{
//  definir dados
	int quantidade = 0;
//  identificar
	IO_id ( "Method 06 - v0.0" );
//  chamar funcao
	quantidade = f_06a ( 11, 99 );
	IO_printf ( "\n%d", quantidade );
//  definir arranjo
	quantidade = quantidade * 2;
	int array [quantidade];
//  chamar metodo
	f_06b ( 11, 99, array );
//  chamar metodo
	f_06c ( quantidade, array ); 
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_06 ( )

// Method_07

void method_07 ( void )
{
//  definir dados locais
	chars cadeia = IO_new_chars ( STR_SIZE );
	int resultado = 0;
//  identificar
	IO_id ( "Method 07 - v0.0" );
//  ler do teclado
	cadeia = IO_readstring ( "Entrar com uma cadeia: " );
//  chamar funcao
	resultado = f_07 ( cadeia );
//  testar o resultado
	switch ( resultado )
	{
		case 1:
			IO_printf ( "\n%s", "A cadeia e' uma cadeia de RNA" );
			break;
		case 2:
			IO_printf ( "\n%s", "A cadeia e' uma cadeia de DNA" );
			break;
		default:
			IO_printf ( "\n%s", "A cadeia nao e' nem uma cadeia de DNA nem uma de RNA" );
			break;
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_07 ( )


// Method_08

void method_08 ( void )
{
//  definir dados
	int soma = 0;
	int soma_dos_cubos = 0;
	chars cadeia = IO_new_chars ( STR_SIZE ); 
// identificar
	IO_id ( "Method 08 - v0.0" );
//  ler do teclado
	cadeia = IO_readstring ( "Entrar com uma cadeia: " );
//  chamar funcao	
	soma = f_08c ( cadeia );
	soma = f_08a ( soma );
	soma_dos_cubos = f_08d ( cadeia );
//  testar igualdade
	if ( soma == soma_dos_cubos )
	{
		IO_printf ( "\nA soma de todos os algarismos elevada ao quadrado (%d) E' igual 'a soma dos cubos de cada um de seus algarismos (%d).", soma, soma_dos_cubos);
	}
	else
	{
		IO_printf ( "\nA soma de todos os algarismos elevada ao quadrado (%d) NAO e' igual 'a soma dos cubos de cada um de seus algarismos (%d).", soma, soma_dos_cubos);
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_08 ( )

int main ()
{
//  definir dado
	int x = 0;
//  repetir ate desejar parar
	do
	{
	// identificar
		IO_println ( "Refacao da Prova 1 - Programa - v0.0" );
	// ler do teclado
		IO_println ( "Opcoes" );
		IO_println ( "0 - parar" );
		IO_println ( "1 - Method_1" );
		IO_println ( "2 - Method_2" );
		IO_println ( "3 - Method_3" );
		IO_println ( "4 - Method_4" );
		IO_println ( "5 - Method_5" ); 		
		IO_println ( "6 - Method_6" );
		IO_println ( "7 - Method_7" );
		IO_println ( "8 - Method_8" );
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
		default:
			IO_pause ( IO_concat ( "Valor diferente das opcoes (",
				IO_concat ( IO_toString_d ( x ), ")" ) ) );
		} // end switch
	}
	while ( x != 0 );
}

int f_01 ( chars cadeia )
{
//  definir dados locais
	int x = 0;
	int y = 0;
	bool r = false;
	bool s = false;
	bool t = false;
	bool u = false;
	bool v = false;
	bool w = false;
//  repetir
	for ( x = 0; x < strlen ( cadeia ); x = x + 1 )
	{
		//  condicoes iniciais
		r = ( 'a' <= cadeia [x] && cadeia [x] <= 'z' ); // letra minuscula
		s = ( 'A' <= cadeia [x] && cadeia [x] <= 'Z' ); // letra maiuscula
		t = ( '0' <= cadeia [x] && cadeia [x] <= '9' ); // numero
		//  condicoes complexas	
		u = ( r || s ) && !w; // letra ou !w ( anterior = numero )
		v = !u && t; // numero
		w = !v; // false, se numero. true, se nao numero
		//  teste
		if ( u ) // letra ou !w ( anterior = numero )
		{
			y = y + 1;
		}
		else
		{
			if ( v ) // numero
			{
				y = y - 1;
			}
		}
	}
//  retornar
	return ( y );
} // end f_01 ( )

int f_02 ( int a, int b )
{
	if ( a%2 == 0 && b%2 == 0 )
	{
		return ( f_02 ( a/2, b/2 ) );
	}
	if ( a % 2 != 0 && b%2 == 0 )
	{
		return ( f_02 ( b%a, b/2 ) );
	}
	if ( a%2 == 0 && b%2 != 0 )
	{
		return ( f_02 ( a/2, a%b ) );
	}
	return ( (b-1)%(a-1) / 2 );
} // end f_02 ( )

void f_03 ( void )
{
//  definir dados locais
	int x = 0, a = 0, b = 0;
//  repeticao 1
	IO_printf ( "\n%s\n", "Repeticao 1: " );
	for ( x = 1; x <= 5; x = x + 1 )
	{
		printf ( "\nx = %d", 2*x+1 );
	}
//  repeticao 2
	IO_printf ( "\n" );
	IO_printf ( "\n%s\n", "Repeticao 2: " );
	a = 3;
	b = 5 + 2;
//  c = 2*x - 3;
	for ( x = a; x <= b; x = x + 1 )
	{
		printf ( "\nx = %d", 2*x-3 );
	}
} // end f_03 ( )

void f_04 ( void )
{
//  definir dados locais
	int x = 1;
	int y = 1;
	int v = 0;
	int w = 0;
	int m = 2;
	int n = 0;
//  testes
	printf ( "\nn = " );
	scanf ( "%d", &n ); getchar();
	printf ( "%d %d ", x, y );
	while ( m < n )
	{
		v = x + y;
		m = m + 1;
		printf ( "%d ", v );
		if ( m < n - 1 )
		{
			w = x + y + v + 1;
			m = m + 1;
			printf ( "%d ", w );
		}
		x = v;
		y = w;
	}
} // end f_04 ( )

int f_05 ( chars cadeia )
{
//  definir dados locais
	int x = 0;
	int y = strlen (cadeia) - 1;
//  repeticao
	while ( x <= y && cadeia[x] == cadeia[y] )
	{
		x = x + 1;
		y = y - 1;
	}
//  retornar
	return ( x-y + cadeia[x]-cadeia[y] );
} // end f_05 ( )

bool primo ( int x )
{
//  definir dados locais
	bool result = true;
	int controle = 0;
//  testar se e' maior que 1
	if ( x <= 1 )
	{
		result = false;
	}
	else
	{
		//  testar se e' igual a 2
		if ( x == 2 )
		{
			result = true;
		}
		else
		{
			//  testar se e' divisivel por outro numero
			controle = x - 1;
			while ( controle > 1 && result )
			{
				if ( x % controle == 0  )
				{
					result = false;
				}
				//  variacao
				controle = controle - 1;
			}
		}
	}
//  retornar
	return ( result );
} // end primo ( )

int f_06a ( int inferior, int superior )
{
//  definir dados locais
	int quantidade = 0;
	int controle = 0;
//  testar todos os numeros
	for ( controle = inferior; controle <= superior; controle = controle + 1 )
	{
		//  testar se o primeiro e' primo
		if ( primo (controle) )
		{
			//  definir dados locais
			int primeiro_x = 0;
			int segundo_x = 0;
			int primeiro_y = 0;
			int segundo_y = 0;
			int segundo_completo = 0;
			//  transformar dados
			primeiro_x = controle / 10;
			segundo_x = controle % 10; 
			primeiro_y = segundo_x;
			segundo_y = primeiro_x;
			//  formar o numero espelhado
			segundo_completo = primeiro_y * 10 + segundo_y;
			//  testar se o segundo e' primo
			if ( primo (segundo_completo) && controle < segundo_completo )
			{
				quantidade = quantidade + 1;
			}
		}
	}
//  retornar
	return ( quantidade );
} // end f_06a ( )

void f_06b ( int inferior, int superior, int array[] )
{
//  definir dados locais
	int controle = 0;
	int posicao = 0;
//  testar todos os numeros
	for ( controle = inferior; controle <= superior; controle = controle + 1 )
	{
		//  testar se o primeiro e' primo
		if ( primo (controle) )
		{
			//  definir dados locais
			int primeiro_x = 0;
			int segundo_x = 0;
			int primeiro_y = 0;
			int segundo_y = 0;
			int segundo_completo = 0;
			//  transformar dados
			primeiro_x = controle / 10;
			segundo_x = controle % 10; 
			primeiro_y = segundo_x;
			segundo_y = primeiro_x;
			//  formar o numero espelhado
			segundo_completo = primeiro_y * 10 + segundo_y;
			//  testar se o segundo e' primo
			if ( primo (segundo_completo) && controle < segundo_completo )
			{
				array[posicao] = controle;
				posicao = posicao + 1;
				array[posicao] = segundo_completo;
				posicao = posicao + 1;
			}
		}
	}
} // end f_06b ( )

void f_06c ( int quantidade, int array [] )
{
//  definir dados locais
	int controle = 0;
//  repetir para a quantidade de dados
	for ( controle = 0; controle < quantidade; controle = controle + 1 )
	{
		//  mostrar na tela
		IO_printf ( "\n%d", array[controle] );
	}
} // end f_06c ( )

int f_07 ( chars cadeia )
{
//  definir dados locais
	int resultado = 0;
	int controle = 0;
	int tamanho = strlen ( cadeia );
	int t = 0;
	int u = 0;
	char caractere_local;
//  repetir para cada caractere
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  definir caractere local
		caractere_local = cadeia [controle];
		//  testar se e' 't'
		if ( caractere_local == 'T' )
		{
			t = t + 1;
		}
		//  testar se e' 'u'
		if ( caractere_local == 'U' )
		{
			u = u + 1;
		}
	}
//  testar se e' RNA
	if ( t == 0 && u != 0 )
	{
		resultado = 1;
	}
	else
	{
		//  testar se e' DNA
		if ( t != 0 && u == 0 )
		{
			resultado = 2;
		}
		else
		{
			resultado = -1;
		}
	}
//  retornar
	return ( resultado );
} // end f_07 ( )

int f_08a ( int x )
{
//  definir dados locais
	int controle = 0;
	int quadrado = 0;
//  testar se e' negativo
	if ( x < 0 )
	{
		//  converter para positivo
		x = -x;
	}
//  testar se e' positivo
	if ( x >= 0 )
	{
		//  fazer a soma
		for ( controle = 0; controle < x; controle = controle + 1 )
		{
			quadrado = quadrado + x;
		}
	}
//  retornar
	return ( quadrado );
} // end f_08a ( )

int f_08b ( int x )
{
//  definir dados locais
	int controle = 0;
	int controle2 = 0;
	int cubo = 0;
//  testar se e' positivo 
	if ( x >= 0 )
	{
		//  fazer a soma
		for ( controle = 0; controle < x; controle = controle + 1 )
		{
			for ( controle2 = 0; controle2 < x; controle2 = controle2 + 1 )
			{
				cubo = cubo + x;
			}
		}	
	}
	else
	{
		//  tornar o numero postivo
		x = -x;
		//  calcular o cubo como se fosse positivo
		cubo = f_08b ( x );
		//  tornar o cubo encontrado negativo novamente
		cubo = -cubo;
	}
//  retornar
	return ( cubo );
} // end f_08b ( )

int f_08c ( chars cadeia )
{
//  definir dados locais
	int soma = 0;
	int controle = 0;
	int tamanho = strlen ( cadeia );
	char caractere_local;
	bool isNumero = true;
//  repetir para cada caractere
	while ( controle < tamanho && isNumero )
	{
		//  definir caractere local
		caractere_local = cadeia [controle] - 48;
		//  testar se e' numero
		if ( 0 <= caractere_local && caractere_local <= 9 )
		{
			//  adicionar 'a soma final
			soma = soma + caractere_local;
		}
		else
		{
			isNumero = false;
			soma = 0;
		}
		//  variacao
		controle = controle + 1;
	}
//  retornar
	return ( soma );
} // end f_08c ( )

int f_08d ( chars cadeia )
{
//  definir dados locais
	int soma = 0;
	int controle = 0;
	int tamanho = strlen ( cadeia );
	char caractere_local;
	bool isNumero = true;
//  repetir para cada caractere
	while ( controle < tamanho && isNumero )
	{
		//  definir caractere local
		caractere_local = cadeia [controle] - 48;
		//  testar se e' numero
		if ( 0 <= caractere_local && caractere_local <= 9 )
		{
			//  adicionar 'a soma final
			soma = soma + f_08b ( caractere_local );
		}
		else
		{
			isNumero = false;
			soma = 0;
		}
		//  variacao
		controle = controle + 1;
	}
//  retornar
	return ( soma );	
} // end f_08d ( )
