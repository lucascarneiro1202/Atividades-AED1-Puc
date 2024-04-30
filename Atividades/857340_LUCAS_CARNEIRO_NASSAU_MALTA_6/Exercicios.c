// 857340_LUCAS_CARNEIRO_NASSAU_MALTA

#include "io.h"

/*
	mostrar_multiplos_6_up - Metodo recursivo para mostrar os multiplos de 6 em ordem crescente
	@param quantidade - Quantidade de valores a serem mostrados
*/

void mostrar_multiplos_6_up ( int quantidade );



/*
	mostrar_multiplos_6_down - Metodo recursivo para mostrar os multiplos de 6 em ordem decrescente
	@param quantidade - Quantidade de valores a serem mostrados
*/
void mostrar_multiplos_6_down ( int quantidade );



/*
	mostrar_multiplos_6_inversos_up - Metodo recursivo para mostrar os multiplos de 6 invertidos em ordem crescente
	@param quantidade - Quantidade de valores a serem mostrados
*/

void mostrar_multiplos_6_inversos_up ( int quantidade );



/*
	servico_inverso_up - Metodo de servico para preparar a chamada da funcao recursiva
	@param quantidade - Quantidade de valores a serem mostrados
*/

void servico_inverso_up ( int quantidade );



/*
	mostrar_multiplos_6_inversos_down - Metodo recursivo para mostrar os multiplos de 6 invertidos em ordem decrescente
	@param quantidade - Quantidade de valores a serem mostrados
*/

void mostrar_multiplos_6_inversos_down ( int quantidade );



/*
	servico_inverso_down - Metodo de servico para preparar a chamada da funcao recursiva
	@param quantidade - Quantidade de valores a serem mostrados
*/

void servico_inverso_down ( int quantidade );



/*
	somar_pares_a_partir_do_6 - Funcao recursiva para somar os primeiros valores pares posivitos ao valor 6
	@param quantidade - Quantidade de valores a serem somados
	@param valor - Valor inicial adicionado do par correspondente
	@param controle - Variavel auxiliar para o controle do par correspondente
	@return soma - Soma total dos valores
*/

int somar_pares_a_partir_do_6 ( int quantidade, int valor, int controle );



/*
	somar_pares_a_partir_do_6 - Funcao recursiva para somar os primeiros valores pares posivitos ao valor 6
	@param quantidade - Quantidade de valores a serem somados
	@param valor - Valor inicial adicionado do par correspondente
	@param controle - Variavel auxiliar para o controle do par correspondente
	@return soma - Soma total dos valores
*/

int somar_pares_a_partir_do_6 ( int quantidade, int valor, int controle );



/*
	servico_somar - Funcao de servico para preparar a chamada da funcao recursiva
	@param quantidade - Quantidade de valores a serem mostrados
	@return soma - Soma total dos valores
*/

int servico_somar ( int quantidade );



/*
	somar_pares_a_partir_do_6 - Funcao recursiva para somar os primeiros valores pares posivitos ao valor 6
	@param quantidade - Quantidade de valores a serem somados
	@param numerador - Numerador da fracao
	@param denominador - Denominador da fracao
	@return soma - Soma total dos valores
*/

double somar_pares_a_partir_do_6_inversos ( int quantidade, int numerador, int denominador, int controle );



/*
	servico_somar_inversos - Funcao de servico para preparar a chamada da funcao recursiva
	@param quantidade - Quantidade de valores a serem mostrados
	@return soma - Soma total dos valores
*/

double servico_somar_inversos ( int quantidade );



/*
	mostrar_caractere -  Metodo recursivo para mostrar todos os caracteres de uma palavra separadamente
	@param sequencia - Sequencia de caracteres a ser manipulada
	@param controle - Variavel para indicar a posicao do caractere a ser mostrado
*/

void mostrar_caractere ( chars sequencia, int controle );



/*
	servico_mostrar_caractere - Metodo de servico para preparar a chamada do metodo recursivo
	@param sequencia - Sequencia de caracteres a ser manipulada
*/

void servico_mostrar_caractere ( chars sequencia );



/*
	contar_caracteres_pares - Funcao recursiva para contar a quantidade de caracteres pares
	@param sequencia - Sequencia de caracteres a ser manipulada
	@param controle - Variavel para indicar a posicao do caractere a ser manipulado
	@return contador - Conta final dos caracteres validos
*/

int contar_caracteres_pares ( chars sequencia, int controle );



/*
	servico_contar_caracteres_pares - Funcao de servico para preparar a chamada da funcao recursiva
	@param sequencia - Sequencia de caracteres a ser manipulada
	@return contador - Conta final dos caracteres validos
*/

int servico_contar_caracteres_pares ( chars sequencia );



/*
	contar_letras_maiusculas_menores_que_L - Funcao recursiva para contar a quantidade de letras maiusculas menores que L
	@param sequencia - Sequencia de caracteres a ser manipulada
	@param controle - Variavel para indicara posicao do caractere a ser manipulado
	@return contador - Conta final dos caracteres validos
*/

int contar_letras_maiusculas_menores_que_L ( chars sequencia, int controle );



/*
	servico_contar_letras - Funcao de servico para preparar a chamada da funcao recursiva
	@param sequencia - Sequencia de caracteres a ser manipulada
	@return contador - Conta final dos caracteres validos
*/

int servico_contar_letras ( chars sequencia );



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
	mostrar_fibonacci_par - Metodo recursivo para mostrar certa quantidade de numeros de fibonacci pares
	@param quantidade - Quantidade de numeros a serem mostrados
	@param controle - Variavel auxiliar de controle
*/

void mostrar_fibonacci_par ( int quantidade, int controle );



// Method_11 - Ler um valor do teclado e mostrar essa quantidade em valores multiplos de 6, em ordem crescente, comecando pelo 6

void method_11 ( void )
{
//  definir dado
	int quantidade = 0;
//  identificar
	IO_id ( "Method_11 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar funcao recursiva
	mostrar_multiplos_6_up ( quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_12 - Ler um valor do teclado e mostrar essa quantidade em valores multiplos de 6, em ordem decrescente, terminando pelo 6

void method_12 ( void )
{
//  definir dado
	int quantidade = 0;
//  identificar
	IO_id ( "Method_12 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar funcao recursiva
	mostrar_multiplos_6_down ( quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_13.

void method_13 ( void )
{
//  definir dado
	int quantidade = 0;
//  identificar
	IO_id ( "Method_13 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar funcao de serviço
	servico_inverso_up ( quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_14.

void method_14 ( void )
{
//  definir dado
	int quantidade = 0;
//  identificar
	IO_id ( "Method_14 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar funcao de serviço
	servico_inverso_down ( quantidade );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_15.

void method_15 ( void )
{
//  definir dado
	int quantidade = 0;
	int soma = 0;
//  identificar
	IO_id ( "Method_15 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
	quantidade = quantidade - 1;
//  chamar funcao de servico
	soma = servico_somar ( quantidade );
//  mostrar soma final
	IO_printf ( "\n\n%s%d", "Soma final: ", soma );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_16.

void method_16 ( void )
{
//  definir dado
	int quantidade = 0;
	double soma = 0;
//  identificar
	IO_id ( "Method_16 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar funcao de servico
	soma = servico_somar_inversos ( quantidade );
//  mostrar soma final
	IO_printf ( "\n\n%s%.4lf", "Soma final: ", soma );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_17.

void method_17 ( void )
{
//  definir dado
	chars sequencia = IO_new_chars ( STR_SIZE );
//  identificar
	IO_id ( "Method_17 - Programa - v0.0" );
//  ler do teclado
	sequencia = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
//  chamar metodo de servico
	servico_mostrar_caractere ( sequencia );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_18.

void method_18 ( void )
{
//  definir dado
	chars sequencia = IO_new_chars ( STR_SIZE );
	int contador = 0;
//  identificar
	IO_id ( "Method_18 - Programa - v0.0" );
//  ler do teclado
	sequencia = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
//  chamar funcao de servico
	contador = servico_contar_caracteres_pares ( sequencia );
//  mostrar contador final
	IO_printf ( "\n\n%s%d", "Contador final: ", contador );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_19.

void method_19 ( void )
{
//  definir dado
	chars sequencia = IO_new_chars ( STR_SIZE );
	int contador = 0;
//  identificar
	IO_id ( "Method_19 - Programa - v0.0" );
//  ler do teclado
	sequencia = IO_readstring ( "Entrar com uma sequencia de caracteres: " );
//  chamar funcao de servico
	contador = servico_contar_letras ( sequencia );
//  mostrar contador final
	IO_printf ( "\n\n%s%d", "Contador final: ", contador );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

// Method_20.

void method_20 ( void )
{
//  definir dado
	int quantidade = 0;
//  identificar
	IO_id ( "Method_20 - Programa - v0.0" );
//  ler do teclado
	quantidade = IO_readint ( "Entrar com uma quantidade: " );
//  chamar metodo de servico
	mostrar_fibonacci_par ( quantidade, 1 );
//  encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
}

int main ( void )
{
//  definir dado
	int opcao = 0;
//  identificar
	printf ( "%s\n", "Exercicios06 - Programa = v0.0" );
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


void mostrar_multiplos_6_up ( int quantidade )
{
// definir dados locais
	int multiplo = 0;
//  recursao de cabeca
	if ( quantidade > 0 ) // base da recursao
	{
	//  motor da recursao
		mostrar_multiplos_6_up ( quantidade - 1 ); 
	//  transformar o multiplo
		multiplo = quantidade * 6;
	//  mostrar o multiplo
		IO_printf ( "\n[%d]: %d", quantidade, multiplo );
	}
} // end mostrar_multiplos_6_up ( )


void mostrar_multiplos_6_down ( int quantidade )
{
// definir dados locais
	int multiplo = 0;
//  recursao de cauda
	if ( quantidade > 0 ) // base da recursao
	{
	//  transformar o multiplo
		multiplo = quantidade * 6;
	//  mostrar o multiplo
		IO_printf ( "\n[%d]: %d", quantidade, multiplo );
	//  motor da recursao
		mostrar_multiplos_6_down ( quantidade - 1 );
	}
} // end mostrar_multiplos_6_down ( )


void mostrar_multiplos_6_inversos_up ( int quantidade )
{
// definir dados locais
	int multiplo = 0;
//  recursao de cabeca
	if ( quantidade > 0 ) // base da recursao
	{
	//  motor da recursao
		mostrar_multiplos_6_inversos_up ( quantidade - 1 ); 
	//  transformar o multiplo
		multiplo = quantidade * 6;
	//  mostrar o multiplo invertido
		IO_printf ( "\n[%d]: %d/%d", quantidade + 1, 1, multiplo );
	}
}


void servico_inverso_up ( int quantidade )
{
//  mostrar o primeiro
	IO_printf ( "\n[%d]: %d/%d", 1, 1, 1 );
//  chamar funcao recursiva
	mostrar_multiplos_6_inversos_up ( quantidade - 1 );
}


void mostrar_multiplos_6_inversos_down ( int quantidade )
{
// definir dados locais
	int multiplo = 0;
//  recursao de cauda
	if ( quantidade > 0 ) // base da recursao
	{
	//  transformar o multiplo correspondente
		multiplo = quantidade * 6;
	//  mostrar o multiplo invertido
		IO_printf ( "\n[%d]: %d/%d", quantidade + 1, 1, multiplo );
	//  motor da recursao
		mostrar_multiplos_6_inversos_down ( quantidade - 1 ); 
	}
}


void servico_inverso_down ( int quantidade )
{
//  chamar funcao recursiva
	mostrar_multiplos_6_inversos_down ( quantidade - 1 );
//  mostrar o ultimo
	IO_printf ( "\n[%d]: %d/%d", 1, 1, 1 );
}


int somar_pares_a_partir_do_6 ( int quantidade, int valor, int controle )
{
//  definir dados
	int soma = 0;
//  recursao de cabeca
	if ( quantidade >= 0 ) // base da recursao
	{
	//  mostrar o resultado da soma
		IO_printf ( "\n[%d]: %d", controle + 1, valor + 2 * controle );
	//  motor da recursao
		soma = ( valor + 2 * controle ) + somar_pares_a_partir_do_6 ( quantidade - 1, valor + 2 * controle, controle + 1 );
	}
//  retornar
	return ( soma );
}


int servico_somar ( int quantidade )
{
//  definir dados
	int soma = 0;
	int valor = 6;
	int controle = 0;
//  chamar funcao recursiva
	soma = somar_pares_a_partir_do_6 ( quantidade, valor, controle );
//  retornar
	return ( soma );
}


double somar_pares_a_partir_do_6_inversos ( int quantidade, int numerador, int denominador, int controle )
{
//  definir dados
	double soma = 0;
//  recursao de cabeca
	if ( quantidade >= 0 ) // base da recursao
	{
	//  mostrar o resultado da soma
		IO_printf ( "\n[%d]: %d/%d", controle, numerador, denominador );
	//  motor da recursao
		soma = ( 1.0 * numerador / denominador ) + somar_pares_a_partir_do_6_inversos ( quantidade - 1, numerador, denominador + 6, controle + 1 );
	}
//  retornar
	return ( soma );	
}


double servico_somar_inversos ( int quantidade )
{
//  definir dados
	double soma = 0;
	int numerador = 1;
	int denominador = 6;
	int controle = 1;
//  chamar funcao recursiva
	soma = somar_pares_a_partir_do_6_inversos ( quantidade - 1, numerador, denominador, controle );
//  retornar
	return ( soma );
}


void mostrar_caractere ( chars sequencia, int controle )
{
//  chamar recursao
	if ( controle >= 0 ) // base da recursao
	{
	//  motor da recursao
		mostrar_caractere ( sequencia, controle - 1 );
	//  mostrar caractere
		IO_printf ( "\n%c", sequencia[controle] );
	}
}


void servico_mostrar_caractere ( chars sequencia )
{
//  definir dado 
	int controle = strlen ( sequencia );
//  chamar metodo recursivo
	mostrar_caractere ( sequencia, controle );
}


int contar_caracteres_pares ( chars sequencia, int controle )
{
//  definir dados
	int contador = 0;
	char caractere_local = sequencia[controle];
	bool numero = '0' <= caractere_local && caractere_local <= '9';
//  chamar recursao 
	if ( controle >= 0 ) // base da recursao
	{
	//  testar se e' um numero
		if ( !numero )
		{
		//  chamar a recursao sem contar
			contador = contar_caracteres_pares ( sequencia, controle - 1 );
		}
		else
		{
		//  testar se e' par
			if ( !( caractere_local % 2 == 0 ) )
			{
			//  chamar a recursao sem contar
				contador = contar_caracteres_pares ( sequencia, controle - 1 );
			}
			else
			{
			//  contar e chamar a recursao
				contador = ( contador + 1 ) + contar_caracteres_pares ( sequencia, controle - 1 );
				IO_printf ( "\n%c", caractere_local );
			}
		}
	}
//  retornar
	return ( contador );
}


int servico_contar_caracteres_pares ( chars sequencia )
{
//  definir dados
	int contador = 0;
	int controle = strlen ( sequencia );
//  chamar funcao recursiva
	contador = contar_caracteres_pares ( sequencia, controle );
//  retornar
	return ( contador );
}

int contar_letras_maiusculas_menores_que_L ( chars sequencia, int controle )
{
//  definir dados
	int contador = 0;
	char caractere_local = sequencia[controle];
	bool letra_maiuscula = 'A' <= caractere_local && caractere_local <= 'Z';
//  chamar recursao 
	if ( controle >= 0 ) // base da recursao
	{
	//  testar se e' letra maiuscula
		if ( !letra_maiuscula )
		{
		//  chamar recursao sem contar
			contador = contar_letras_maiusculas_menores_que_L ( sequencia, controle - 1 ); // motor da recursao
		}
		else
		{
		//  testar se e' menor que L
			if ( !( caractere_local < 'L' ) )
			{
			//  chamar recursao sem contar
				contador = contar_letras_maiusculas_menores_que_L ( sequencia, controle - 1 ); // motor da recursao
			}
			else
			{
			//  contar e chamar recursao
				contador = ( contador + 1 ) + contar_letras_maiusculas_menores_que_L ( sequencia, controle - 1 ); // motor da recursao
				IO_printf ( "\n%c", caractere_local );
			}
		}
	}
//  retornar
	return ( contador );	
}


int servico_contar_letras ( chars sequencia )
{
//  definir dados
	int contador = 0;
	int controle = strlen ( sequencia );
//  chamar funcao recursiva
	contador = contar_letras_maiusculas_menores_que_L ( sequencia, controle );
//  retornar
	return ( contador );
}

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
}

void mostrar_fibonacci_par ( int quantidade, int controle )
{
//  chamar recursao
	if ( quantidade > 0 ) // base da recursao
	{
		if ( fibonacci_par ( controle ) == 0 )
		{
		//  motor da recursao
			mostrar_fibonacci_par ( quantidade, controle + 1 );
		}
		else
		{
		//  mostrar o numero de fibonacci par
			IO_printf ( "\n[%d]", fibonacci_par (controle) );
		//  motor da recursao
			mostrar_fibonacci_par ( quantidade - 1, controle + 1 );
		}	
	}
}
