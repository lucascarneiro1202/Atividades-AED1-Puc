// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias

/**
  Definicao de tipo arranjo com inteiros
  baseado em estrutura
 */
typedef struct s_int_Array
{
	int length;
	ints data ;
	int ix ;
}
int_Array;

/*
	Definicao de referencia para arranjo com inteiros
	baseado em estrutura
 */
typedef int_Array* ref_int_Array;

/**
	Definicao de tipo arranjo bidimensional com inteiros baseado em estrutura
 */
typedef struct s_int_Matrix
{
	int rows ;
	int columns;
	ints* data ;
	int ix;
	int iy ;
}
int_Matrix;

/**
  Definicao de referencia para arranjo bidimensional com inteiros baseado em estrutura
 */
typedef int_Matrix* ref_int_Matrix;

/*
	new_int_Array - Reservar espaco para arranjo com inteiros
	@return referencia para arranjo com inteiros
	@param n - quantidade de datos
*/

ref_int_Array new_int_Array ( int n );

/*
	free_int_Array - Dispensar espaco para arranjo com inteiros
	@param tmpArray - referencia para grupo de valores inteiros
*/

void free_int_Array ( ref_int_Array tmpArray );

/*
	printIntArray - Mostrar arranjo com valores inteiros.
	@param array - grupo de valores inteiros
 */

void printIntArray ( ref_int_Array array );

/*
	randomIntGenerate - Funcao para gerar valores aleatorios dentro de um intervalo
	@return number - Numero aleatorio gerado
	@param inferior - Limite inferior do intervalo
	@param superior - Limite superior do intervalo
*/

int randomIntGenerate ( int inferior, int superior );

/**
	fprintIntArray - Metodo para gravar arranjo com valores inteiros.
	@param fileName - Nome do arquivo a ser gravado
	@param array - Arranjo com os inteiros a serem gravados
 */

void fprintIntArray ( chars fileName, ref_int_Array array );

/*
	freadIntArray - Ler arranjo de arquivo
	@param fileName - Nome do arquivo
	@param array - Arranjo lido
*/

int_Array freadIntArray ( chars fileName );

/*
	searchIntArray - Funcao para testar se existe determinado valor em um arranjo
	@return result - True, se existir. False, se nao existir
	@param valor - Valor a ser procurado
	@param array - Arranjo a ser testado
*/

bool searchIntArray ( int valor, ref_int_Array array );

/*
	arrayCompare - Funcao para testar se dois arrays sao iguais
	@return resposta - True, se forem iguais. False, se nao forem
	@param array1 - Array a ser comparado
	@parram array2 - Array a ser comparado
*/

bool arrayCompare ( ref_int_Array array1, ref_int_Array array2 );

/*
	arrayAdd - Funcao para gerar um arranjo resultante da soma de 2 matrizes, com uma delas multiplicada por uma constante (k)
	@return somarArray - Ponteiro para arranjo da soma resultante
	@param array1 - Array a ser somado
	@param k - Constante para multiplicar o array2
	@param array2 - Array a ser somado após ser multiplicado pela constante (k)
*/

ref_int_Array arrayAdd ( ref_int_Array array1, int k, ref_int_Array array2 );

/*
	isIntArrayDecrescent - Funcao para determinar se um arranjo e' decrescente
	@return resposta - True, se for decrescemte. False, se nao for
	@param array - Array a ser testado
*/

bool isIntArrayDecrescent ( ref_int_Array array );

/*
	new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
	@return referencia para arranjo com inteiros
	@param rows - quantidade de dados
	@param columns - quantidade de dados
 */

ref_int_Matrix new_int_Matrix ( int rows, int columns );

/*
	free_int_Matrix - Dispensar espaco para arranjo com inteiros
	@param tmpMatrix - referencia para grupo de valores inteiros
*/

void free_int_Matrix ( ref_int_Matrix matrix );

/*
	printIntMatrix - Mostrar matrix com valores inteiros.
	@param matrix - grupo de valores inteiros
*/

void printIntMatrix ( ref_int_Matrix matrix );

/*
	freadintMatrix - Ler arranjo bidimensional com valores inteiros.
	@return referencia para o grupo de valores inteiros
	@param fileName - nome do arquivo
 */

ref_int_Matrix freadintMatrix ( chars fileName );

/*
	matrixTranspose - Funcao para calcular a matrix transposta
	@return a - Referencia para matrix transposta resultante
	@param matrix - Referencia para matrix a ser transposta
*/

ref_int_Matrix matrixTranspose ( ref_int_Matrix matrix );

/*
	isMatrixZero - Funcao para determinar se todos os valores da matriz sao iguais a zero
	@return resposta - True, se todos forem iguais a 0. False, se nao forem
	@param a - Referencia para matriz a ser testada
*/

bool isMatrixZero ( ref_int_Matrix a );

/*
	matrixCompare - Funcao para determinar se duas matrizes sao iguais
	@return resposta - True, se as matrizes forem iguais. False, se nao forem
	@param m1 - Matriz a ser comparada
	@param m2 - Matriz a ser comparada
*/

bool matrixCompare ( ref_int_Matrix m1, ref_int_Matrix m2 );

/*
	matrixAdd - Funcao para calcular a matriz resultante da soma de duas matrizes
	@return a - Referencia para matriz resultante da soma
	@param m1 - Matriz a ser somada
	@param k - Constante a multiplicar a segunda matriz
	@param m2 - Matriz a ser somada após ser multiplicada pela constante
*/

ref_int_Matrix matrixAdd ( ref_int_Matrix m1, int k, ref_int_Matrix m2 );

/*
	matrixProduct - Funcao para calcular a matriz resultante da multiplicacao de duas matrizes
	@return a - Referencia para matriz resultante do produto
	@param m1 - Matriz a ser multiplicada
	@param m2 - Matriz a ser multiplicada
*/

ref_int_Matrix matrixProduct ( ref_int_Matrix m1, ref_int_Matrix m2 );

// Method_00

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_11

void method_11 ( void )
{
//  definir dados locais
	ref_int_Array array;
	int quantidade = 0;
	int inferior = 0;
	int superior = 0;
//  identificar
	IO_id ( "Method 11 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "\nEntrar com uma quantidade: " );
//  testar se quantidade e' valida
	if ( quantidade <= 0 )
	{
		IO_printf ( "\nERRO: Quantidade invalida" );
	}
	else
	{
	//  ler do teclado
		inferior = IO_readint ( "\nEntrar com o limite inferior: " );
		superior = IO_readint ( "\nEntrar com o limite superior: " );
	//  testar se limites sao validos
		if ( inferior >= superior )
		{	IO_printf ( "\nERRO: Quantidade ou limites invalidos" );	} 
		else
		{
		//  definir estrutura do array
			array = new_int_Array ( quantidade );
			array->length = quantidade;
			array->data = (ints) malloc ( array->length * sizeof(int) );
		//  testar se ha' espaco
			if ( array->data )
			{
			//  preencher cada espaço
				for ( array->ix = 0; array->ix < array->length; array->ix += 1  )
				{
					array->data [array->ix] = randomIntGenerate( inferior, superior );
				} 
			} 
		//  pular uma linha
			IO_printf ( "\n" );
		//  mostrar array
			printIntArray ( array );
		//  gravar array em arquivo
			fprintIntArray ( "DADOS1.TXT", array );
		//  reciclar o espaco
			if ( array->data )
			{ free ( array->data ); }
		} 
	} 
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
//  definir dados locais
	int_Array array;
	bool resposta = 0;
	int valor = 0;
//  identificar
	IO_id ( "Method 12 - v0.0" );
//  ler do teclado
	valor = IO_readint ( "Entrar com um valor inteiro a ser procurado: " );
//  ler arranjo de um arquivo
	array = freadIntArray ( "DADOS.TXT");
//  testar a existencia de dados
	if ( !array.data )
	{	IO_printf ( "\nERRO: Arranjo invalido" );	}
	else
	{
	//  mostrar arranjo
		printIntArray ( &array );
	//  procurar valor
		resposta = searchIntArray ( valor, &array );
	//  mostrar resultado
		if ( resposta )
		{
			IO_printf ( "\nO valor foi encontrado." );
		} // end if
		else
		{
			IO_printf ( "\nO valor nao foi encontado." );
		}
	}
//  reciclar o espaco
	if ( array.data )
	{ free ( array.data ); }
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
//  definir dados locais
	int_Array array1;
	int_Array array2;
	bool resposta = 0;
// identificar
	IO_id ( "Method 13 - v0.0" );
//  ler arranjos de arquivo
	array1 = freadIntArray( "DADOS1.TXT" );
	array2 = freadIntArray( "DADOS2.TXT" );
//  mostrar arranjos
	IO_printf ( "\n%s\n\n", "Array 1" );
	printIntArray( &array1 );
	IO_printf ( "\n%s\n\n", "Array 2" );
	printIntArray( &array2 );
//  comparar os arranjos
	resposta = arrayCompare ( &array1, &array2 );
//  mostrar resultado
	if ( resposta )
	{
		IO_printf ( "\n%s", "Os arranjos sao iguais." );
	}
	else
	{
		IO_printf ( "\n%s", "Os arranjos sao diferentes." );
	}
//  reciclar o espaco
	if ( array1.data )
	{ free ( array1.data ); }
	if ( array2.data )
	{ free ( array2.data ); }
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
//  definir dados locais
	int_Array array1;
	int_Array array2;
	ref_int_Array somaArray;
	int k = 2;
//  identificar
	IO_id ( "Method 14 - v0.0" );
//  ler arranjos de arquivo
	array1 = freadIntArray( "DADOS.TXT" );
	array2 = freadIntArray( "DADOS1.TXT" );
//  chamar funcao para calcular a soma dos arranjos	
	somaArray = arrayAdd ( &array1, k, &array2 );
//  testar se soma e' valida
	if ( !somaArray || !somaArray->data )
	{
		IO_printf ( "\n%s", "ERRO: Nao foi possivel calcular a soma dos arranjos" );
	}
	else
	{
	//  mostrar resultado
		IO_printf ( "\n%s\n\n", "Array 1" ); 
		printIntArray( &array1 );
		IO_printf ( "\n%s\n\n", "Array 2" ); 
		printIntArray( &array2 );
		IO_printf ( "\nResultado da soma dos arranjos (* %d)\n\n", k );	
		printIntArray( somaArray );
	//  reciclar o espaco
		if ( somaArray->data )
		{ free ( somaArray->data ); }	
	}
//  reciclar o espaco
	if ( array1.data )
	{ free ( array1.data ); }
	if ( array2.data )
	{ free ( array2.data ); }
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
//  definir dados locais
	int_Array array;
	bool resposta = false;
//  identificar
	IO_id ( "Method 15 - v0.0" );
//  ler arranjo de arquivo
	array = freadIntArray ( "DADOS1.TXT" );
//  mostrar arquivo
	printIntArray ( &array );
//  chamar metodo para testar se o arranjo e' decrescente
	resposta = isIntArrayDecrescent ( &array );
//  mostrar resultado
	if ( resposta )
	{
		IO_printf ( "\n%s", "O arranjo e' decrescente" );
	}
	else
	{
		IO_printf ( "\n%s", "O arranjo nao e' decrescente" );
	}
//  reciclar o espaco
	if ( array.data )
	{ free ( array.data ); }
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
//  definir dados locais
	ref_int_Matrix matrix1 = NULL;
	ref_int_Matrix matrix2 = NULL;
//   identificar
	IO_id ( "Method 16 - v0.0" );
//  ler matrix de arquivo
	matrix1 = freadintMatrix ( "DADOS3.TXT" );
//  chamar funcao para retornar a matrix transposta
	matrix2 = matrixTranspose ( matrix1 );
//  testar se resultados sao validos
	if ( !matrix1 || !matrix1->data || !matrix2 || !matrix2->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencias para matriz invalidos" );
	}
	else
	{
	//  mostrar arranjo anterior
		IO_printf ( "\nArranjo\n\n" );
		printIntMatrix ( matrix1 );
		IO_printf ( "\nArranjo transposto\n\n" );
		printIntMatrix ( matrix2 );
	}
//  reciclar o espaco
	if ( matrix1->data )
	{ free ( matrix1->data ); }
	if ( matrix2->data )
	{ free ( matrix2->data ); }
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
//  definir dados
	ref_int_Matrix matrix = NULL;
	bool resposta = false;
//  identificar
	IO_id ( "Method 17 - v0.0" );
//  ler matriz de arquivo
	matrix = freadintMatrix( "DADOS3.TXT" );
//  testar se dados sao validos
	if ( !matrix || !matrix->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencias para matriz invalidos" );
	}
	else
	{
	//  chamar funcao para testar se todos os valores da matriz sao iguais a zero
		resposta = isMatrixZero ( matrix );
	//  mostrar resultado
		printIntMatrix ( matrix );
		if ( resposta )
		{
			IO_printf ( "\n%s", "Todos os valores da matriz sao iguais a zero" );
		}
		else
		{
			IO_printf ( "\n%s", "Nem todos os valores da matriz sao iguais a zero." );
		}
	}
//  reciclar o espaco
	if ( matrix->data )
	{ free ( matrix->data ); }
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
//  definir dados
	ref_int_Matrix matrix1 = NULL;
	ref_int_Matrix matrix2 = NULL;
	bool resposta = false;
//  identificar
	IO_id ( "Method 18 - v0.0" );
//  ler matriz de arquivo
	matrix1 = freadintMatrix( "DADOS3.TXT" );
	matrix2 = freadintMatrix( "DADOS4.TXT" );
//  testar se dados sao validos
	if ( !matrix1 || !matrix1->data || !matrix2 || !matrix2->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencias para matrizes invalidos" );
	}
	else
	{
	//  chamar funcao para testar se todos os valores da matriz sao iguais a zero
		resposta = matrixCompare ( matrix1, matrix2 );
	//  mostrar resultado
		IO_printf ( "\n%s\n\n", "Matriz 1" );
		printIntMatrix ( matrix1 );
		IO_printf ( "\n%s\n\n", "Matriz 2" );
		printIntMatrix ( matrix2 );
		if ( resposta )
		{
			IO_printf ( "\n%s", "Matrizes comparadas sao iguais." );
		}
		else
		{
			IO_printf ( "\n%s", "Matrizes comparadas nao sao iguais" );
		}
	}
//  reciclar o espaco
	if ( matrix1->data )
	{ free ( matrix1->data ); }
	if ( matrix2->data )
	{ free ( matrix2->data ); }
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
//  definir dados locais
	ref_int_Matrix matrix1;
	ref_int_Matrix matrix2;
	ref_int_Matrix somaMatrix;
	int k = -2;
// identificar
	IO_id ( "Method 19 - v0.0" );
//  ler matriz de arquivo
	matrix1 = freadintMatrix( "DADOS.TXT" );
	matrix2 = freadintMatrix( "DADOS1.TXT" );
//  chamar funcao para calcular a matrix resultante de uma soma de matrizes
	somaMatrix = matrixAdd ( matrix1, k, matrix2 );
//  testar se referencia para matriz resultante e' valida
	if ( !somaMatrix || !somaMatrix->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencia para matriz resultante invalida" );
	}
	else
	{
	//  mostrar resultado
		IO_printf ( "\n%s\n\n", "Matriz 1" ); 
		printIntMatrix( matrix1 );
		IO_printf ( "\n%s\n\n", "Matriz 2" ); 
		printIntMatrix( matrix2 );
		IO_printf ( "\nResultado da soma das matrizes (* %d)\n\n", k );	
		printIntMatrix( somaMatrix );
	//  reciclar o espaco
		if ( somaMatrix->data )
		{ free ( somaMatrix->data ); }
	}
//  reciclar o espaco
	if ( matrix1->data )
	{ free ( matrix1->data ); }
	if ( matrix2->data )
	{ free ( matrix2->data ); }
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
//  definir dados locais
	ref_int_Matrix matrix1;
	ref_int_Matrix matrix2;
	ref_int_Matrix produtoMatrix;
// identificar
	IO_id ( "Method 20 - v0.0" );
//  ler matriz de arquivo
	matrix1 = freadintMatrix( "DADOS3.TXT" );
	matrix2 = freadintMatrix( "DADOS4.TXT" );
//  testar se dados sao validos
	if ( !matrix1 || !matrix1->data || !matrix2 || !matrix2->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencias para matrizes invalidas" );
	}
	else
	{
	//  chamar funcao para calcular a matrix resultante de um produto de matrizes
		produtoMatrix = matrixProduct ( matrix1, matrix2 );
		//  testar se referencia para matriz resultante e' valida
		if ( !produtoMatrix || !produtoMatrix->data )
		{
			IO_printf ( "\n%s\n", "ERRO: Referencia para matriz resultante invalida" );
		}
		else
		{
		//  mostrar resultado
			IO_printf ( "\n%s\n\n", "Matriz 1" ); 
			printIntMatrix( matrix1 );
			IO_printf ( "\n%s\n\n", "Matriz 2" ); 
			printIntMatrix( matrix2 );
			IO_printf ( "\nResultado do produto das matrizes\n\n" );	
			printIntMatrix( produtoMatrix );
		//  reciclar o espaco
			if ( produtoMatrix->data )
			{ free ( produtoMatrix->data ); }
		}
	}
//  reciclar o espaco
	if ( matrix1->data )
	{ free ( matrix1->data ); }
	if ( matrix2->data )
	{ free ( matrix2->data ); }
// encerrar
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

ref_int_Array new_int_Array ( int n )
{
// reserva de espaco
	ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));
// estabelecer valores padroes
	if ( tmpArray == NULL )
	{
		IO_printf ( "\nERRO: Falta espaco.\n" );
	}
	else
	{
		tmpArray->length = 0;
		tmpArray->data = NULL;
		tmpArray->ix = -1;
		if ( n > 0 )
		{
			// guardar a quantidade de dados
			tmpArray->length = n;
			// reservar espaco para os dados
			tmpArray->data = (ints) malloc (n * sizeof(int));
			// definir indicador do primeiro elemento
			tmpArray->ix = 0;
		} // end if
	} // end if
// retornar referencia para espaco reservado
	return ( tmpArray );
} // end new_int_Array ( )

void free_int_Array ( ref_int_Array tmpArray )
{
// testar se ha' dados, antes de reciclar o espaco
	if ( tmpArray != NULL )
	{
		if ( tmpArray->data != NULL )
		{
			free ( tmpArray->data );
		} // end if
		free ( tmpArray );
	} // fim se
} // end free_int_Array ( )

void printIntArray ( ref_int_Array array )
{
// mostrar valores no arranjo
	if ( array->data )
	{
		for ( array->ix = 0; array->ix < array->length; array->ix += 1 )
		{
			// mostrar valor
			printf ( "%2d: %d\n", array->ix, array->data [ array->ix ] );
		} // end for
	} // end if
} // end printIntArray ( )

int randomIntGenerate ( int inferior, int superior )
{
//  definir dados locais
	int number = 0;
//  gerar aleatório de 0 a 99
	number = rand() % ( superior - inferior + 1) + inferior;
//  retornar
	return ( number );
} // end randomIntGenerate ( )

void fprintIntArray ( chars fileName, ref_int_Array array )
{
// definir dados locais
	FILE* arquivo = fopen ( fileName, "wt" );
// gravar quantidade de dados
	fprintf ( arquivo, "%d", array->length );
// gravar valores no arquivo, se existirem
	if ( array->data )
	{
		//  passar por cada posicao
		for ( array->ix = 0; array->ix < array->length; array->ix = array->ix + 1 )
		{
			// gravar valor
			fprintf ( arquivo, "\n%d", array->data [ array->ix ] );
		} // end for
	} // end if
// fechar arquivo
	fclose ( arquivo );
} // end fprintIntArray ( )

int_Array freadIntArray ( chars fileName )
{
//  definir dados locais
	FILE* arquivo = fopen ( fileName, "rt" );
	static int_Array array;
//  testar a existencia do arquivo
	if ( arquivo )
	{
		//  ler a quantidade
		fscanf ( arquivo, "%d", &array.length );
		//  testar se a quantidade e' valida
		if ( array.length <= 0 )
		{
			IO_printf ( "\nERRO: Quantidade de valores invalida\n" );
			array.length = 0;
		} 
		else
		{
			//  reservar espaco
			array.data = IO_new_ints ( array.length );
			//  testar a existencia
			if ( array.data )
			{
				//  ler e guardar valores em arranjo
				array.ix = 0; // declaracao inicial
				while ( !feof(arquivo) && array.ix < array.length ) // condicao
				{
					//  ler valor
					fscanf ( arquivo, "%d", &array.data [array.ix] );
					//  variacao
					array.ix = array.ix + 1;
				}	
			}
		}
	} 
//  retornar
	return ( array );
} // end freadIntArray ( )

bool searchIntArray ( int valor, ref_int_Array array )
{
//  definir dados locais
	bool result = false;
//  testar se dados do array sao validos
	if ( !array->data || array->length <= 0 )
	{	IO_printf ( "\nERRO: Dados ou tamanho do array invalidos" );	}
	else
	{
		//  declaracao inicial
		array->ix = 0;
		//  condicao
		while ( array->ix < array->length && valor != array->data [array->ix] )
		{
			//  variacao
			array->ix += 1;
		}
		//  testar a existencia
		result = array->ix < array->length;
	}
//  retornar 
	return ( result );
} // end searchIntArray ( )

bool arrayCompare ( ref_int_Array array1, ref_int_Array array2 )
{
//  definir dados locais
	bool resposta = true;
//  testar se referencias sao validas
	if ( !array1 || !array1->data || !array2 || !array2->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencias invalidas." );
		resposta = false;
	}
	else
	{
		//  testar se a quantidade e' igual
		if ( array1->length != array2->length )
		{
			IO_printf ( "\n%s\n", "As quantidade sao diferentes" );
			resposta = false;
		}
		else
		{
			//  valor inicial
			array1->ix = 0;
			//  condicao
			while ( array1->ix < array1->length && resposta )
			{
				//  testar
				resposta = array1->data [array1->ix] == array2->data [array1->ix];
				//  variacao
				array1->ix += 1;
			}
		} 
	}
//  retornar
	return ( resposta );
} // end arrayCompare ( )

ref_int_Array arrayAdd ( ref_int_Array array1, int k, ref_int_Array array2 )
{
//  definir dados locais
	ref_int_Array somaArray = NULL;
//  testar se referencias sao validas
	if ( !array1 || !array1->data || !array2 || !array2->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencias invalidas" );
	}
	else
		
	{
		//  testar se as quantidades de elementos sao compativeis
		if ( array1->length != array2->length )
		{
			IO_printf ( "\n%s\n", "ERRO: Tamanho dos arranjos sao diferentes" );
		}
		else
		{
			//  reservar espaco para armazenar
			somaArray = new_int_Array ( array1->length );
			//  testar se ha' espaco
			if ( somaArray != NULL && somaArray->data == NULL )
			{
				//  nao ha' espaco
				somaArray->length = 0;
				somaArray->ix = 0;
			}
			else
			{
				//  testar a existencia
				if ( somaArray != NULL )
				{
					//  somar os arranjos
					for ( array1->ix = 0; array1->ix < array1->length; array1->ix += 1 )
					{
						//  guardar valor no arranjo resultante
						somaArray->data[array1->ix] = array1->data [array1->ix] + k * array2->data [array1->ix];
					}
				}
			}
		}	
	}
//  retornar
	return ( somaArray );
} // end arrayAdd ( )

bool isIntArrayDecrescent ( ref_int_Array array )
{
//  definir dados locais
	bool resposta = true;
//  testar se referencia e' valida
	if ( !array || !array->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencia invalida" );
	}
	else
	{
		//  testar se e' decrescente
		array->ix = 1; // valor inicial
		//  condicao
		while ( array->ix < array->length && resposta )
		{
			//  testar se e' decrescente
			resposta = array->data [array->ix - 1] > array->data [array->ix];
			//  variacao
			array->ix += 1;
		}
	}
//  retornar
	return ( resposta );
} // end isIntArrayDecrescent ( )

ref_int_Matrix new_int_Matrix ( int rows, int columns )
{
// reserva de espaco
	ref_int_Matrix tmpMatrix = (ref_int_Matrix) malloc (sizeof(int_Matrix));
//  testar se apontador e' valido
	if ( tmpMatrix != NULL )
	{
		//  estabelecer valores padroes
		tmpMatrix->rows = 0;
		tmpMatrix->columns = 0;
		tmpMatrix->data = NULL;
		//  testar se linhas e colunas sao validas
		if ( rows > 0 && columns > 0 )
		{
			//  reservar espaco
			tmpMatrix->rows = rows;
			tmpMatrix->columns = columns;
			tmpMatrix->data = malloc (rows * sizeof(ints));
			//  testar se espaco foi reservado
			if ( tmpMatrix->data )
			{
				for ( tmpMatrix->ix = 0; tmpMatrix->ix < tmpMatrix->rows; tmpMatrix->ix += 1 )
				{
					tmpMatrix->data [ tmpMatrix->ix ] = (ints) malloc (columns * sizeof(int));
				} // end for
			} // end if
		} // end if
		tmpMatrix->ix = 0;
		tmpMatrix->iy = 0;
	} // end if
	return ( tmpMatrix );
} // end new_int_Matrix ( )

void free_int_Matrix ( ref_int_Matrix matrix )
{
// testar se ha' dados
	if ( matrix != NULL )
	{
		if ( matrix->data != NULL )
		{
			for ( matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1 )
			{
				free ( matrix->data [ matrix->ix ] );
			} // end for
			free ( matrix->data );
		} // end if
		free ( matrix );
	} // end if
} // end free_int_Matrix ( )

void printIntMatrix ( ref_int_Matrix matrix )
{
// testar a existencia
	if ( matrix != NULL && matrix->data != NULL )
	{
		// mostrar valores na matriz
		for ( matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix = matrix->ix + 1 )
		{
			for ( matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy = matrix->iy + 1 )
			{
				// mostrar valor
				printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ] );
			} // end for
			printf ( "\n" );
		} // end for
	} // end if
} // end printIntMatrix ( )

ref_int_Matrix freadintMatrix ( chars fileName )
{
// definir dados locais
	ref_int_Matrix matrix = NULL;
	int rows = 0;
	int columns = 0;
	FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
	fscanf ( arquivo, "%d", &rows );
	fscanf ( arquivo, "%d", &columns );
	if ( rows <= 0 || columns <= 0 )
	{
		IO_printf ( "\nERRO: Valor invalido.\n" );
	}
	else
	{
		// reservar espaco para armazenar
		matrix = new_int_Matrix ( rows, columns );
		// testar se ha' espaco
		if ( matrix != NULL && matrix->data == NULL )
		{
			// nao ha' espaco
			matrix->rows = 0;
			matrix->columns = 0;
			matrix->ix = 0;
			matrix->iy = 0;
		}
		else
		{
			// testar a existência
			if ( matrix != NULL )
			{
				// ler e guardar valores na matriz
				matrix->ix = 0;
				while ( ! feof ( arquivo ) && matrix->ix < matrix->rows )
				{
					matrix->iy = 0;
					while ( ! feof ( arquivo ) && matrix->iy < matrix->columns )
					{
						// guardar valor
						fscanf ( arquivo, "%d", &(matrix->data [ matrix->ix ][ matrix->iy ]) );
						// passar ao proximo
						matrix->iy = matrix->iy+1;
					} // end while
					// passar ao proximo
					matrix->ix = matrix->ix+1;
				} // end while
				matrix->ix = 0;
				matrix->iy = 0;
			} // end if
		} // end if
	} // end if
// retornar matriz lida
	return ( matrix );
} // end freadintMatrix ( )

ref_int_Matrix matrixTranspose ( ref_int_Matrix matrix )
{
//  definir dados locais
	ref_int_Matrix a = NULL;
//  testar se matrix e' valida
	if ( !matrix || !matrix->data )
	{
		IO_printf ( "\nERRO: Faltam dados.\n" );
	}
	else
	{
		//  testar se linhas e colunas da matrix sao validos
		if ( matrix->rows <= 0 || matrix->columns <= 0 )
		{
			IO_printf ( "\nERRO: Linhas ou colunas invalidas.\n" );
		}
		else
		{
			//  reservar espaço
			a = new_int_Matrix ( matrix->columns, matrix->rows );
			//  testar se ha' espaco
			if ( !a || !a->data )
			{
				IO_printf ( "\nERRO: Falta espaco.\n" );
			}
			else
			{
				//  transpor matrix
				//  passar pelas linhas
				for ( matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix += 1 )
				{
					//  passar pelas colunas
					for ( matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy += 1 )
					{
						//  transpor
						a->data [matrix->iy][matrix->ix] = matrix->data [matrix->ix][matrix->iy];
					}
				}
			}
		}
	}
//  retornar
	return ( a );
} // matrixTranspose ( )

bool isMatrixZero ( ref_int_Matrix a )
{
//  definir dados locais
	bool resposta = false;
//  testar se referencia e' valida
	if ( !a || !a->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencia invalida" );
	}
	else
	{
		//  definir valor de linhas inicial 1
		a->ix = 0;
		//  condicao 1
		while ( a->ix < a->rows && !resposta )
		{
			//  definir valor de colunas inicial 2
			a->iy = 0;
			//  condicao 2
			while ( a->iy < a->columns && !resposta )
			{
				//  testar
				resposta = a->data [a->ix][a->iy] == 0;
				//  variacao 2
				a->iy += 1;
			}
			//  variacao 1
			a->ix += 1;
		}
		
	}
//  retornar
	return ( resposta );
} // end isMatrixZero ( )

bool matrixCompare ( ref_int_Matrix m1, ref_int_Matrix m2 )
{
//  definir dados locais
	bool resposta = true;
//  testar se referencias sao validas
	if ( !m1 || !m1->data || !m2 || !m2->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencias invalidas" );
	}
	else
	{
		//  definir valor inicial de linhas 1
		m1->ix = 0;
		//  condicao 1
		while ( m1->ix < m1->rows && resposta )
		{
			//  definir valor inicial de colunas 2
			m1->iy = 0;
			//  condicao 2
			while ( m1->iy < m1->columns && resposta )
			{
				//  testar
				resposta = m1->data [m1->ix][m1->iy] == m2->data [m1->ix][m1->iy];
				//  variacao
				m1->iy += 1;
			}
			//  variacao 1
			m1->ix += 1;
		}
	}
//  retornar
	return ( resposta );
} // end matrixCompare ( )

ref_int_Matrix matrixAdd ( ref_int_Matrix m1, int k, ref_int_Matrix m2 )
{
//  definir dados locais
	ref_int_Matrix a = NULL;
//  testar se referencias sao invalidas
	if ( !m1 || !m1->data || !m2 || !m2->data )
	{
		IO_printf ( "\n%s\n", "ERRO: Referencias invalidas" );
	}
	else		
	{
		//  testar se as quantidades de elementos sao compativeis
		if ( m1->rows != m2->rows || m1->columns != m2->columns )
		{
			IO_printf ( "\n%s\n", "ERRO: Quantidades de elementos invalidas" );
		}
		else
		{
			//  reservar espaco para armazenar
			a = new_int_Matrix ( m1->rows, m1->columns );
			//  testar se ha' espaco
			if ( a != NULL && a->data == NULL )
			{
				//  nao ha' espaco
				a->rows = 0;
				a->columns = 0;
				a->ix = 0;
				a->iy = 0;
			}
			else
			{
				//  testar a existencia
				if ( a != NULL )
				{
					//  passar pelas linhas
					for ( a->ix = 0; a->ix < a->rows; a->ix += 1 )
					{
						//  passar pelas colunas
						for ( a->iy = 0; a->iy < a->columns; a->iy += 1 )
						{
							//  guardar soma na matriz resultante
							a->data [a->ix][a->iy] = m1->data [a->ix][a->iy] + k * m2->data [a->ix][a->iy];							
						}
					}
				}
			}
		}	
	}
//  retornar
	return ( a );
} // end matrixAdd ( )

ref_int_Matrix matrixProduct ( ref_int_Matrix m1, ref_int_Matrix m2 )
{
//  definir dados locais
	ref_int_Matrix a = NULL;
//  testar se referencias sao validas
	if ( !m1 || !m1->data || !m2 || !m2->data )
	{
		IO_printf ( "\n%s", "ERRO: Referencias invalidas." );
	}
	else		
	{
		//  testar se a multiplicacao e' possivel
		if ( m1->columns != m2->rows )
		{
			IO_printf ( "\n%s", "ERRO: Nao e' possivel multiplicar." );
		}
		else
		{
			//  reservar espaco para armazenar
			a = new_int_Matrix ( m1->rows, m2->columns );
			//  testar se ha' espaco
			if ( a != NULL && a->data == NULL )
			{
				//  nao ha' espaco
				a->rows = 0;
				a->columns = 0;
				a->ix = 0;
				a->iy = 0;
			}
			else
			{
				//  testar a existencia
				if ( a != NULL )
				{
					//  passar pelas linhas
					for ( a->ix = 0; a->ix < a->rows; a->ix += 1 )
					{
						//  passar pelas colunas
						for ( a->iy = 0; a->iy < a->columns; a->iy += 1 )
						{
							//  passar pela variavel (k)
							for ( int k = 0; k < m1->columns; k += 1 )
							{
								a->data [a->ix][a->iy] = a->data [a->ix][a->iy] + m1->data [a->ix][k] * m2->data[k][a->iy];
							}
						}
					}
				}
			}	
		}	
	}	
//  retornar
	return ( a );
} // end matrixProduct ( )
