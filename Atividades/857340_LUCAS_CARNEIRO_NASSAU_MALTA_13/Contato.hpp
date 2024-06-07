/*
Contato.hpp - v0.0. - 28 / 05 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// ----------------------------------------------- definicoes globais

#ifndef _CONTATO_H_
#define _CONTATO_H_

// dependencias

#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo

// outras dependencias

void pause ( std::string text )
{
	std::string dummy;
	std::cin.clear ( );
	std::cout << std::endl << text;
	std::cin.ignore( );
	std::getline(std::cin, dummy);
	std::cout << std::endl << std::endl;
} // end pause ( )

#include "Erro.hpp"

// ---------------------------------------------- definicao de classe

/*
  Classe para tratar contatos, derivada da classe Erro.
*/
class Contato : public Erro
{
	/*
		atributos privados.
	*/
	private:
		string nome;
		string fone;
		string fone2;
		int phones;
//  procedimento para testar se o nome do contato e' valido
	void validName ()
	{
	//  definir dados locais
		bool controle = true;
	//  valor inicial
		int x = 0;
	//  condicao
		while ( x < getNome().length() && controle )
		{
		//  definir dados locais
			char caractereLocal = this->getNome().at(x);
		//  testar se e' valido
			controle = ( 'a' <= caractereLocal && caractereLocal <= 'z' ) || ( 'A' <= caractereLocal && caractereLocal <= 'Z' );
		//  variacao
			x++;
		}
	//  definir erro
		if ( !controle )
		{
			setErro(4);
			cout << "\nErro = " << getErro() << endl;
		}
	} // end testPhone ( )
//  procedimento para testar se o telefone do contato e' valido
	void validPhone ()
	{
	//  definir dados locais
		bool controle = true;
	//  valor inicial
		int x = 0;
	//  condicao
		while ( x < getFone().length() && controle )
		{
		//  definir dados locais
			char caractereLocal = this->getFone().at(x);
		//  testar se e' valido
			controle = ( '0' <= caractereLocal && caractereLocal <= '9' ) || caractereLocal == '-';
		//  variacao
			x++;
		}
		//  definir erro
		if ( !controle )
		{
			setErro(5);
			cout << "\nErro = " << getErro() << endl;
		}
	} // end validPhone ( )
//  procedimento para testar se o telefone secundario do contato e' valido
	void validPhone2 ()
	{
	//  definir dados locais
		bool controle = true;
	//  valor inicial
		int x = 0;
	//  condicao
		while ( x < getFone2().length() && controle )
		{
		//  definir dados locais
			char caractereLocal = this->getFone2().at(x);
		//  testar se e' valido
			controle = ( '0' <= caractereLocal && caractereLocal <= '9' ) || caractereLocal == '-';
		//  variacao
			x++;
		}
	//  definir erro
		if ( !controle )
		{
			setErro(6);
			cout << "\nErro = " << getErro() << endl;
		}
	} // end validPhone2 ( )
	/**
	 * definicoes publicas.
	 */
	public:
		/**
		 * Destrutor.
		 */
		~Contato ( )
		{ }
	
		/**
		 * Construtor padrao.
		 */
		Contato ( )
		{
			setErro ( 0 ); // nenhum erro, ainda
		// atribuir valores iniciais vazios
			nome = "";
			fone = "";
			fone2 = "";
			phones = 0;
		} // end constructor (padrão)
	
// ----------------------------------- metodos para acesso

	/**
	 * Metodo para atribuir nome.
	 * @param nome a ser atribuido
	 */
	void setNome ( std::string nome )
	{
		if ( nome.empty() )
			setErro(1); // nome invalido
		else
			this->nome = nome;
	} // end setNome ( )
	
	/**
	 * Metodo para atribuir telefone.
	 * @param fone a ser atribuido
	 */
	void setFone ( std::string fone )
	{
		if ( fone.empty() )
			setErro(2); // fone invalido
		else
			this->fone = fone;
	} // end setFone ( )
	
	/**
	 * Metodo para atribuir telefone secundario.
	 * @param fone a ser atribuido
	 */
	void setFone2 ( std::string telefone )
	{
		if ( fone.empty() )
			setErro(3); // fone invalido
		else
			fone2 = telefone;	
	} // end setFone2 ( )
	
	/**
	 * Funcao para obter nome.
	 * @return nome armazenado
	 */
	std::string getNome ( )
	{
		return ( this->nome );
	} // end getNome ( )
	
	/**
	 * Funcao para obter fone.
	 * @return fone armazenado
	 */
	std::string getFone ( )
	{
		return ( this->fone );
	} // end getFone ( )
	
	/**
	 * Funcao para obter fone secundario.
	 * @return fone armazenado
	 */
	std::string getFone2 ( )
	{
		return ( this->fone2 );
	} // end getFone2 ( )
	
	/**
	 * Funcao para obter dados de uma pessoa.
	 * @return dados de uma pessoa
	 */
	std::string toString ( )
	{
	//  definir dados locais
		string s = "";
	//  testar quantidade de telefones
		if ( getPhones() == 1 )
			s = "{ "+getNome( )+", "+getFone( )+" }";
		else
		{
			if ( getPhones() == 2 )
				s = "{ "+getNome( )+", "+getFone( )+", "+getFone2( )+" }";
			else
			{
				setErro(7);
				s = "Telefone(s) invalido(s)";	
			}
		}
		return ( s );
	} // end toString ( )
	
	/**
	 * Construtor alternativo.
	 * @param nome_inicial a ser atribuido
	 * @param fone_inicial a ser atribuido
	 */
	Contato ( std::string nome_inicial, std::string fone_inicial )
	{
		setErro ( 0 ); // nenhum erro, ainda
	// atribuir valores iniciais
		setNome ( nome_inicial ); // nome = nome_inicial;
		setFone ( fone_inicial ); // fone = fone_inicial;
		setPhones();
	} // end constructor (alternativo)
	
	/**
	 * Construtor alternativo alternativo.
	 * @param nome_inicial a ser atribuido
	 * @param fone_inicial a ser atribuido
	 * @param fone_secundario a ser atribuido
	 */
	Contato ( std::string nome_inicial, std::string fone_inicial, std::string fone_secundario )
	{
		setErro ( 0 ); // nenhum erro, ainda
	// atribuir valores iniciais
		setNome ( nome_inicial ); // nome = nome_inicial;
		setFone ( fone_inicial ); // fone = fone_inicial;
		setFone2 ( fone_secundario ); // fone2 = fone_secundario;
		setPhones();
	} // end constructor (alternativo)
	
	/**
	 * indicar a existencia de erro.
	 */
	bool hasErro ( )
	{
		return ( getErro( ) != 0 );
	} // end hasErro ( )
	
	/**
	 * Construtor alternativo baseado em copia.
	 */
	Contato ( Contato const & another )
	{
	// atribuir valores iniciais por copia
		setErro ( 0 ); // copiar erro
		setNome ( another.nome ); // copiar nome
		setFone ( another.fone ); // copiar fone
		setFone2 ( another.fone2 ); // copiar fone2
	} // end constructor (alternativo)
	
// ----------------------------------- metodos do exercicio
	
//  procedimento para ler nome do contato do teclado
	void readName ( string s )
	{
	//  mostrar na tela
		cout << s;
	//  ler do teclado
		cin >> nome;
		cout << endl;
	} // end readName ( )
//  procedimento para testar o nome do contato
	void nameExists ()
	{
	//  testar se o nome nao esta vazio
		if ( nome != "" )
			setErro(0);
		else
			setErro(1);
	} // end nameExists ( )
//  procedimento para ler telefone do contato do teclado
	void readPhone ( string s )
	{
	//  mostrar na tela
		cout << s;
	//  ler do teclado
		cin >> fone;
		cout << endl;
	} // end readPhone ( )
//  procedimento para testar o telefone do contato
	void phoneExists ()
	{
	//  testar se o telefone nao esta vazio
		if ( fone != "" )
			setErro(0);
		else
			setErro(2);
	} // end phoneExists ( )
//  procedimento para ler telefone secundario do contato do teclado
	void readPhone2 ( string s )
	{
	//  mostrar na tela
		cout << s;
	//  ler do teclado
		cin >> fone2;
		cout << endl;
	} // end readPhone ( )
//  procedimento para testar o telefone secundario do contato
	void phone2Exists ()
	{
	//  testar se o telefone nao esta vazio
		if ( fone2 != "" )
			setErro(0);
		else
			setErro(3);
	} // end phoneExists ( )
//  procedimento para chamar outro procedimento privado
	void testPhone ()
	{
		validPhone();
	} // end testPhone ( )
//  procedimento para chamar outro procedimento privado
	void testPhone2 ()
	{
		validPhone2();
	} // end testPhone ( )
//  procedimento para ler dados de arquivo
	void fread ( string nameFile )
	{
	//  definir dados locais
		ifstream file;
		int quantidade = 0;
		string nome;
		string telefone;
	//  abrir arquivo
		file.open (nameFile);
	//  ler a quantidade
		file >> quantidade;
	//  testar quantidade
		if ( quantidade <= 0 )
			setErro(8);
		else
		{
		//  ler o nome
			file >> nome; setNome(nome);
		//  ler o telefone
			file >> telefone; setFone(telefone);
		}
	//  fechar arquivo
		file.close();		
	}
//  procedimento para testar se nome e telefone sao validos
	void testNamePhonePhone2 ()
	{
		validName();
		validPhone();
		validPhone2();
	}
//  procedimento para gravar dados em arquivo
	void fprint ( string nameFile )
	{
	//  definir dados locais
		ofstream file;
	//  abrir arquivo
		file.open (nameFile);
	//  gravar a quantidade
		file << 2 << endl;
	//  gravar o nome
		file << getNome() << endl;
	//  gravar o telefone
		file << getFone() << endl;
	//  fechar arquivo
		file.close ();
	} // end fprint ( )
//  funcao para obter a quantidade de telefones associados a cada objeto
	int getPhones ()
	{
		setPhones();
		return ( phones );
	} // end getPhones ( )
//  procedimento para atribuir a quantidade de telefones associados a cada objeto
	void setPhones ()
	{
	//  definir dados locais
		int x = 0;
	//  testar se fone existe
		if ( fone != "" )
			x++;
	//  testar se fone2 existe
		if ( fone2 != "" )
			x++;
	//  atribuir quantidade
		phones = x;
	} // end setPhones ( )
//  procedimento para remover o telefone secundario
	void removeFone2 ()
	{
	//  apagar o fone2
		setFone2( "" );
	//  atualizar o Phones
		setPhones();
	} // end removeFone2 ( )
}; // fim da classe Contato

using ref_Contato = Contato*; // similar a typedef Contato* ref_Contato;
#endif
