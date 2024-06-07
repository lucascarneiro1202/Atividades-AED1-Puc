/*
Exercicios1200 - v0.0. - 24 / 05 / 2024
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

#include "mymatrix.hpp"
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
  Method_01
 */

void method_11 ( )
{
//  definir dados 
	int m = 0;
	int n = 0;
// identificar
	cout << "\nMethod_11 - v0.0\n" << endl;
//  ler do teclado
	cout << endl << "Linhas: ";
	cin >> m;
	cout << endl << "Colunas: ";
	cin >> n;
//  testar se linhas e colunas sao validas
	if ( m <= 0 || n <= 0 )
	{
		cout << endl << "ERRO: Linhas ou colunas invalidas." << endl;
	}
	else
	{
	//  definir objeto
		Matrix <int> matrix (m, n, 0);
		//  preencher matriz com numeros aleatorios
		for ( int x = 0; x < matrix.getRows(); x++ )
		{
			for ( int y = 0; y < matrix.getColumns(); y++ )
			{
				matrix.set ( x, y, matrix.randomIntGenerate(1, 100) );
			}
		}
	//  mostrar matriz resultante
		matrix.print();
	//  gravar matriz em arquivo
		matrix.fprint("DADOS.TXT");
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_11 ( )

/**
  Method_12.
 */

void method_12 ( )
{
//  definir dados
	Matrix <int> matrix1 (1, 1, 0);
	Matrix <int> matrix2 (1, 1, 0);
	int constante = 0;
// identificar
	cout << endl << "Method_12 - v0.0" << endl;
//  ler do teclado
	cout << endl << "Constante: ";
	cin >> constante;
	cout << endl;
//  ler matriz de arquivo
	matrix1.fread ("DADOS.TXT");
//  escalar matriz 1
	matrix2 = matrix1.scalar ( constante );
//  mostrar resultado
	cout << "\nMatriz 1\n" << endl;
	matrix1.print();
	cout << "\nMatriz 2 (x" << constante << ")\n" << endl;
	matrix2.print();
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_12 ( )

/**
  Method_13.
 */

void method_13 ( )
{
//  definir dados
	Matrix <int> matrix (1, 1, 0);
	bool teste = false;
//  identificar
	cout << endl << "Method 13 - v0.0" << endl;
//  ler matriz de arquivo
	matrix.fread ( "DADOS.TXT" );
//  mostrar matriz
	matrix.print();
//  testar se a matriz e' a identidade
	teste = matrix.identidade();
//  mostrar resultado
	cout << "\nIdentidade = " << teste << endl;
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_13 ( )

/**
  Method_14.
 */

void method_14 ( )
{
//  definir dados
	Matrix <int> matrix1 (1, 0, 0);
	Matrix <int> matrix2 (1, 0, 0);
	bool result = false;
//  identificar
	cout << endl << "Method_14 - v0.0" << endl;
//  ler matrizes de arquivos
	matrix1.fread("DADOS1.TXT");
	matrix2.fread("DADOS2.TXT");
//  mostrar matrizes
	cout << "\nMatriz 1\n" << endl;
	matrix1.print();
	cout << "\nMatriz 2\n" << endl;
	matrix2.print();
//  testar a igualdade
	result = matrix1 == matrix2;
//  mostrar resultado
	cout << "\nIgualdade = " << result << endl;
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_14 ( )

/**
  Method_15.
 */

void method_15 ( )
{
//  definir dados
	Matrix <int> matrix1 (1, 0, 0);
	Matrix <int> matrix2 (1, 0, 0);
	Matrix <int> soma (1, 0, 0);
//  identificar
	cout << endl << "Method_15 - v0.0" << endl;
//  ler matrizes de arquivos
	matrix1.fread("DADOS1.TXT");
	matrix2.fread("DADOS2.TXT");
//  testar se soma e' possivel
	if ( matrix1.getRows() != matrix2.getRows() || matrix1.getColumns() != matrix2.getColumns() )
	{
		cout << "\nERRO: Linhas e/ou colunas invalidas\n" << endl;
	}
	else
	{
	//  somar as duas matrizes
		soma = matrix1.add (matrix2);
	//  mostrar matrizes
		cout << "\nMatriz 1\n" << endl;
		matrix1.print();
		cout << "\nMatriz 2\n" << endl;
		matrix2.print();
		cout << "\nMatriz Soma\n" << endl;
		soma.print();	
	}
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_15 ( )

/**
  Method_16.
 */

void method_16 ( )
{
//  definir dados
	Matrix <int> matrix1 (1, 0, 0);
	int constante = 0;
	int linha1 = 0;
	int linha2 = 0;
//  identificar
	cout << endl << "Method_16 - v0.0" << endl;
//  ler de arquivo
	matrix1.fread("DADOS.TXT");
//  mostrar matriz
	cout << "\nMatriz Original\n" << endl;
	matrix1.print();
//  ler do teclado
	cout << "\nLinha 1: "; cin >> linha1; cout << endl;
	cout << "\nLinha 2: "; cin >> linha2; cout << endl;
//  testar se linhas sao validas
	if ( linha1 < 0 || linha1 >= matrix1.getRows() ||  linha2 <= linha1 || linha2 >= matrix1.getRows() )
	{
		cout << "\nERRO: Linha(s) invalida(s).\n" << endl;
	}
	else
	{
	//  ler do teclado
		cout << "\nConstante: ";
		cin >> constante; 
		cout << endl;
	//  operar duas linhas da matriz
		matrix1.addRows ( linha1, linha2, constante );
	//  mostrar matriz resultante
		cout << "\nMatriz Resultante\n" << endl;
		matrix1.print();
	}
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_16 ( )

/**
  Method_17.
 */

void method_17 ( )
{
//  definir dados
	Matrix <int> matrix1 (1, 0, 0);
	int constante = 0;
	int linha1 = 0;
	int linha2 = 0;
//  identificar
	cout << endl << "Method_16 - v0.0" << endl;
//  ler de arquivo
	matrix1.fread("DADOS.TXT");
//  mostrar matriz
	cout << "\nMatriz Original" << endl;
	matrix1.print();
//  ler do teclado
	cout << "\nLinha 1: "; cin >> linha1; cout << endl;
	cout << "\nLinha 2: "; cin >> linha2; cout << endl;
//  testar se linhas sao validas
	if ( linha1 < 0 || linha1 >= matrix1.getRows() ||  linha2 <= linha1 || linha2 >= matrix1.getRows() )
	{
		cout << "\nERRO: Linha(s) invalida(s).\n" << endl;
	}
	else
	{
	//  ler do teclado
		cout << "\nConstante: ";
		cin >> constante; 
		cout << endl;
	//  operar duas linhas da matriz
		matrix1.substractRows ( linha1, linha2, constante );
	//  mostrar matriz resultante
		cout << "\nMatriz Resultante" << endl;
		matrix1.print();
	}
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_17 ( )

/**
  Method_18.
 */

void method_18 ( )
{
//  definir dados
	Matrix <int> matrix (1, 0, 0);
	int procurado = 0;
	int linha = 0;
//  identificar
	cout << endl << "Method_18 - v0.0" << endl;
//  ler matriz de arquivo
	matrix.fread ("DADOS.TXT");
//  mostrar matriz
	matrix.print();
//  ler do teclado
	cout << "\nProcurado: ";
	cin >> procurado;
	cout << endl;
//  chamar funcao para dizer em qual linha da matriz se encontra certo valor, se houver
	linha = matrix.searchRows ( procurado );
//  testar resultado
	if ( linha == -1 )
	{
		cout << "\nO valor nao foi encontrado.\n" << endl;
	}
	else
	{
	//  mostrar resultado
		cout << "\nLinha = " << linha << endl;
	}
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_18 ( )

/**
  Method_19.
 */

void method_19 ( )
{
//  definir dados
	Matrix <int> matrix (1, 0, 0);
	int procurado = 0;
	int linha = 0;
//  identificar
	cout << endl << "Method_19 - v0.0" << endl;
//  ler matriz de arquivo
	matrix.fread ("DADOS.TXT");
//  mostrar matriz
	matrix.print();
//  ler do teclado
	cout << "\nProcurado: ";
	cin >> procurado;
	cout << endl;
//  chamar funcao para dizer em qual coluna da matriz se encontra certo valor, se houver
	linha = matrix.searchColumns ( procurado );
//  testar resultado
	if ( linha == -1 )
	{
		cout << "\nO valor nao foi encontrado.\n" << endl;
	}
	else
	{
	//  mostrar resultado
		cout << "\nColuna = " << linha << endl;
	}
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_19 ( )

/**
  Method_20.
 */

void method_20 ( )
{
//  definir dados
	Matrix <int> matrix (1, 0, 0);
//  identificar
	cout << endl << "Method_20 - v0.0" << endl;
//  ler de arquivo
	matrix.fread("DADOS.TXT");
//  mostrar matriz incial
	cout << "\nMatriz inicial" << endl;
	matrix.print();
//  chamar metodo para transpor matriz
	matrix.transpose();
//  mostrar matriz transposta
	cout << "\nMatriz transposta" << endl;
	matrix.print();
//  encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_20 ( )

/*
  Method_e1.
*/

void method_e1 ( )
{
//  definir dados
	Matrix <int> matrix (1, 0, 0);
	bool result = false;
//  identificar
	cout << endl << "Method_e1 - v0.0" << endl;
//  ler de arquivo
	matrix.fread("DADOS.TXT");
//  mostrar matriz
	matrix.print();
//  chamar funcao para dizer se a matriz e' quadrada e tem seus valores em ordem crescente	
	result = matrix.isCharacteristic();
//  mostrar resultado
	cout << "\nCaracteristica = " << result << endl;
//  encerrar
	pause ( "Apertar ENTER para continuar" );	
} // end method_e1 ( )

/*
  Method_e2.
*/

void method_e2 ( )
{
//  definir dados
	Matrix <int> matrix (1, 0, 0);
	int qtd = 0;
//  identificar
	cout << endl << "Method_e2 - v0.0" << endl;
//  ler quantidade de linhas e colunas
	cout << "\nQuantidade de linhas e colunas: "; cin >> qtd;
//  chamar funcao para gerar matriz com determinada caracteristica	
	matrix.characteristic(qtd);
//  mostrar resultado
	matrix.print();
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
	srand(time(0));
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
		cout << "  1 - Method_e1" << endl;
		cout << "  2 - Method_e2" << endl;
		// ler do teclado
		cout << endl << "Entrar com uma opcao: ";
		cin >> x;
		// escolher acao
		switch ( x )
		{
			case 0:  method_00 ( ); break;
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
			case 1:  method_e1 ( ); break;
			case 2:  method_e2 ( ); break;
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
