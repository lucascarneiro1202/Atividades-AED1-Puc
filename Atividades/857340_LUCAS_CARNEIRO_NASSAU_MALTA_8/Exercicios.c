// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias

/*
	print_int_array - Metodo para mostrar todos os valores de um array inteiro na tela
	@param tamanho - Tamanho do array a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void print_int_array ( int tamanho, int array [ ] );



/*
	fprint_int_array - Metodo para gravar todos os valores de um array em um arquivo
	@param nome_arquivo - Nome do arquivo a ser gravado
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void fprint_int_array ( chars nome_arquivo, int tamanho, int array [ ] );



/*
	fread_int_array - Metodo para armazenar os valores de um arquivo em um arranjo
	@param nome_arquivo - Nome do arquivo a ser gravado
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void fread_int_array ( chars nome_arquivo, int tamanho, int array [] );



/*
	fill_int_array - Metodo para armazenar dados do teclado em um arranjo
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void fill_int_array ( int tamanho, int array [] );



/*
	fread_size_int_array - Funcao para achar a quantidade de numeros em um arquivo
	@return quantidade - Quantidade total de numeros em um arquivo
	@param nome_arquivo - Nome do arquivo a ser lido
*/

int fread_size_int_array ( chars nome_arquivo );



/*
	smallest_int_array - Funcao para achar o menor numero em um arranjo
	@return menor - Menor valor no arranjo testado
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

int smallest_int_array ( int tamanho, int array [] );



/*
	largest_int_array - Funcao para achar o maior numero em um arranjo
	@return maior - Maior valor no arranjo testado
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

int largest_int_array ( int tamanho, int array [] );



/*
	find_value_int_array - Funcao para testar se o valor procurado existe no arranjo testado
	@return result - True se o valor for encontrado e false se nao for
	@param value - Valor a ser procurado
	@param comeco - Posicao inicial para iniciar a busca pelo valor em questao
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

bool is_value_int_array ( int value, int comeco, int tamanho, int array [] );



/*
	fread_size_positive_even_int - Funcao para encontrar a quantidade de valores pares positivos em um arquivo
	@return quantidade - Numero de valores pares positivos no arquivo
	@param nome_arquivo - Nome do arquivo a ser manipulado
*/

int fread_size_positive_even_int ( chars nome_arquivo );



/*
	fread_positive_even_int_array - Metodo para armazenas os valores pares positivos em um arranjo
	@param nome_arquivo - Nome do arquivo a ser gravado
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void fread_positive_even_int_array ( chars nome_arquivo, int tamanho, int array [] );



/*
	gerar_int - Funcao para calcular um valor aleatorio entre um intervalo especifico
	@return valor - Valor aleatorio entre um intervalo especifico
	@param inferior - Limite inferior do intervalo
	@param superior - Limite superior do intervalo
*/

int gerar_int ( int inferior, int superior );



/*
	add_random_int_array - Metodo para armazenar valores aleatorios dentro de um intervalo em um arranjo
	@param inferior - Limite inferior do intervalo
	@param superior - Limite superior do intervalo
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo que contem os valores a serem manipulados
*/

void add_random_int_array ( int inferior, int superior, int tamanho, int array [] );



/*
	fill_even_int_array - Funcao para armazenar os valores pares de um arranjo em outro
	@return quantidade - Quantidade de valores pares armazenados
	@param tamanho - Tamanho dos arranjos a serem manipulados
	@param array1 - Arranjo em que os valores pares serao buscados 
	@param array2 - Arranjo em que os valores pares serao armazenados
*/

int fill_even_int_array ( int tamanho, int array1 [], int array2 [] );



/*
	smallest_even_int_array - Funcao para calcular o menor numero par de um arranjo
	@return menor_par - Menor numero par do arranjo
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

int smallest_even_int_array ( int tamanho, int array [] );



/*
	fill_odd_int_array - Funcao para armazenar os valores impares de um arranjo em outro
	@return quantidade - Quantidade de valores impares armazenados
	@param tamanho - Tamanho dos arranjos a serem manipulados
	@param array1 - Arranjo em que os valores impares serao buscados 
	@param array2 - Arranjo em que os valores impares serao armazenados
*/

int fill_odd_int_array ( int tamanho, int array1 [], int array2 [] );



/*
	largest_odd_int_array - Funcao para calcular o maior numero impar de um arranjo
	@return maior_impar - Maior numero impar do arranjo
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

int largest_odd_int_array ( int tamanho, int array [] );



/*
	average_int_array - Funcao para encontrar a media de um arranj de inteiros
	@result media - Media dos valores
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

double average_int_array ( int tamanho, int array [] );



/*
	read_smaller_value_int_array - Funcao para armazenar os valores menores ou iguais a um determinado numero em um arranjo
	@return quantidade - Quantidade de valores armazenados
	@param media - Valor de referencia
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array1 - Arranjo a ser testado
	@param array2 - Arranjo a ser armazenado
*/

int read_smaller_value_int_array ( double media, int tamanho, int array1 [], int array2 [] );



/*
	read_larger_value_int_array - Funcao para armazenar os valores maiores que um determinado numero em um arranjo
	@return quantidade - Quantidade de valores armazenados
	@param media - Valor de referencia
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array1 - Arranjo a ser testado
	@param array2 - Arranjo a ser armazenado
*/

int read_larger_value_int_array ( double media, int tamanho, int array1 [], int array2 [] );



/*
	is_descending_int_array - Funcao para testar se o arranjo esta em ordem decrescente
	@return result - True se estiver em ordem decrescente e false se nao estiver
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

bool is_descending_int_array ( int tamanho, int array [] );



/*
	find_value_int_array - Funcao para encontrar a posicao de um valor procurado em um arranjo
	@return posicao - Posicao do valor procurado
	@param value - Valor a ser procurado
	@param comeco - Posicao inicial para começar a busca
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

int find_value_int_array ( int value, int comeco, int tamanho, int array [] );



/*
	how_many_value_int_array - Funcao para encontrar a quantidade de um valor em um arranjo
	@return quantidade - Quantidade do valor procurado
	@param value - Valor a ser procurado
	@param comeco - Posicao inicial para começar a busca
	@param tamanho - Tamanho do arranjo a ser manipulado
	@param array - Arranjo a ser manipulado
*/

int how_many_value_int_array ( int value, int comeco, int tamanho, int array [] );


// Method_00

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_11

void method_11 ( void )
{
//  definir dados locais
	int quantidade = 0;
// identificar
	IO_id ( "Method 11 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "\nEntrar com uma quantidade: " );
//  testar se quantidade e' valida
	if ( quantidade <= 0 )
	{
		IO_printf ( "\n%s\n", "ERRO: Dado invalido" );
	}
	else
	{
	//  definir array
		int array [quantidade];
	//  chamar metodo para completar um arranjo
		fill_int_array ( quantidade, array );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
//  definir dados locais
	int tamanho = 0;
//  identificar
	IO_id ( "Method 12 - v0.0" );
//  chamar metodo  para ler o tamanho
	tamanho = fread_size_positive_even_int ( "DADOS2.txt" );	
//  declarar arranjo
	int array [tamanho];
//  chamar metodo para ler os dados
	fread_positive_even_int_array ( "DADOS2.txt", tamanho, array );
//  chamar metodo para gravar os dados
	fprint_int_array ( "RESULTADO2.txt", tamanho, array );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
// definir dados locais
	int quantidade = 0;
	int inferior = 0;
	int superior = 0;
// identificar
	IO_id ( "Method 13 - v0.0" );
//  ler do teclado a quantidade
	quantidade = IO_readint ( "\nEntrar com uma quantidade: " );
//  testar se quantidade e' valida
	if ( quantidade <= 0 )
	{
		IO_printf ( "\n%s\n", "ERRO: Dado invalido" );
	}
	else
	{
	//  criar array com a quantidade informada
		int array [quantidade];
	//  ler do teclado o limite inferior
		inferior = IO_readint ( "\nEntrar com um limite inferior: " );
	//  ler do teclado o limite superior
		superior = IO_readint ( "\nEntrar com um limite superior: " );
	//  testar se o limite superior e' valido
		if ( inferior >= superior )
		{
			IO_printf ( "\n%s\n", "ERRO: Dado invalido" );
		}
		else
		{
		//  chamar metodo para adicionar (n) valores aleatorios ao arranjo
			add_random_int_array ( inferior, superior, quantidade, array );
		//  chamar metodo para gravar cada valor em um arquivo
			fprint_int_array ( "DADOS.TXT", quantidade, array );
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
//  definir dados locais
	int tamanho = 0;
	int menor_par = 0;
//  identificar
	IO_id ( "Method 14 - v0.0" );
//  procurar a quantidade de valores a serem lidos
	tamanho = fread_size_int_array ( "DADOS.TXT" );
//  declarar array com o tamanho encontrado
	int array [tamanho];
//  chamar metodo para ler todos os valores de um arquivo
	fread_int_array( "DADOS.TXT", tamanho, array ); 
//  chamar metodo para encontrar o menor valor par
	menor_par = smallest_even_int_array ( tamanho, array );
//  mostrar menor par
	IO_printf ( "\n%s%d", "Menor par: ", menor_par );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
//  definir dados locais
	int tamanho = 0;
	int maior_impar = 0;
//  identificar
	IO_id ( "Method 15 - v0.0" );
//  procurar a quantidade de valores a serem lidos
	tamanho = fread_size_int_array ( "DADOS.TXT" );
//  declarar array com o tamanho encontrado
	int array [tamanho];
//  chamar metodo para ler todos os valores de um arquivo
	fread_int_array( "DADOS.TXT", tamanho, array ); 
//  chamar metodo para encontrar o maior valor impar
	maior_impar = largest_odd_int_array ( tamanho, array );
//  mostrar maior valor impar
	IO_printf ( "\n%s%d", "Maior impar: ", maior_impar );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
//  definir dados
	int tamanho = 0;
	double media = 0;
	int tamanho_menores = 0;
	int tamanho_maiores = 0;
//  identificar
	IO_id ( "Method 16 - v0.0" );
//  encontrar a quantidade de valores a serem armazenados no array
	tamanho = fread_size_int_array ( "DADOS3.TXT" );
//  definir array com o tamanho encontrado
	int array [tamanho];
	int array_menores [tamanho];
	int array_maiores [tamanho];
//  chamar metodo para armazenar os dados do arquivo no array
	fread_int_array( "DADOS3.TXT", tamanho, array );
//  chamar funcao para encontrar a media dos valores de um arranjo
	media = average_int_array ( tamanho, array );
//  chamar funcao para armazenar os valores menores ou iguais a' media em um array
	tamanho_menores = read_smaller_value_int_array ( media, tamanho, array, array_menores );
//  chamar funcao para armazenar os valores maiores que a media em um array
	tamanho_maiores = read_larger_value_int_array ( media, tamanho, array, array_maiores );
//  gravar os valores menores ou iguais em um arquivo
	fprint_int_array ( "RESULTADO06a.TXT", tamanho_menores, array_menores );
//  gravar os valores maiores em outro arquivo
	fprint_int_array ( "RESULTADO06b.TXT", tamanho_maiores, array_maiores );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
//  definir dados
	int tamanho = 0;
	bool result = false;
//  identificar
	IO_id ( "Method 17 - v0.0" );
//  encontrar a quantidade de valores a serem armazenados no array
	tamanho = fread_size_int_array ( "DADOS3.TXT" );
//  definir array com o tamanho encontrado
	int array [tamanho];
//  chamar metodo para armazenar os dados do arquivo no array
	fread_int_array( "DADOS3.TXT", tamanho, array );
//  chamar metodo para mostrar os elementos do array na tela
	print_int_array ( tamanho, array );
//  chamar funcao para determinar se os valores estao em ordem decrescente
	result = is_descending_int_array ( tamanho, array );
//  mostrar se esta' ordenado ou nao
	if ( result )
	{
		IO_printf ( "\n%s", "Esta em ordem decrescente" );
	}
	else
	{
		IO_printf ( "\n%s", "Nao esta em ordem decrescente" );
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
//  definir dados locais
	int value = 0;
	int tamanho = 0;
	bool result = false;
	int começo = 0;
//  identificar
	IO_id ( "Method 18 - v0.0" );
//  ler do teclado o valor a ser procurado
	value = IO_readint ( "\nEntrar com um valor inteiro a ser procurado: " );
//  ler do teclado a posicao inicial para começar a procura
	começo = IO_readint ( "\nEntrar a posicao inicial para comecar a procura: " );
//  encontrar a quantidade de valores a serem armazenados no array
	tamanho = fread_size_int_array ( "DADOS3.TXT" );
//  testar se a posicao inicial e' valida
	if ( começo < 0 || começo >= tamanho )
	{
		IO_printf ( "\n%s", "ERRO: Valor invalido" );
	}
	else
	{
	//  definir array com o tamanho encontrado
		int array [tamanho];
	//  chamar metodo para armazenar os dados do arquivo no array
		fread_int_array( "DADOS3.TXT", tamanho, array );
	//  chamar metodo para mostrar os elementos do array na tela
		print_int_array ( tamanho, array );
	//  chamar metodo para testar se o valor digitado pode ser encontrado no arranjo
		result = is_value_int_array ( value, começo, tamanho, array );
	//  mostrar se tem o valor ou nao
		if ( result )
		{
			IO_printf ( "\n\n%s", "O valor procurado foi encontrado." );
		}
		else
		{
			IO_printf ( "\n\n%s", "O valor procurado nao foi encontrado." );
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
//  definir dados locais
	int value = 0;
	int tamanho = 0;
	int começo = 0;
	int posicao = 0;
//  identificar
	IO_id ( "Method 19 - v0.0" );
//  ler do teclado o valor a ser procurado
	value = IO_readint ( "\nEntrar com um valor inteiro a ser procurado: " );
//  ler do teclado a posicao inicial para começar a procura
	começo = IO_readint ( "\nEntrar a posicao inicial para comecar a procura: " );
//  encontrar a quantidade de valores a serem armazenados no array
	tamanho = fread_size_int_array ( "DADOS3.TXT" );
//  testar se a posicao inicial e' valida
	if ( começo < 0 || começo >= tamanho )
	{
		IO_printf ( "\n%s", "ERRO: Valor invalido" );
	}
	else
	{
	//  definir array com o tamanho encontrado
		int array [tamanho];
	//  chamar metodo para armazenar os dados do arquivo no array
		fread_int_array( "DADOS3.TXT", tamanho, array );
	//  chamar metodo para mostrar os elementos do array na tela
		print_int_array ( tamanho, array );
	//  chamar funcao para retornar a posicao do valor procurado no arranjo, se ele existir
		posicao = find_value_int_array ( value, começo, tamanho, array );
	//  testar se o valor foi encontrado
		if ( posicao < 0 )
		{
			IO_printf ( "\n\n%s", "O valor procurado nao foi encontrado." );
		}
		else
		{
			IO_printf ( "\n\n%s%d", "O valor procurado foi encontrado na posicao ", posicao );
		}
	}
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
//  definir dados locais
	int value = 0;
	int tamanho = 0;
	int começo = 0;
	int quantidade = 0;
//  identificar
	IO_id ( "Method 20 - v0.0" );
//  ler do teclado o valor a ser procurado
	value = IO_readint ( "\nEntrar com um valor inteiro a ser procurado: " );
//  ler do teclado a posicao inicial para começar a procura
	começo = IO_readint ( "\nEntrar a posicao inicial para comecar a procura: " );
//  encontrar a quantidade de valores a serem armazenados no array
	tamanho = fread_size_int_array ( "DADOS3.TXT" );
//  testar se a posicao inicial e' valida
	if ( começo < 0 || começo >= tamanho )
	{
		IO_printf ( "\n%s", "ERRO: Valor invalido" );
	}
	else
	{
	//  definir array com o tamanho encontrado
		int array [tamanho];
	//  chamar metodo para armazenar os dados do arquivo no array
		fread_int_array( "DADOS3.TXT", tamanho, array );
	//  chamar metodo para mostrar os elementos do array na tela
		print_int_array ( tamanho, array );
	//  chamar funcao para retornar a quantidade de vezes que o valor procurado foi encontrado no arranjo, se ele existir
		quantidade = how_many_value_int_array ( value, começo, tamanho, array );
	//  testar se o valor foi encontrado
		if ( quantidade <= 0 )
		{
			IO_printf ( "\n\n%s", "O valor procurado nao foi encontrado." );
		}
		else
		{
			IO_printf ( "\n\n%s%d%s", "O valor procurado foi encontrado ", quantidade, " vezes." );
		}
	}
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

void print_int_array ( int tamanho, int array [ ] )
{
//  definir dados locais
	int controle = 0;
//  repetir para a quantidade de dados do arranjo
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  mostrar na tela
		printf ( "\n%d", array [controle] );
	}
} // end print_int_array( )

void fprint_int_array ( chars nome_arquivo, int tamanho, int array [ ] )
{
// definir dados locais
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 0;
// gravar quantidade de dados
	IO_fprintf ( arquivo, "%d\n", tamanho );
// gravar valores no arranjo
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		// gravar valor
		IO_fprintf ( arquivo, "%d\n", array [ controle ] );
	} // end for
// fechar arquivo
	fclose ( arquivo );
} // end fprint_int_array ( )

void fread_int_array ( chars nome_arquivo, int tamanho, int array [] )
{
//  definir dados locais
	FILE * arquivo = fopen ( nome_arquivo, "rt" );
	int quantidade = 0;
	int valor = 0;
	int posicao = 0;
//  ler a quantidade de dados
	IO_fscanf ( arquivo, "%d", &quantidade );
//  testar se o dado e' invalido
	if ( quantidade <= 0 )
	{
		IO_printf ( "\nERRO: Valor invalido\n" );
	}
	else // dado valido
	{
		//  ler o primeiro
		IO_fscanf ( arquivo, "%d", &valor );
		//  ler e guardar valores em arranjo
		while ( ! feof (arquivo) && posicao < tamanho )
		{
			//  adicionar ao array
			array [posicao] = valor;
			//  passar para o proximo
			posicao = posicao + 1;
			//  ler proximo valor
			IO_fscanf ( arquivo, "%d", &valor );
		}		
	}		
//  fechar arquivo
	fclose (arquivo);
} // end fread_int_array ( )

void fill_int_array ( int tamanho, int array [] )
{
//  definir dados locais
	int controle = 0;
//  repetir para todos os dados do arranjo
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		do
		{
			IO_printf ( "%d: ", controle + 1 );
			array[controle] = IO_readint ( "" );
		}
		while ( ( array[controle] == 0 ) || ( array[controle] % 2 != 0 ) );
	}
} // end fill_int_array ( )

int smallest_int_array ( int tamanho, int array [] )
{
// definir dados locais
	int menor = 0;
	int atual = 0;
	int anterior = 0;
	int controle = 0;
// testar se quantidade e' valida
	if ( tamanho <= 0 )
	{
		printf ( "\nERRO:Valor invalido" );
	}
	else
	{
		anterior = array[0]; 
		atual = array[1];   
		menor = anterior;
		for ( controle = 2; controle <= tamanho; controle = controle + 1 )
		{
			//  testar se o valor atual e' menor que o anterior
			if ( anterior - atual >= 0 )
			{
				//  testar se o valor menor encontrado anteriormente e' menor do que o ja' contado
				if ( atual < menor )
				{
					menor = atual;	
				}
			}
			anterior = atual;
			atual = array [controle];            
		}
	}
	// retornar o menor valor
	return ( menor );	
} // end smallest_int_array ( )

int fread_size_int_array ( chars nome_arquivo )
{
//  definir dados locais
	FILE * arquivo = fopen ( nome_arquivo, "rt" );
	int quantidade = 0;
//  ler a quantidade de dados
	IO_fscanf ( arquivo, "%d", &quantidade );	
//  retornar
	return ( quantidade );
} // end fread_size_int_array ( )

int largest_int_array ( int tamanho, int array [] )
{
// definir dados locais
	int maior = 0;
	int atual = 0;
	int anterior = 0;
	int controle = 0;
// testar se quantidade e' valida
	if ( tamanho <= 0 )
	{
		printf ( "\nERRO:Valor invalido" );
	}
	else
	{
		anterior = array[0]; 
		atual = array[1];   
		maior = anterior;
		for ( controle = 2; controle <= tamanho; controle = controle + 1 )
		{
			//  testar se o valor atual e' maior que o anterior
			if ( atual - anterior >= 0 )
			{
				//  testar se o valor maior encontrado anteriormente e' maior do que o ja' contado
				if ( atual > maior )
				{
					maior = atual;	
				}
			}
			anterior = atual;
			atual = array [controle];            
		}
	}
	// retornar o menor valor
	return ( maior );	
} // end largest_int_array ( )

bool is_value_int_array ( int value, int comeco, int tamanho, int array [] )
{
//  definir dados locais
	bool result = false;
	int controle = 0;
//  repetir para a quantidade de dados
	for ( controle = comeco; controle < tamanho; controle = controle + 1 )
	{
		//  testar se o valor do array e' o valor procurado
		if ( array [controle] == value )
		{
			result = true;
		}
	}
//  retornar
	return ( result );
} // end is_value_int_array ( )

int fread_size_positive_even_int ( chars nome_arquivo )
{
//  definir dados locais
	FILE * arquivo = fopen ( nome_arquivo, "rt" );
	int quantidade = 0;
	int valor = 0;
	int tamanho = 0;
//  ler a quantidade de dados
	IO_fscanf ( arquivo, "%d", &quantidade );
//  testar se o dado e' invalido
	if ( quantidade <= 0 )
	{
		IO_printf ( "ERRO: Valor invalido\n" );
	}
	else // dado valido
	{
		//  ler o primeiro
		IO_fscanf ( arquivo, "%d", &valor );
		while ( ! feof (arquivo) )
		{
			//  testar se e' positivo e par
			if ( ( valor > 0 )  && ( valor % 2 == 0 ) )
			{
				//  adicionar ao tamanho
				tamanho = tamanho + 1;
			}
			//  ler valor
			IO_fscanf ( arquivo, "%d", &valor );	
		}		
	}
//  fechar arquivo
	fclose (arquivo);
//  retornar
	return ( tamanho );
} // end fread_size_positive_even_int ( )

void fread_positive_even_int_array ( chars nome_arquivo, int tamanho, int array [] )
{
//  definir dados locais
	FILE * arquivo = fopen ( nome_arquivo, "rt" );
	int quantidade = 0;
	int valor = 0;
	int posicao = 0;
//  ler a quantidade de dados
	IO_fscanf ( arquivo, "%d", &quantidade );
//  testar se o dado e' invalido
	if ( quantidade <= 0 )
	{
		IO_printf ( "ERRO: Valor invalido\n" );
	}
	else // dado valido
	{
		//  ler o primeiro
		IO_fscanf ( arquivo, "%d", &valor );
		//  ler e guardar valores em arranjo
		while ( ! feof (arquivo) && posicao < tamanho )
		{
			//  testar se e' positivo e par
			if ( ( valor > 0 )  && ( valor % 2 == 0 ) )
			{
				//  adicionar ao array
				array [posicao] = valor;
				//  passar para o proximo
				posicao = posicao + 1;
			}
			//  ler proximo valor
			IO_fscanf ( arquivo, "%d", &valor );
		}		
	}		
//  fechar arquivo
	fclose (arquivo);
} // end fread_positive_even_int_array ( )

int gerar_int ( int inferior, int superior )
{
//  definir dados locais
	int valor = 0;
//  gerar numero aleatorio limitado pelo valor superior
	valor = ( rand ( ) % ( superior - inferior ) ) + inferior;
//  retornar
	return ( valor );
} // end gerar_int ( )

void add_random_int_array ( int inferior, int superior, int tamanho, int array [] )
{
//  definir dados locais
	int controle = 0;
//  repetir para a quantidade de valores
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		array [controle] = gerar_int ( inferior, superior );
	}
} // end add_random_int_array ( )

int fill_even_int_array ( int tamanho, int array1 [], int array2 [] )
{
//  definir dados locais
	int controle = 0;
	int posicao = 0;
	int quantidade = 0;
//  repetir para a quantidade de dados
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  testar se e' par
		if ( array1 [controle] % 2 == 0 )
		{
			//  adicionar o valor par ao arranjo de pares
			array2 [posicao] = array1 [controle];
			//  avancar a posicao do array2
			posicao = posicao + 1;
			//  contar a quantidade
			quantidade = quantidade + 1;
		}
	}
//  retornar
	return ( quantidade );
} // end fill_even_int_array ( )

int smallest_even_int_array ( int tamanho, int array [] )
{
//  definir dados locais
	int menor_par = 0;
	int pares [tamanho];
	int tamanho2 = 0;
//  chamar metodo para ober todos os valores pares
	tamanho2 = fill_even_int_array ( tamanho, array, pares ); 
//  chamar metodo para encontrar o menor valor do array
	menor_par = smallest_int_array ( tamanho2, pares );
//  retornar
	return ( menor_par );
} // end smallest_even_int_array ( )

int fill_odd_int_array ( int tamanho, int array1 [], int array2 [] )
{
//  definir dados locais
	int controle = 0;
	int posicao = 0;
	int quantidade = 0;
//  repetir para a quantidade de dados
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  testar se e' impar
		if ( array1 [controle] % 2 != 0 )
		{
			//  adicionar o valor impar ao arranjo de pares
			array2 [posicao] = array1 [controle];
			//  avancar a posicao do array2
			posicao = posicao + 1;
			//  contar a quantidade
			quantidade = quantidade + 1;
		}
	}
//  retornar
	return ( quantidade );
} // end fill_odd_int_array ( )

int largest_odd_int_array ( int tamanho, int array [] )
{
//  definir dados locais
	int maior_impar = 0;
	int impares [tamanho];
	int tamanho2 = 0;
//  chamar metodo para ober todos os valores impares
	tamanho2 = fill_odd_int_array ( tamanho, array, impares ); 
//  chamar metodo para encontrar o maior valor do array
	maior_impar = largest_int_array ( tamanho2, impares );
//  retornar
	return ( maior_impar );
} // end largest_odd_int_array ( )

double average_int_array ( int tamanho, int array [] )
{
//  definir dados locais
	double media = 0.0;
	int controle = 0;
	int soma = 0;
//  repetir para a quantidade de dados e calcular a soma de todos os valores
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		soma = soma + array[controle];
	}
//  dividir a soma total pelo numero de elementos
	media = soma * 1.0 / tamanho;
//  retornar
	return ( media );
} // end average_int_array ( )

int read_smaller_value_int_array ( double media, int tamanho, int array1 [], int array2 [] )
{
//  definir dados
	int quantidade = 0;
	int controle = 0;
	int posicao = 0;
//  repetir para a quantidade total de dados
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  testar se e' menor ou igual 'a media
		if ( array1 [controle] <= media )
		{
			//  armazenar o valor do primeiro array no segundo
			array2 [posicao] = array1 [controle];
			//  aumentar a quantidade de valores
			quantidade = quantidade + 1;
			//  variar a posicao do segundo array
			posicao = posicao + 1;
		}
	}
//  retornar
	return ( quantidade );
} // end read_smaller_value_int_array ()

int read_larger_value_int_array ( double media, int tamanho, int array1 [], int array2 [] )
{
//  definir dados
	int quantidade = 0;
	int controle = 0;
	int posicao = 0;
//  repetir para a quantidade total de dados
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  testar se e' maior que a media
		if ( array1 [controle] > media )
		{
			//  armazenar o valor do primeiro array no segundo
			array2 [posicao] = array1 [controle];
			//  aumentar a quantidade de valores
			quantidade = quantidade + 1;
			//  variar a posicao do segundo array
			posicao = posicao + 1;
		}
	}
//  retornar
	return ( quantidade );
} // end read_larger_value_int_array ()

bool is_descending_int_array ( int tamanho, int array [] )
{
//  definir dados locais
	int controle = 0;
	int result = true;
	int atual = 0;
	int proximo = 0;
	tamanho = tamanho + 1;
//  começar valores atual e proximo
	atual = array [0];   // 5 4 3 2 1
	proximo = array [1]; // 4 3 2 1
//  repetir para a quantidade de dados
	for ( controle = 2; controle < tamanho; controle = controle + 1 )
	{
		if ( atual - proximo <= 0 )
		{
			result = false;
		}
		atual = proximo;
		proximo = array [controle];
	}
//  retornar
	return ( result );
} // end is_descending_int_array ( )

int find_value_int_array ( int value, int comeco, int tamanho, int array [] )
{
//  definir dados locais
	int posicao = -1;
	int controle = 0;
//  repetir para a quantidade de dados
	for ( controle = comeco; controle < tamanho; controle = controle + 1 )
	{
	//  testar se o valor do array e' o valor procurado
		if ( array [controle] == value )
		{
			posicao = controle;
		}
	}
//  retornar
	return ( posicao );
} // end find_value_int_array ( )

int how_many_value_int_array ( int value, int comeco, int tamanho, int array [] )
{
//  definir dados locais
	int quantidade = 0;
	int controle = 0;
//  repetir para a quantidade de dados
	for ( controle = comeco; controle < tamanho; controle = controle + 1 )
	{
	//  testar se o valor do array e' o valor procurado
		if ( array [controle] == value )
		{
			quantidade = quantidade + 1;
		}
	}
//  retornar
	return ( quantidade );
} // end how_many_value_int_array ( )
