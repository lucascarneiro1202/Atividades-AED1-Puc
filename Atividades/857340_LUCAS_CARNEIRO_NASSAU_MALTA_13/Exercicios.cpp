/*
Exercicios1300 - v0.0. - 29 / 05 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- definicoes globais

// ----------------------------------------------- classes / pacotes

using namespace std;

#include "Contato.hpp"
#include "Erro.hpp"

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
//  definir dados
	ref_Contato contato = new Contato ();
// identificar
	cout << "\nMethod_11 - v0.0\n" << endl;
//  chamar procedimento para ler nome do contado do teclado
	contato->readName ( "Nome: " );
//  testar se o nome existe
	contato->nameExists();
//  mostrar resultado
	if ( contato->getErro() == 1 )
		cout << "Nome tem erro (" << contato->getErro() << ")" << endl;
	else
		cout << "Nome = " << contato->getNome() << endl;
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_11 ( )

/**
  Method_12.
 */

void method_12 ( )
{
//  definir dados
	ref_Contato contato = new Contato ();
// identificar
	cout << "\nMethod_12 - v0.0\n" << endl;
//  chamar procedimento para ler telefone do contado do teclado
	contato->readPhone ( "Telefone: " );
//  testar se o telefone existe
	contato->phoneExists();
//  mostrar resultado
	if ( contato->getErro() == 2 )
		cout << "Telefone tem erro (" << contato->getErro() << ")" << endl;
	else
		cout << "Telefone = " << contato->getFone() << endl; 
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_12 ( )

/**
  Method_13.
 */

void method_13 ( )
{
//  definir dados
	ref_Contato contato = new Contato ();
// identificar
	cout << "\nMethod_13 - v0.0\n" << endl;
//  chamar procedimento para ler telefone do contado do teclado
	contato->readPhone ( "Telefone: " );
//  testar se o telefone existe
	contato->phoneExists();
//  testar o erro
	if ( contato->getErro() == 1 )
		cout << "Telefone tem erro (" << contato->getErro() << ")" << endl;
	else
	{
	//  testar se o telefone e' valido
		contato->testPhone();
	//  testar o erro
		if ( contato->getErro() == 4 )
			cout << "Telefone tem erro (" << contato->getErro() << ")" << endl;
		else
			cout << "Telefone = " << contato->getFone() << endl; 
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_13 ( )

/**
  Method_14.
 */

void method_14 ( )
{
//  definir dados
	ref_Contato contato = new Contato();
// identificar
	cout << endl << "Method_14 - v0.0" << endl;
//  ler contato de arquivo
	contato->fread("Pessoa1.txt");
//  testar contato
	contato->testNamePhonePhone2();
//  mostrar contato
	if ( contato->getErro() == 0 )
		cout << "\nPessoa 1 = " << contato->toString() << endl;
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_14 ( )

/**
  Method_15.
 */

void method_15 ( )
{
//  definir dados
	ref_Contato contato = new Contato();
	ref_Contato contato_arquivo = new Contato();
//  identificar
	cout << endl << "Method_15 - v0.0" << endl;
//  ler do teclado
	contato->readName("\nNome: ");
	contato->readPhone("Telefone: ");
//  testar contato
	contato->testNamePhonePhone2();
//  testar se contato e' valido
	if ( contato->getErro() == 0 )
	{
	//  mostrar contato
		cout << "\nPessoa 1 = " << contato->toString() << endl;
	//  gravar em arquivo
		contato->fprint("Pessoa1.txt");
	//  ler de arquivo
		contato_arquivo->fread("Pessoa1.txt");
	//  mostrar contato copia
		cout << "\nPessoa 1 (copia) = " << contato_arquivo->toString() << endl;
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_15 ( )

/**
  Method_16.
 */

void method_16 ( )
{
//  definir dados locais
	ref_Contato contato1 = new Contato ();
	ref_Contato contato2 = new Contato ( "Luisa", "91111-2222" );
	ref_Contato contato3 = new Contato ( "Lucas", "93333-4444", "95555-6666" );
	ref_Contato contato4 = new Contato ( *contato2 );
	ref_Contato contato5 = new Contato ( *contato3 );
// identificar
	cout << endl << "Method_16 - v0.0" << endl;
//  mostrar atribuicoes
	cout << "\nPessoa 1 = " << contato1->toString() << endl;
	cout << "\nPessoa 2 = " << contato2->toString() << endl;
	cout << "\nPessoa 3 = " << contato3->toString() << endl;
	cout << "\nPessoa 2 (copia) = " << contato4->toString() << endl;
	cout << "\nPessoa 3 (copia) = " << contato5->toString() << endl;
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_16 ( )

/**
  Method_17.
 */

void method_17 ( )
{
//  definir dados locais
	ref_Contato contato1 = new Contato ( "Lucas", "91111-2222" );
	ref_Contato contato2 = new Contato ( "Luisa", "93333-4444", "5555-6666" );
	int n = 0;
	int m = 0;
// identificar
	cout << endl << "Method_17 - v0.0" << endl;
//  ler quantidade de telefones
	n = contato1->getPhones();
	m = contato2->getPhones();
//  mostrar resultado
	cout << "\nPessoa 1 = " << contato1->toString() << endl;
	cout << "Phones = " << n << endl;
	cout << "\nPessoa 2 = " << contato2->toString() << endl;
	cout << "Phones = " << m << endl;
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_17 ( )

/**
  Method_18.
 */

void method_18 ( )
{
//  definir dados
	ref_Contato contato1 = new Contato();
	string resposta = "";
	bool teste = false;
//  identificar
	cout << endl << "Method_18 - v0.0" << endl;
//  ler do teclado
	contato1->readName( "\nNome: " );
	contato1->readPhone( "Telefone: " );
//  testar se contato e' valido
	contato1->testNamePhonePhone2();
	if ( contato1->getErro() == 0 )
	{
	//  ler do teclado
		cout << "Gostaria de acrescentar mais um numero? (Sim/Nao) ";
		cin >> resposta;
	//  associar resposta
		if ( resposta == "Sim" ) 
			teste = true;
		else 
			teste = false;
	//  testar resposta
		if ( !teste )
			cout << "\nContato = " << contato1->toString() << endl;
		else
		{
		//  ler do teclado
			contato1->readPhone2( "\nTelefone 2: " );
		//  mostrar resposta
			cout << "Contato = " << contato1->toString() << endl;
		}
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
	ref_Contato contato = new Contato ();
	string telefone2 = "";
// identificar
	cout << endl << "Method_19 - v0.0" << endl;
//  ler do teclado
	contato->readName( "\nNome: " );
	contato->readPhone( "Telefone: " );
//  mostrar contato
	cout << "Contato (antes) = " << contato->toString() << endl;
//  ler do teclado
	cout << "\nNovo Telefone 2: ";
	cin  >> telefone2;
//  alterar o segundo telefone
	contato->setFone2(telefone2);
//  testar o fone2
	contato->testPhone2();
//  testar erro
	if ( contato->getErro() == 0 )
	{
	//  mostrar contato
		cout << "\nContato (depois) = " << contato->toString() << endl;	
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_19 ( )

/**
  Method_20.
 */

void method_20 ( )
{
//  definir dados
	ref_Contato contato = new Contato ();
// identificar
	cout << endl << "Method_20 - v0.0" << endl;
//  ler do teclado
	contato->readName( "\nNome: " );
	contato->readPhone( "Telefone: " );
	contato->readPhone2( "Telefone 2: " );
//  testar se contato e' valido
	contato->testNamePhonePhone2();
	if ( contato->getErro() == 0 )
	{
	//  mostrar contato
		cout << "Contato (antes) = " << contato->toString() << endl;
	//  remover o segundo telefone
		contato->removeFone2();
	//  mostrar contato
		cout << "\nContato (depois) = " << contato->toString() << endl;		
	}
// encerrar
	pause ( "Apertar ENTER para continuar" );
} // end method_20 ( )

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
