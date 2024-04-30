// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias


void readNegativeDoubleMatrix ( int rows, int columns, double matrix [][columns] )
{
//  definir dados locais
	int x = 0;
	int y = 0;
	double number = 0;
//  passar pelas linhas
	for ( x = 0; x < rows; x = x + 1 )
	{
	//  passar pelas colunas
		for ( y = 0; y < columns; y = y + 1 )
		{
		//  testar condicao
			do 
			{					
			//  ler do teclado
				IO_printf ( "\n%d, %d: ", x, y );
				number = IO_readdouble ( "" );
			//  mostrar mensagem de erro
				if ( number >= 0 )
				{
					IO_printf ( "\n%s\n", "ERRO: Valor invalido" );
				}
			}
			while ( number >= 0 );
		//  adicionar 'a matriz
			matrix [x][y] = number;
		} // end for ( )
	} // end for ( )
} // end readNegativeDoubleMatrix ( )

void printDoubleMatriz ( int rows, int columns, double matrix [][columns] )
{
//  definir dado local
	int x = 0;
	int y = 0;
//  passar pelas linhas
	for ( x = 0; x < rows; x = x + 1 )
	{
	//  passar pelas colunas
		for ( y = 0; y < columns; y = y + 1 )
		{
		// mostrar valor
			IO_printf ( "%.2lf\t", matrix [ x ][ y ] );
		} // end for
		IO_printf ( "\n" );
	} // end for
} // end printDoubleMatriz ( )

void fprintDoubleMatrix ( chars fileName, int rows, int columns, double matrix[ ][columns] )
{
//  definir dados locais
	FILE* arquivo = fopen ( fileName, "wt" );
	int x = 0;
	int y = 0;
//  gravar quantidade de dados
	IO_fprintf ( arquivo, "%d\n", rows );
	IO_fprintf ( arquivo, "%d\n", columns );
//  passar pelas linhas
	for ( x = 0; x < rows; x = x + 1 )
	{
	//  passar pelas colunas
		for ( y = 0; y < columns; y = y + 1 )
		{
		// gravar valor
			IO_fprintf ( arquivo, "%.2lf\n", matrix [ x ][ y ] );
		} // end for
	} // end for
// fechar arquivo
	fclose ( arquivo );
} // end fprintDoubleMatrix ( )




// Method_00

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_11

void method_11 ( void )
{
//  definir dados
	int rows = 0;
	int columns = 0;
//  identificar
	IO_id ( "Method 11 - v0.0" );
//  ler do teclado
	IO_printf ( "\n%s\n", "Ler uma matriz real negativa do teclado" );
	rows = IO_readint ( "\nRows: " );
	columns = IO_readint ( "\nColumns: " );
//  testar se rows e columns sao validos
	if ( rows <= 0 || columns <= 0 )
	{
		IO_printf ( "\n%s", "ERRO: Dados invalidos." );
	}
	else
	{
	//  definir matriz real
		double negativeMatrix [rows][columns];
	//  ler valores reais negativos do teclado
		readNegativeDoubleMatrix ( rows, columns, negativeMatrix );
	//  mostrar matriz
		IO_printf ( "\n" );
		printDoubleMatriz ( rows, columns, negativeMatrix );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
//  definir dados
	int rows = 0;
	int columns = 0;
//  identificar
	IO_id ( "Method 12 - v0.0" );
//  ler do teclado
	IO_printf ( "\n%s\n", "Ler uma matriz real negativa do teclado" );
	rows = IO_readint ( "\nRows: " );
	columns = IO_readint ( "\nColumns: " );
//  testar se rows e columns sao validos
	if ( rows <= 0 || columns <= 0 )
	{
		IO_printf ( "\n%s", "ERRO: Dados invalidos." );
	}
	else
	{
	//  definir matriz real
		double negativeMatrix [rows][columns];
	//  ler valores reais negativos do teclado
		readNegativeDoubleMatrix ( rows, columns, negativeMatrix );
	//  gravar matriz em um arquivo
		fprintDoubleMatrix ( "MATRIX_01.TXT", rows, columns, negativeMatrix );
	//  mostrar matriz
		IO_printf ( "\n" );
		printDoubleMatriz ( rows, columns, negativeMatrix );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
// identificar
	IO_id ( "Method 13 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
// identificar
	IO_id ( "Method 14 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
// identificar
	IO_id ( "Method 15 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
//  identificar
	IO_id ( "Method 16 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
// identificar
	IO_id ( "Method 17 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
// identificar
	IO_id ( "Method 18 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
// identificar
	IO_id ( "Method 19 - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
// identificar
	IO_id ( "Method 20 - v0.0" );
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
