/*
Exercicios1100 - v0.0. - __ / __ / _____
Author: Lucas Carneiro Nassau Malta
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- definicoes globais

void pause ( std::string text )
{
	std::string dummy;
	std::cin.clear ( );
	std::cout << std::endl << text;
	std::cin.ignore( );
	std::getline(std::cin, dummy);
	std::cout << std::endl << std::endl;
} // end pause ( )

// ----------------------------------------------- classes / pacotes

#include "myarray.hpp"
using namespace std;

// ----------------------------------------------- metodos

/**
  Method_00 - nao faz nada.
 */

void method_00 ( )
{
// nao faz nada
} // end method_00 ( )

/**
  Method_01 - Mostrar certa quantidade de valores.
 */

void method_11 ( )
{
//  definir dados locais
	int n = 0;
	int inferior = 0;
	int superior = 0;
//  identificar
	cout << "\nMethod_11 - v0.0\n" << endl;
//  ler do teclado
	cout << "Entrar com uma quantidade: ";
	cin >> n;
	cout << endl;
//  testar se quantidade e' valida
	if ( n <= 0 )
	{
		cout << "\nERRO: Quantidade invalida\n" << endl;
	}
	else
	{
	//  ler limites do teclado
		cout << "Entrar com o limite inferior: ";
		cin >> inferior;
		cout << endl;
		cout << "Entrar com o limite superior: ";
		cin >> superior;
		cout << endl;
	//  testar se limites sao validos
		if ( inferior >= superior )
		{
			cout << "\nERRO: Limite invalido\n" << endl;
		}
		else
		{
		//  definir objeto
			Array <int> int_array (n, 0);
		//  preencher objeto
			for ( int x = 0; x < int_array.getLength(); x += 1 )
			{
				int_array.set (x, int_array.randomIntGenerate (inferior, superior) );
			}
		//  gravar arranjo resultante em arquivo
			int_array.fprint ( "DADOS.TXT" );
		//  mostrar arranjo
			int_array.print();
		//  reciclar espaco
			int_array.free();
		}
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_11 ( )

/**
  Method_12.
 */

void method_12 ( )
{
// definir dados
	Array <int> int_array ( 1, 0 );
	int maior = 0;
// identificar
	cout << endl << "Method_12 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  mostrar arranjo
	int_array.print();
//  procurar o maior valor par no arranjo
	maior = int_array.largestEven();
//  testar se resultado e' valido
	if ( maior == -1 )
	{
		cout << endl << "ERRO: Arranjo contem apenas valores impares." << endl;
	}
	else
	{
	//  mostrar resultado
		cout << endl << "Maior valor par no arranjo: " << maior << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_12 ( )

/**
  Method_13.
 */

void method_13 ( )
{
// definir dados
	Array <int> int_array ( 1, 0 );
	int menor = 0;
// identificar
	cout << endl << "Method_13 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  mostrar arranjo
	int_array.print();
//  procurar o maior valor par no arranjo
	menor = int_array.smallestOddx3();
//  testar se resultado e' valido
	if ( menor == 0 )
	{
		cout << endl << "ERRO: Arranjo contem apenas valores pares ou nao possui valores impares multiplos de 3." << endl;
	}
	else
	{
	//  mostrar resultado
		cout << endl << "Menor valor impar multiplo de 3 no arranjo: " << menor << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_13 ( )

/**
  Method_14.
 */

void method_14 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
	int soma = 0;
	int inicio = 0;
	int fim = 0;
// identificar
	cout << endl << "Method_14 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
	int tamanho = int_array.getLength();
//  mostrar arranjo
	int_array.print();
//  ler intervalo do teclado
	cout << endl << "Posicao inicial: ";
	cin >> inicio;
	cout << endl << "Posicao final: ";
	cin >> fim;
//  testar se intevalo e' valido
	if ( inicio >= fim || inicio < 0 || inicio >= tamanho - 1 || fim < 1 || fim > tamanho - 1 )
	{
		cout << endl << "ERRO: Intervalo invalido." << endl;
	}
	else
	{
	//  somar todos os valores em um arranjo entre duas posicoes
		soma = int_array.addInterval ( inicio, fim );
	//  mostrar soma resultante
		cout << endl << "Soma dos valores no intervalo definido: " << soma << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_14 ( )

/**
  Method_15.
 */

void method_15 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
	double media = 0;
	int inicio = 0;
	int fim = 0;
// identificar
	cout << endl << "Method_15 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
	int tamanho = int_array.getLength();
//  mostrar arranjo
	int_array.print();
//  ler intervalo do teclado
	cout << endl << "Posicao inicial: ";
	cin >> inicio;
	cout << endl << "Posicao final: ";
	cin >> fim;
//  testar se intevalo e' valido
	if ( inicio >= fim || inicio < 0 || inicio >= tamanho - 1 || fim < 1 || fim > tamanho - 1 )
	{
		cout << endl << "ERRO: Intervalo invalido." << endl;
	}
	else
	{
	//  calcular a media dos valores em um arranjo entre duas posicoes
		media = int_array.averageInterval ( inicio, fim );	
	//  mostrar media resultante
		cout << endl << "Media dos valores no intervalo definido: " << media << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_15 ( )

/**
  Method_16.
 */

void method_16 ( )
{
//  definir dados
	Array <int> int_array (1, 0);
	bool result = false;
// identificar
	cout << endl << "Method_16 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  mostrar arranjo
	int_array.print();
//  testar se todos os valores do arranjo sao negativos
	result = int_array.negatives();
//  mostrar resultado
	if ( result )
	{
		cout << "Todos os valores do arranjo sao negativos." << endl;
	}
	else
	{
		cout << "Nem todos os valores do arranjo sao negativos." << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_16 ( )

/*
  Method_17.
*/

void method_17 ( )
{
//  definir dados
	Array <int> int_array (1, 0);
	bool result = false;
// identificar
	cout << endl << "Method_17 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  mostrar arranjo
	int_array.print();
//  testar se o arranjo esta ordenado em ordem crescente
	result = int_array.isCrescent();
//  mostrar resultado
	if ( result )
	{
		cout << "O arranjo esta' ordenado em ordem crescente." << endl;
	}
	else
	{
		cout << "O arranjo nao esta' ordenado em ordem crescente." << endl;
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_17 ( )

/**
  Method_18.
 */

void method_18 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
	int valor = 0;
	int inicio = 0;
	int fim = 0;
	bool result = false;
// identificar
	cout << endl << "Method_18 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
	int tamanho = int_array.getLength();
//  mostrar arranjo
	int_array.print();
//  ler valor a ser procurado do teclado
	cout << endl << "Valor a ser procurado: ";
	cin >> valor;
//  ler intervalo do teclado
	cout << endl << "Posicao inicial: ";
	cin >> inicio;
	cout << endl << "Posicao final: ";
	cin >> fim;
//  testar se intevalo e' valido
	if ( inicio >= fim || inicio < 0 || inicio >= tamanho - 1 || fim < 1 || fim > tamanho - 1 )
	{
		cout << endl << "ERRO: Intervalo invalido." << endl;
	}
	else
	{
	//  testar a existencia de determinado valor em um intevalo
		result = int_array.searchInterval ( valor, inicio, fim );	
	//  mostrar resultado
		if ( result )
		{
			cout << endl << "O valor procurado esta' dento do intervalo." << endl;
		}
		else
		{
			cout << endl<< "O valor procurado nao esta' dentro do intervalo." << endl;
		}
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_18 ( )

/**
  Method_19.
 */

void method_19 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
//	int* novo = nullptr;
	Array <int> novo (1, 0);
	int constante = 0;
	int inicio = 0;
	int fim = 0;
// identificar
	cout << endl << "Method_18 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
	int tamanho = int_array.getLength();
//  mostrar arranjo
	int_array.print();
//  ler constante do teclado
	cout << endl << "Constante: ";
	cin >> constante;
//  ler intervalo do teclado
	cout << endl << "Posicao inicial: ";
	cin >> inicio;
	cout << endl << "Posicao final: ";
	cin >> fim;
//  testar se intevalo e' valido
	if ( inicio >= fim || inicio < 0 || inicio >= tamanho - 1 || fim < 1 || fim > tamanho - 1 )
	{
		cout << endl << "ERRO: Intervalo invalido." << endl;
	}
	else
	{
	//  escalar dados em arranjo entre duas posicoes
		novo = int_array.scalar ( constante, inicio, fim );	
	//  mostrar resultado
		cout << endl << "Arranjo resultante" << endl;
		novo.print();		
	}
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_19 ( )

/**
  Method_20.
 */

void method_20 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
// identificar
	cout << endl << "Method_20 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  mostrar arranjo antes
	cout << endl << "Arranjo Original" << endl;
	int_array.print();
//  colocar valores do arranjo em ordem decrescente
	int_array.sortDown();
//  mostrar arranjo resultante
	cout << endl << "Arranjo Decrescente" << endl;
	int_array.print();
//  reciclar espaco
	int_array.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_20 ( )

void method_e1 ( )
{
//  definir dados 
	Array <int> int_array (1, 0);
	Array <int> copy (1, 0);
// identificar
	cout << endl << "Method_e1 - v0.0" << endl;
//  ler arranjo de arquivo
	int_array.fread ( "DADOS.TXT" );
//  copiar arranjo
	copy = int_array;
//  mostrar arranjo original
	cout << endl << "Arranjo Original" << endl;
	int_array.print();
//  mostrar arranjo copia
	cout << endl << "Arranjo Copia" << endl;
	copy.print();
//  mostrar a comparacao
	cout << "Desigualdade = " << (int_array != copy) << endl;
//  reciclar espaco
	int_array.free();
	copy.free();
// encerrar
	pause ( "Apertar ENTER para continuar" );	
} // end method_e1 ( )

void method_e2 ( )
{
//  definir dados
	Array <int> int_array1 ( 1, 0 );
	Array <int> int_array2 ( 1, 0 );
	Array <int> diferenca ( 1, 0 );
//  identificar
	cout << endl << "Method_e2 - v0.0" << endl;
//  ler dados
	int_array1.fread ( "DADOS.TXT" );
//  copiar dados
	int_array2 = int_array1;
//  subtrair dados
	diferenca = int_array2 - int_array1;
//  mostrar dados
	cout << endl;
	cout << "Original" << endl;
	int_array1.print ( );
//  mostrar dados
	cout << "Copia" << endl;
	int_array2.print ( );
//  mostrar dados
	cout << "diferenca" << endl;
	diferenca.print ( );
//  reciclar espaco
	int_array1.free ( );
	int_array2.free ( );
	diferenca.free ( );
//  encerrar
	pause ( "Apertar ENTER para continuar" );	
} // end method_e2 ( )

// ----------------------------------------------- acao principal

/*
Funcao principal.
@return codigo de encerramento
*/

int main ( int argc, char** argv )
{
// definir dado
	int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
	do
	{
		// identificar
		cout << "EXERCICIOS - Programa - v0.0\n " << endl;
		// mostrar opcoes
		cout << "Opcoes " << endl;
		cout << " 0 - parar " << endl;
		cout << " 11 - Method_11" << endl;
		cout << " 12 - Method_12" << endl;
		cout << " 13 - Method_13" << endl;
		cout << " 14 - Method_14" << endl;
		cout << " 15 - Method_15" << endl;
		cout << " 16 - Method_16" << endl;
		cout << " 17 - Method_17" << endl;
		cout << " 18 - Method_18" << endl;
		cout << " 19 - Method_19" << endl;
		cout << " 20 - Method_20" << endl;
		cout << " 1 - Method_e1" << endl;
		cout << " 2 - Method_e2" << endl;
		// ler do teclado
		cout << endl << "Entrar com uma opcao: ";
		cin >> x;
		// escolher acao
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
			case 1: method_e1 ( ); break;
			case 2: method_e2 ( ); break;
		default:
			cout << endl << "ERRO: Valor invalido." << endl;
		} // end switch
	}
	while ( x != 0 );
// encerrar
	pause ( "Apertar ENTER para terminar" );
	return ( 0 );
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
