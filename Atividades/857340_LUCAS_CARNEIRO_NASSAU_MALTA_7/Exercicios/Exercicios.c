// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

// dependencias

#include "io.h" // para definicoes proprias

/*
	multiplo_de_4 - Funcao para retornar o multiplo de 4 correspondente
	@param controle - Variavel que indica a posicao do multiplo a ser retornado
	@return multiplo - Multiplo de 4 correspondente ao controle
*/

int multiplo_de_4 ( int controle );



/*
	gravar_1 - Metodo recursivo para gravar os multiplos de 4
	@param nome_arquivo - Nome do arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
*/

void gravar_1 ( chars nome_arquivo, int quantidade );



/*
	multiplo_de_5_impar - Funcao para retornar o multiplo de 5 impar correspondente
	@param controle - Variavel que indica a posicao do multiplo a ser retornado
	@return multiplo - Multiplo de 5 impar correspondente ao controle
*/

int multiplo_de_5_impar ( int controle );



/*
	gravar_2 - Metodo recursivo para gravar os multiplos de 5 impares
	@param arquivo - Arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
	@param multiplo - Multiplo de 5 impar correspondente ao controle
	@param controle - Variavel de controle para calcular os multiplos
*/

void gravar_2 ( FILE* arquivo, int quantidade, int multiplo, int controle );



/*
	servico_multiplos_de_5_impares - Metodo de servico para chamar metodo recursivo
	@param nome_arquivo - Nome do arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
*/

void servico_2 ( chars nome_arquivo, int quantidade );



/*
	potencia_de_5 - Funcao para retornar a potencia de 5 com o expoente correspondente
	@param expoente - Expoente da potencia de 5 a ser calculada
*/

int potencia_de_5 ( int expoente );



/*
	gravar_3 - Metodo recursivo para gravar a sequencia de potencias de 5 em ordem crescente
	@param arquivo - Arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
	@param potencia - Potencia de 5 com o expoente correspondente ao controle
	@param controle - Variavel de controle da recursao e do expoente da potenciacao
*/

void gravar_3 ( FILE* arquivo, int quantidade, int potencia, int controle );



/*
	servico_3 - Metodo de servico para chamar metodo recursivo
	@param nome_arquivo - Nome do arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
*/

void servico_3 ( chars nome_arquivo, int quantidade );



/*
	gravar_4 - Metodo recursivo para gravar a sequencia de potencias inversas de 5 em ordem decrescente
	@param arquivo - Arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
	@param potencia - Potencia de 5 com o expoente correspondente ao controle no denominador
	@param controle - Variavel de controle da recursao e do expoente da potenciacao
*/

void gravar_4 ( FILE* arquivo, int quantidade, int potencia, int controle );



/*
	servico_4 - Metodo de servico para chamar metodo recursivo
	@param nome_arquivo - Nome do arquivo a ser alterado
	@param quantidade - Quantidade de numeros a serem gravados
*/

void servico_4 ( chars nome_arquivo, int quantidade );



/*
	impar - Funcao para retornar o numero impar correspondente
	@param controle - Variavel de controle do impar a ser retornado
	@return numero_impar - Impar correspondente ao controle
*/

int impar ( int controle );



/*
	gravar_5 - Metodo recursivo para gravar a sequencia 1/x^3 1/x^5 1/x^7
	@param arquivo - Arquivo a ser alterado
	@param quantidade - Quantidade de fracoes a serem gravadas
	@param controle - Variavel de controle da recursao e do expoente da potenciacao
	@param real - Valor real da base da potencia no denominador (x)
*/

void gravar_5 ( FILE* arquivo, int quantidade, int controle, double real );



/*
	servico_5 - Metodo de serivico para chamar funcao recursiva
	@param nome_arquivo - Nome do arquivo a ser alterado
	@param quantidade - Quantidade de fracoes a serem gravadas
	@param real - Valor real da base da potencia no denominador
*/

void servico_5 ( chars nome_arquivo, int quantidade, double real );



/*
	ler_lf - Metodo para ler determinada quantidadede valores reais e adiciona-los a um arranjo
	@param arquivo - Arquivo a ser lido
	@param valores - Arranjo a ser adicionado
	@param quantidade - Quantidade de valores reais a serem armazenados
*/

void ler_lf ( FILE * arquivo, double valores[30], int quantidade );



/*
	somar_lf - Funcao para retornar a soma total de todos os valores de um arranjo real
	@param valores - Arranjo real a ser consultado
	@param quantidade - Quantidade de valores a serem somados
	@return soma - Soma final dos valores reais
*/

double somar_lf ( double valores[30], int quantidade );



/*
	gravar_soma_lf - Metodo para gravar a quantidade e a soma a um arquivo
	@param arquivo - Arquivo a ser gravado
	@param quantidade - Valor inteiro a ser gravado
	@param soma - Valor real a ser gravado
*/

void gravar_soma_lf ( FILE * arquivo, int quantidade, double soma );



/*
	servico_6 - Metodo de servico para controlar a chamada dos metodos
	@param nome_arquivo - Nome do arquivo a ser manipulado
	@param quantidade - Quantidade de valores a serem adicionados ao arquivo
*/

void servico_6 ( chars nome_arquivo, int quantidade );



/*
	servico_7 - Metodo de servico para controlar a chamada dos metodos
	@param nome_arquivo - Nome do arquivo a ser manipulado
	@param quantidade - Quantidade de valores a serem adicionados ao arquivo
*/

void servico_7 ( chars nome_arquivo, int quantidade );



/*
	fibonacci - Funcao recursiva para calcular o numero de fibonacci correspondente
	@param x - Posicao do numero de fibonacci a ser calculado
	@return resultado - Numero de fibonacci correspondente
*/

int fibonacci ( int x );



/*
	fibonacci_par - Funcao recursiva para calcular o numero de fibonacci par correspondente, se possivel
	@param posicao - Posicao do numero de fibonacci a ser calculado
	@return resultado - Numero de fibonacci par correspondente (se nao for par, o retorno e' igual a 0)
*/

int fibonacci_par ( int posicao );



/*
	gravar_fibonacci_par - Metodo recursivo para gravar certa quantidade de numeros de fibonacci pares em um arquivo
	@param arquivo - Arquivo a ser gravado
	@param quantidade - Quantidade de numeros a serem mostrados
	@param controle - Variavel auxiliar de controle
*/

void gravar_fibonacci_par ( FILE * arquivo, int quantidade, int controle );



/*
	servico_8 - Metodo de servico para controlar a chamada dos metodos
	@param nome_arquivo - Nome do arquivo a ser manipulado
	@param quantidade - Quantidade de valores a serem adicionados ao arquivo
*/

void servico_8 ( chars nome_arquivo, int quantidade );



/*
	teste_maiuscula - Funcao para retornar se o caractere e' uma letra maiuscula
	@param caractere - Caractere a ser testado
*/

bool teste_maiuscula ( char caractere );



/*
	quantidade_maiuscula - Funcao para retornar a quantidade de letras maiusculas em determinada cadeia de caracteres
	@param cadeia - Cadeia de caracteres a ser testada
*/

int quantidade_maiuscula ( chars cadeia );



/*
	gravar_cadeia_e_quantidade - Metodo para gravar uma cadeia de caracteres e uma quantidade em um determinado arquivo
	@param arquivo - Arquivo a ser gravado
	@param cadeia - Cadeia a ser gravada
	@param quantidade - Quantidade a ser gravada
*/

void gravar_cadeia_e_quantidade ( FILE * arquivo, chars cadeia, int quantidade );



/*
	ler_string_9 - Metodo para ler determinado arquivo e adicionar valores a outro
	@param arquivo_read - Arquivo a ser lido
	@param arquivo_append - Arquivo a ser gravado
*/

void ler_string_9 ( FILE * arquivo_read, FILE * arquivo_append );



/*
	servico_9 - Metodo de servico para controlar a chamada dos metodos
	@param nome_arquivo_read - Nome do arquivo a ser lido
	@param nome_arquivo_append - Nome do arquivo a ser gravado
*/

void servico_9 ( chars nome_arquivo_read, chars nome_arquivo_append );



/*
	teste_maiuscula - Funcao para retornar se o caractere e' uma letra maiuscula
	@param caractere - Caractere a ser testado
*/

bool teste_maior_que_5 ( char caractere );



/*
	quantidade_maiuscula - Funcao para retornar a quantidade de letras maiusculas em determinada cadeia de caracteres
	@param cadeia - Cadeia de caracteres a ser testada
*/

int quantidade_maior_que_5 ( chars cadeia );



/*
	ler_string_10 - Metodo para ler determinado arquivo e adicionar valores a outro
	@param arquivo_read - Arquivo a ser lido
	@param arquivo_append - Arquivo a ser gravado
*/

void ler_string_10 ( FILE * arquivo_read, FILE * arquivo_append );



/*
	servico_10 - Metodo de servico para controlar a chamada dos metodos
	@param nome_arquivo_read - Nome do arquivo a ser lido
	@param nome_arquivo_append - Nome do arquivo a ser gravado
*/

void servico_10 ( chars nome_arquivo_read, chars nome_arquivo_append );



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
// identificar
	IO_id ( "Method 11 - v0.0" );
// ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
// chamar metodo
	gravar_1 ( "DADOS1.txt", quantidade );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_11 ( )

// Method_12 

void method_12 ( void )
{
//  definir dados locais
	int quantidade = 0;
//  identificar
	IO_id ( "Method 12 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_2 ( "DADOS2.txt", quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_12 ( )

// Method_13 

void method_13 ( void )
{
//  definir dados locais
	int quantidade= 0;
//  identificar
	IO_id ( "Method 13 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_3 ( "DADOS3.txt", quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_13 ( )

// Method_14

void method_14 ( void )
{
//  definir dados
	int quantidade = 0;
//  identificar
	IO_id ( "Method 14 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_4 ( "DADOS4.txt", quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_14 ( )

// Method_15 

void method_15 ( void )
{
//  definir dados locais
	int quantidade = 0;
	double real = 0.0;
//  identificar
	IO_id ( "Method 15 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
	real = IO_readdouble ( "\nEntrar com um valor real: " );
//  chamar metodo de servico
	servico_5 ( "DADOS5.txt", quantidade, real );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_15 ( )

// Method_16

void method_16 ( void )
{
//  definir dados locais
	int quantidade = 0;
//  identificar
	IO_id ( "Method 16 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_6 ( "RESULTADO06.TXT", quantidade );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16 ( )

// Method_17 

void method_17 ( void )
{
//  definir dados locais
	int quantidade = 0;
//  identificar
	IO_id ( "Method 17 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_7 ( "RESULTADO07.TXT", quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17 ( )

// Method_18

void method_18 ( void )
{
//  definir dados
	int quantidade= 0;
//  identificar
	IO_id ( "Method 18 - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	servico_8 ( "RESULTADO08.txt", quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18 ( )

// Method_19

void method_19 ( void )
{
//  identificar
	IO_id ( "Method 19 - v0.0" );
//  chamar metodo de servico
	servico_9 ( "TEXTO1.TXT", "RESULTADO09.TXT" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19 ( )

// Method_20

void method_20 ( void )
{
// identificar
	IO_id ( "Method 20 - v0.0" );
//  chamar metodo de servico
	servico_10 ( "TEXTO2.TXT", "RESULTADO10.TXT" );
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



int multiplo_de_4 ( int controle )
{
//  definir dados locais
	int multiplo = 0;
//  transformar no multiplo de 4 correspondente
	multiplo = controle * 4;
//  retornar
	return ( multiplo );
} // end multiplo_de_4 ( )



void gravar_1 ( chars nome_arquivo, int quantidade )
{
//  definir dados locais
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 0;
	int multiplo = 0;
//  repetir para a quantidade fornecida
	for ( controle = 1; controle <= quantidade; controle = controle + 1 )
	{
	//  definir dados locais
		multiplo = multiplo_de_4 ( controle );
	//  gravar valor
		IO_fprintf ( arquivo, "%d\n", multiplo );
	}
//  fechar arquivo
	fclose ( arquivo );
} // end gravar_1 ( )



int multiplo_de_5_impar ( int controle )
{
//  definir dados locais
	int multiplo = 25 + 10 * controle;
//  retornar
	return ( multiplo );
} // end multiplo_de_5 ( )



void gravar_2 ( FILE* arquivo, int quantidade, int multiplo, int controle )
{
// chamar recursao de cabeca
	if ( controle < quantidade ) // base da recursao
	{
		gravar_2 ( arquivo, quantidade, multiplo_de_5_impar ( controle + 1 ), controle + 1 ); // motor da recursao
		IO_fprintf ( arquivo, "%d\n", multiplo );
	}
} // end gravar_2 ( )



void servico_2 ( chars nome_arquivo, int quantidade )
{
//  definir dados locais
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 0;
//  chamar metodo recursivo
	gravar_2 ( arquivo, quantidade, multiplo_de_5_impar ( controle ), controle );
//  fechar arquivo
	fclose ( arquivo );
} // end servico_2 ( )



int potencia_de_5 ( int expoente )
{
//  definir dados
	int potencia = pow ( 5, expoente );
//  retornar	
	return ( potencia );
} // end potencia_de_5 ( )



void gravar_3 ( FILE* arquivo, int quantidade, int potencia, int controle )
{
//  chamar recursao de cauda
	if ( controle <= quantidade ) // base da recursao
	{
		IO_fprintf ( arquivo, "%d\n", potencia );
		gravar_3 ( arquivo, quantidade, potencia_de_5 ( controle + 1 ), controle + 1 ); // motor da recursao
	}
} // end gravar_3 ( )



void servico_3 ( chars nome_arquivo, int quantidade )
{
//  definir dados locais
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 1;
	int potencia = potencia_de_5 ( controle );
//  mostrar o primeiro
	IO_fprintf ( arquivo, "%d\n", controle );
//  chamar metodo recursivo
	gravar_3 ( arquivo, quantidade - 1, potencia, controle );
//  fechar arquivo
	fclose ( arquivo );
} // end servico_3 ( )



void gravar_4 ( FILE* arquivo, int quantidade, int potencia, int controle )
{
//  chamar recursao
	if ( controle <= quantidade ) // base da recursao
	{
		gravar_4 ( arquivo, quantidade, potencia_de_5 ( controle + 1 ), controle + 1 );
		IO_fprintf ( arquivo, "%lf\n", 1.0 / potencia );
	}
} // end gravar_4 ( )



void servico_4 ( chars nome_arquivo, int quantidade )
{
//  definir dados locais
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 1;
	int potencia = potencia_de_5 ( controle );
//  chamar metodo recursivo
	gravar_4 ( arquivo, quantidade - 1, potencia, controle );
//  mostrar o ultimo
	IO_fprintf ( arquivo, "%d\n", controle );
//  fechar arquivo
	fclose ( arquivo );
} // end servico_4 ( )



int impar ( int controle )
{
//  definir dados
	int numero_impar = 2 * controle + 1;
//  retornar
	return ( numero_impar );
} // impar ( )



void gravar_5 ( FILE* arquivo, int quantidade, int controle, double real )
{
//  chamar recursao de cauda
	if ( controle <= quantidade ) // base da recursao
	{
		IO_fprintf ( arquivo, "%lf\n", 1.0 / pow ( real, impar (controle) ) );
		gravar_5 ( arquivo, quantidade, controle + 1, real ); // motor da recursao
	}	
} // end gravar_5 ( )



void servico_5 ( chars nome_arquivo, int quantidade, double real )
{
//  definir dados
	FILE* arquivo = fopen ( nome_arquivo, "wt" );
	int controle = 1;
//  gravar primeiro
	IO_fprintf ( arquivo, "%d\n", 1 );
//  chamar metodo recursivo
	gravar_5 ( arquivo, quantidade - 1, controle, real );
//  fechar arquivo
	fclose ( arquivo );
} // end servico_5 ( )



void ler_lf ( FILE * arquivo, double valores[30], int quantidade )
{
//  definir dados locais
	double x = 0.0;
	int controle = 0;
//  tentar ler o primeiro
	IO_fscanf ( arquivo, "%lf", &x );
//  repetir enquanto houver dados
	while ( !( feof ( arquivo ) ) &&  controle < quantidade )
	{
	//  adicionar valor ao arranjo
		valores[controle] = x;
	//  variar o controle
		controle = controle + 1;
	//  tentar ler o proximo
		IO_fscanf ( arquivo, "%lf", &x );
	}
//  fechar arquivo
	fclose ( arquivo );
} // end ler_lf ( )



double somar_lf ( double valores[30], int quantidade )
{
//  definir dados locais
	double soma = 0.0;
	int controle = 0;
//  repetir para a quantidade fornecida
	for ( controle = 0; controle < quantidade; controle = controle + 1 )
	{
		//  adicionar cada valor 'a soma total
		soma = soma + valores [controle];
	}
//  retornar
	return ( soma );
} // end somar_lf ( )



void gravar_soma_lf ( FILE * arquivo, int quantidade, double soma )
{
//  gravar a quantidade
	IO_fprintf ( arquivo, "%d\n", quantidade );
//  gravar a soma
	IO_fprintf ( arquivo, "%lf\n", soma );
} // end gravar_soma_lf ( )



void servico_6 ( chars nome_arquivo, int quantidade ) 
{
//  definir dados locais
	FILE * arquivo = fopen ( "DADOS5.txt", "rt" );
	double valores [30];
	double soma = 0.0;
//  chamar metodo para ler os valores
	ler_lf ( arquivo, valores, quantidade );
//  fechar arquivo
	fclose ( arquivo );
//  chamar metodo para calcular a soma dos valores
	soma = somar_lf ( valores, quantidade );
//  abrir arquivo "RESULTADO06.TXT" para adicionar a quantidade e a soma total
	arquivo = fopen ( nome_arquivo, "at" );
//  chamar metodo para gravar a quantidade e a soma
	gravar_soma_lf ( arquivo, quantidade, soma );
} // servico_6 ( )



void servico_7 ( chars nome_arquivo, int quantidade )
{
//  definir dados locais
	FILE * arquivo = fopen ( "DADOS4.txt", "rt" );
	double valores [30];
	double soma = 0.0;
//  chamar metodo para ler os valores
	ler_lf ( arquivo, valores, quantidade );
//  fechar arquivo
	fclose ( arquivo );
//  chamar metodo para calcular a soma dos valores
	soma = somar_lf ( valores, quantidade );
//  abrir arquivo "RESULTADO07.TXT" para adicionar a quantidade e a soma total
	arquivo = fopen ( nome_arquivo, "at" );
//  chamar metodo para gravar a quantidade e a soma
	gravar_soma_lf ( arquivo, quantidade, soma );
} // end servico_7 ( )



int fibonacci ( int x )
{
//  definir dado
	int resposta = 0;
//  testar se contador valido
	if ( x == 1 || x == 2 )
	{
		//  primeiros dois valores iguais a 1
		resposta = 1;
	}
	else
	{
		if ( x > 1 ) // base da recursao
		{
			// fazer de novo com valor absoluto (motor da recursao)
			resposta = fibonacci ( x-1 ) + fibonacci ( x-2 );
		} // end if
	} // end if
//  retornar resposta
	return ( resposta );
} // end fibonacci ( )



int fibonacci_par ( int posicao )
{
//  definir dados
	int resposta = 0;
//  testar se e' impar
	if ( fibonacci (posicao) % 2 != 0 )
	{
		//  passar para o proximo
		fibonacci_par ( posicao + 1 );
	}
	else
	{
		//  adicionar o numero de fibonacci correspondente 'a variavel de resposta
		resposta = fibonacci ( posicao );
	}
//  retornar
	return ( resposta );
} // end gravar_fibonacci_par ( )



void gravar_fibonacci_par ( FILE * arquivo, int quantidade, int controle )
{
//  chamar recursao
	if ( quantidade > 0 ) // base da recursao
	{
		if ( fibonacci_par ( controle ) == 0 )
		{
			//  motor da recursao
			gravar_fibonacci_par ( arquivo, quantidade, controle + 1 );
		}
		else
		{
			//  gravar o numero de fibonacci par no arquivo
			IO_fprintf ( arquivo, "%d\n", fibonacci_par (controle) );
			//  motor da recursao
			gravar_fibonacci_par ( arquivo, quantidade - 1, controle + 1 );
		}	
	}
} // end gravar_fibonacci_par ( )



void servico_8 ( chars nome_arquivo, int quantidade )
{
//  definir dados
	FILE * arquivo = fopen ( nome_arquivo, "at" );
//  gravar quantidade
	IO_fprintf ( arquivo, "%d\n", quantidade );
//  chamar metodo para gravar os numeros de fibonacci pares
	gravar_fibonacci_par ( arquivo, quantidade, 1 );
//  fechar arquivo
	fclose ( arquivo );
} // end servico_8 ( )



bool teste_maiuscula ( char caractere )
{
//  definir dados locais
	bool check = false;
//  testar se e' maiuscula
	check = 'A' <= caractere && caractere <= 'Z';
//  retornar
	return ( check );
} // end teste_maiuscula ( )



int quantidade_maiuscula ( chars cadeia )
{
//  definir dados locais
	int controle = 0;
	int tamanho = strlen (cadeia);
	int quantidade = 0;
//  repetir para cada caractere
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
		//  definir dados locais
		char caractere = cadeia [controle];
		//  testar se e' letra maiuscula
		if ( teste_maiuscula ( caractere ) )
		{
		//  aumentar a quantidade
			quantidade = quantidade + 1;
		}	
	}
//  retornar
	return ( quantidade );
}



void gravar_cadeia_e_quantidade ( FILE * arquivo, chars cadeia, int quantidade )
{
//  gravar a cadeia
	IO_fprintf ( arquivo, "%s\n", cadeia );
//  gravar a quantidade
	IO_fprintf ( arquivo, "%d\n", quantidade );
} // end gravar_cadeia_e_quantidade ( )



void ler_string_9 ( FILE * arquivo_read, FILE * arquivo_append )
{
//  definir dados
	chars linha = IO_new_chars ( STR_SIZE );
	int quantidade = 0;
//  tentar ler o primeiro
	strcpy ( linha, IO_freadln ( arquivo_read ) );
//  testar ate' o fim do arquivo
	while ( ! feof (arquivo_read) )
	{
	//  chamar funcao para calcular a quantidade de maiusculas 
		quantidade = quantidade_maiuscula ( linha );
	//  chamar metodo para gravar a cadeia e a quantidade correspondente
		gravar_cadeia_e_quantidade ( arquivo_append, linha, quantidade );
	//  tentar ler o proximo
		strcpy ( linha, IO_freadln ( arquivo_read ) );
	}
// fechar arquivos
	fclose ( arquivo_read );
	fclose ( arquivo_append );
} // end ler_string_9 ( )



void servico_9 ( chars nome_arquivo_read, chars nome_arquivo_append )
{
//  definir dados locais
	FILE * arquivo_read = fopen ( nome_arquivo_read, "rt" );
	FILE * arquivo_append = fopen ( nome_arquivo_append, "at" );
//  chamar metodo para ler cada linha do arquivo
	ler_string_9 ( arquivo_read, arquivo_append );
} // end servico_9 ( )















bool teste_maior_que_5 ( char caractere )
{
//  definir dados locais
	bool check = false;
//  testar se e' maiuscula
	check = '5' <= caractere && caractere <= '9';
//  retornar
	return ( check );
} // end teste_maior_que_5 ( )



int quantidade_maior_que_5 ( chars cadeia )
{
//  definir dados locais
	int controle = 0;
	int tamanho = strlen (cadeia);
	int quantidade = 0;
//  repetir para cada caractere
	for ( controle = 0; controle < tamanho; controle = controle + 1 )
	{
	//  definir dados locais
		char caractere = cadeia [controle];
	//  testar se e' letra maiuscula
		if ( teste_maior_que_5 ( caractere ) )
		{
		//  aumentar a quantidade
			quantidade = quantidade + 1;
		}	
	}
//  retornar
	return ( quantidade );
} // end quantidade_maior_que_5 ( )




void ler_string_10 ( FILE * arquivo_read, FILE * arquivo_append )
{
//  definir dados
	chars linha = IO_new_chars ( STR_SIZE );
	int quantidade = 0;
//  tentar ler o primeiro
	strcpy ( linha, IO_freadln ( arquivo_read ) );
//  testar ate' o fim do arquivo
	while ( ! feof (arquivo_read) )
	{
	//  chamar funcao para calcular a quantidade de numeros maiores ou iguais a 5
		quantidade = quantidade_maior_que_5 ( linha );
	//  chamar metodo para gravar a cadeia e a quantidade correspondente
		gravar_cadeia_e_quantidade ( arquivo_append, linha, quantidade );
	//  tentar ler o proximo
		strcpy ( linha, IO_freadln ( arquivo_read ) );
	}
// fechar arquivos
	fclose ( arquivo_read );
	fclose ( arquivo_append );
} // end ler_string_10 ( )



void servico_10 ( chars nome_arquivo_read, chars nome_arquivo_append )
{
//  definir dados locais
	FILE * arquivo_read = fopen ( nome_arquivo_read, "rt" );
	FILE * arquivo_append = fopen ( nome_arquivo_append, "at" );
//  chamar metodo para ler cada linha do arquivo
	ler_string_10 ( arquivo_read, arquivo_append );
} // end servico_10 ( )
