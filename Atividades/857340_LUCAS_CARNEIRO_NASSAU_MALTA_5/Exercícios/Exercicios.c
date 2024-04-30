// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias

// mostrar - Metodo para mostrar o valor correspondente

void mostrar_d ( int x, int y );

// somar_d - Funcao para adicionar um valor inteiro a uma soma final

int somar_d ( int soma, int valor );

// multiplo_de_6 - Funcao para retornar certo multiplo de 6

int multiplo_de_6 ( int x );

// multiplo_de_3_e_5 - Funcao para retornar certo multiplo de 3 e 5

int multiplo_de_3_e_5 ( int x );

// potencia_de_4 - Funcao para retornar certa potencia de 4

int potencia_de_4 ( int x );

// mostrar_fracao_d - Metodo para mostrar a fracao correspondente inteira

void mostrar_fracao_d ( int x, int y, int z );

// pares - Funcao para retornar certo numero par

int pares ( int x );

// potencia_com_expoente_par - Funcao para retornar a potencia de um valor (x) com um expoente par correspondente

double potencia_com_expoente_par ( double real, int x );

// mostrar_fracao_lf - Metodo para mostrar a fracao correspondente real

void mostrar_fracao_lf ( int x, double y, double z );

// multiplo_de_3 - Funcao para retornar certo multiplo de 3

int multiplo_de_3 ( int x );

// multiplo_de_3_e_nao_5 - Funcao para retornar o multiplo de 3 e nao multiplo de 5 correspondente

int multiplo_de_3_e_nao_5 ( int x );

// multiplo_de_6_e_nao_5 - Funcao para retornar o multiplo de 3 e nao multiplo de 5 correspondente

int multiplo_de_6_e_nao_5 ( int x );

// somar_lf - Funcao para adicionar um valor real a uma soma final

double somar_lf ( double soma, double valor );

// subtrair_d - Funcao para diminuir um valor inteiro de outro

int subtrair_d ( int x, int y );

// Method_00

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_11

void method_11 ( void )
{
// definir dados
	int quantidade = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 11 - v0.0" );
// ler do teclado	
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de multiplos de 6 a serem mostrados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes a funcao e mostrar os multiplos
	for( controle = 1; controle <= quantidade; controle = controle + 1)
	{
	// definir dados locais
		int multiplo = multiplo_de_6 ( controle );
	// mostrar multiplo
		mostrar_d ( controle, multiplo );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
// definir dados
	int quantidade = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 12 - v0.0" );
// ler do teclado	
	do 
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de multiplos de 3 e 5 a serem mostrados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes a funcao e mostrar os multiplos
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	// definir dados locais
		int multiplo = multiplo_de_3_e_5 ( controle );
	// mostrar multiplo
		mostrar_d ( controle, multiplo );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
// definir dados
	int quantidade = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 13 - v0.0" );
// ler do teclado	
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de potencias de 4 a serem mostradas em ordem decrescente: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes a funcao e mostrar as potencias
	for ( controle = quantidade; controle > 0; controle = controle - 1 )
	{
	// definir dados locais
		int potencia = potencia_de_4 ( controle );
	// mostrar potencia
		mostrar_d ( controle, potencia );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
// definir dados
	int quantidade = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 14 - v0.0" );
// ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de valores crescentes nos denominadores multiplos de 6 a serem mostrados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes a funcao e mostrar os multiplos
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	// definir dados locais
		int multiplo = multiplo_de_6 ( controle );
	// mostrar multiplo
		mostrar_fracao_d ( controle, 1, multiplo );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
// definir dados
	double real = 0.0;
	int quantidade = 0;
	int controle = 0;
	double numerador = 1.0;
	double denominador = 0.0;
// identificar
	IO_id ( "Method 15 - v0.0" );
// ler do teclado
	real = IO_readdouble ( "\nEntrar com um valor real: " );
	do
	{
		quantidade = IO_readint ( "\nEntrar com uma quantidade de valores pares crescentes nos denominadores a serem mostrados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes a funcao e mostrar os valores
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  chamar funcao para transformar o denominador
		denominador = potencia_com_expoente_par ( real, controle );
	//  mostrar fracao
		mostrar_fracao_lf ( controle, numerador, denominador );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
//  definir dados
	int quantidade = 0;
	int soma = 0;
	int controle = 0;
	int controle_auxiliar = 1;
//  identificar
	IO_id ( "Method 16 - v0.0" );
//  ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de multiplos de 3 e nao multiplos de 5 a serem somados: " );
	}
	while ( quantidade <= 0 );
//  repetir (n) vezes
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  definir dados locais
		int multiplo = 0;
	//  chamar funcao para calcular o multiplo de 3 e nao multiplo de 5 correspondente
		multiplo = multiplo_de_3_e_nao_5 ( controle );
	//  testar se o multiplo esta' correto
		if ( multiplo == 0 )
		{
		//  aumentar a repeticao
			quantidade = quantidade + 1;
		}
		else
		{
		//  chamar metodo para mostrar esse valor na tela
			mostrar_d ( controle_auxiliar, multiplo );
		//  adicionar o valor 'a soma total
			soma = somar_d ( soma, multiplo );
		//  variar controle auxiliar
			controle_auxiliar = controle_auxiliar + 1;
		}	
	}		
// mostrar a soma final
	IO_printf ( "\n\n%s%d", "Soma final: ", soma );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
// definir dados
	int controle = 0;
	int controle_auxiliar = 1;
	int quantidade = 0;
	double soma = 0.0;
// identificar
	IO_id ( "Method 17 - v0.0" );
// ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de multiplos de 6 e nao multiplos de 5 invertidos a serem somados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  definir dados locais
		int multiplo = 0;
		double multiplo_invertido = 0;
	//  transformar o multiplo para o multiplo de 6 e nao multiplo de 5 correspondente
		multiplo = multiplo_de_6_e_nao_5 ( controle );
	//  testar se o multiplo esta' correto
		if ( multiplo % 5 == 0 ) // multiplo de 5
		{
		//  aumentar a repeticao
			quantidade = quantidade + 1;
		}
		else // nao multiplo de 5
		{
		//  transformar o multiplo no seu inverso
			multiplo_invertido = 1.0 / multiplo;
		//  chamar metodo para mostrar esse valor na tela
			mostrar_fracao_d ( controle_auxiliar, 1.0, multiplo );
		//  adicionar o valor 'a soma total
			soma = somar_lf ( soma, multiplo_invertido );
		//  variar controle auxiliar
			controle_auxiliar = controle_auxiliar + 1;
		}
	}
// mostrar a soma final
	IO_printf ( "\n\n%s%.4lf", "Soma final: ", soma );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
// definir dados
	int valor_inicial = 6;
	int quantidade = 0;
	int soma = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 18 - v0.0" );
// ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de numeros naturais, comecando no valor 6, a serem somados: " );
	}
	while ( quantidade <= 0 );
// repetir (n) vezes
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  mostrar o numero na tela
		mostrar_d ( controle, valor_inicial );
	//  adicionar 'a soma final
		soma = somar_d ( soma, valor_inicial );
	//  adicionar ao numero sua soma correspondente ao controle
		valor_inicial = somar_d ( valor_inicial, controle );
	}
// mostrar a soma final
	IO_printf ( "\n\n%s%d", "Soma final: ", soma );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
// definir dados
	int valor_inicial = 6;
	int quantidade = 0;
	int soma = 0;
	int controle = 0;
// identificar
	IO_id ( "Method 19 - v0.0" );
// ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade de numeros naturais, comecando no valor 6, a serem somados como seu quadrado: " );
	}
	while ( quantidade <= 0 );
//  repetir (n vezes)
	for( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  definir dados locais
		int quadrado = pow ( valor_inicial, 2 );
	//  mostrar valor
		mostrar_d ( controle, quadrado );
	//  adicionar 'a soma final
		soma = somar_d ( soma, quadrado );
	//  variar o valor inicial de 1 em 1
		valor_inicial = valor_inicial + 1;
	}
// mostrar a soma final
	IO_printf ( "\n\n%s%d", "Soma final: ", soma );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
//  definir dados
	int quantidade = 0;
	double soma = 0;
	int valor = 6;
	int controle = 0;
// identificar
	IO_id ( "Method 20 - v0.0" );
//  ler do teclado
	do
	{
		quantidade = IO_readint ( "Entrar com uma quantidade: " );
	}
	while ( quantidade <= 0 );
//  repetir para "subir"
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  adicionar, ao valor inicial, a variacao correspondente
		valor = somar_d ( valor, controle );
	}	
//  repetir para "descer"
	for ( controle = quantidade; controle > 0; controle = controle - 1 )
	{
	// diminuir, do valor inicial, a variacao correspondente
		valor = subtrair_d ( valor, controle );
	// definir dados locais
		double fracao = 1.0 / valor;
	// mostrar o valor na tela
		mostrar_fracao_d ( controle, 1, valor );
	// adicionar valor 'a soma final
		soma = somar_lf ( soma, fracao );
	}	
// mostrar a soma final
	IO_printf ( "\n\n%s%.4lf", "Soma final: ", soma );
//  encerrar
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
		IO_println ( "Exercicio500 - Programa - v0.0" );
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


void mostrar_d ( int x, int y )
{
//  mostrar na tela 
	IO_printf ( "\n[%d]: %d", x, y );
} // end mostrar ( )

int multiplo_de_6 ( int x )
{
//  definir dados locais
	int multiplo = 0;
//  transormar no multiplo de 6 correspondente	
	multiplo = x * 6;
//  retornar
	return ( multiplo );
} // end multiplo_de_6 ( )

int multiplo_de_3_e_5 ( int x )
{
//  definir dados locais
	int multiplo = 0;
//  transformar no multiplo correspondente
	multiplo = x * 15;
//  retornar
	return ( multiplo );
} // end multiplo_de_3_e_5 ( )

int potencia_de_4 ( int x )
{
//  definir dados locais
	int potencia = 0;
//  transformar na potencia correspondente
	potencia = pow ( 4, x );
//  retornar
	return ( potencia );
} // end potencia_de_4 ( )

void mostrar_fracao_d ( int x, int y, int z )
{
//  mostrar na tela
	IO_printf ( "\n[%d]: %d/%d", x, y, z ); 
} // end mostrar_fracao_d ( )

int pares ( int x )
{
//  definir dados locais
	int par = 0;
//  transformar no par correspondente
	par = x * 2;
//  retornar
	return ( par );
} // end pares ( )

double potencia_com_expoente_par ( double real, int x )
{
//  definir dados locais
	int expoente_par = 0;
	double potencia = 0.0;
//  transformar dados
	expoente_par = pares ( x );
	potencia = pow ( real, expoente_par );
//  retornar
	return ( potencia );
} // end potencia_com_expoente_par ( )

void mostrar_fracao_lf ( int x, double y, double z )
{
//  mostrar na tela
	IO_printf ( "\n[%d]: %.4lf/%.4lf", x, y, z ); 
} // end mostrar_fracao_lf ( )

int multiplo_de_3 ( int x )
{
//  definir dados locais
	int multiplo = 0;
//  transformar no multiplo correspondente
	multiplo = x * 3;
//  retornar
	return ( multiplo );
	
} // end multiplo_de_3 ( )

int somar_d ( int x, int valor )
{
//  adicionar o valor ao x
	x = x + valor;
//  retornar
	return ( x );
} // end somar_d ( )

int multiplo_de_3_e_nao_5 ( int x )
{
//  definir dados iniciais
	int multiplo = 0;
//  transformar o multiplo em multiplo de 3
	multiplo = multiplo_de_3 ( x );
//  testar se e' multiplo de 5
	if ( multiplo % 5 == 0 )
	{
		multiplo = 0;
	}
//  retornar
	return ( multiplo );
}

int multiplo_de_6_e_nao_5 ( int x )
{
//  definir dados locais
	int multiplo = 0;
// transformar o multiplo em multiplo de 6
	multiplo = multiplo_de_6 ( x );
// testar se e' multilpo de 5
	if ( multiplo % 5 == 0 )
	{
		multiplo = 0;
	}
//  retornar
	return ( multiplo );
} // end multiplo_de_6_e_nao_5 ( )

double somar_lf ( double x, double valor )
{
//  adicionar o valor 'a soma
	x = x + valor;
//  retornar
	return ( x );
} // end somar_lf ( )

int subtrair_d ( int x, int y )
{
// subtrair y de x
	x = x - y;
// retornar
	return ( x );
}
