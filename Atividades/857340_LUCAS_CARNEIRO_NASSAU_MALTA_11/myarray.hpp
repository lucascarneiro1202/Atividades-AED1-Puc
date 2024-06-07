/*
myarray.hpp - v0.0. - 15 / 05 / 2024
Author: Lucas Carneiro Nassau Malta
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_
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
using std::ifstream ; // para ler arquivo
template < typename T >
class Array
{
	private: // area reservada
		T optional;
		int length;
		T *data;
	public: // area aberta
	//  definir array com tamanho n
		Array ( int n, T initial )
		{
		// definir valores iniciais
			optional = initial;
			length = 0;
			data = nullptr;
		// reservar area
			if ( n > 0 )
			{
				length = n;
				data = new T [ length ];
			}
		} // end constructor
	//  liberar o espaco do objeto
		void free ( )
		{
			if ( data != nullptr )
			{
				delete ( data );
				data = nullptr;
			} // end if
		} // end free ( )
	//  atribuir valor 'a posicao especificada
		void set ( int position, T value )
		{
			if ( 0 <= position && position < length )
			{
				data [ position ] = value;
			} // end if
		} // end set ( )
	//  receber o valor da posicao especificada
		T get ( int position )
		{
			T value = optional;
			if ( 0 <= position && position < length )
			{
				value = data [ position ];
			} // end if
			return ( value );
		} // end get ( )
	//  mostrar objeto na tela
		void print ( )
		{
			cout << endl;
			for ( int x = 0; x < length; x=x+1 )
			{
				cout << setw( 3 ) << x << " : "
				<< setw( 9 ) << data[ x ]
				<< endl;
			} // end for
			cout << endl;
		} // end print ( )
	//  ler objeto do teclado
		void read ( )
		{
			cout << endl;
			for ( int x = 0; x < length; x=x+1 )
			{
				cout << setw( 3 ) << x << " : ";
				cin >> data[ x ];
			} // end for
			cout << endl;
		} // end read ( )
	//  gravar objeto em arquivo
		void fprint ( string fileName )
		{
			ofstream afile; // output file
			afile.open ( fileName );
			afile << length << endl;
			for ( int x = 0; x < length; x=x+1 )
			{
				afile << data[ x ] << endl;
			} // end for
			afile.close ( );
		} // end fprint ( )
	//  ler objeto de arquivo
		void fread ( string fileName )
		{
			ifstream afile; // input file
			int n = 0;
			afile.open ( fileName );
			afile >> n;
			if ( n <= 0 )
			{
				cout << "\nERROR: Invalid length.\n" << endl;
			}
			else
			{
			// guardar a quantidade de dados
				length = n;
			// reservar area
				data = new T [ n ];
			// ler dados
				for ( int x = 0; x < length; x=x+1 )
				{
					afile >> data[ x ];
				} // end for
			} // end if
			afile.close ( );
		} // end fread ( )
	// construtor padrao
		Array ( ) 
		{
		// definir valores iniciais
			length = 0;
		// reservar area
			data = nullptr;
		} // end constructor
	// contrutor baseado em copia
		Array ( int length, int other [ ] )
		{
			if ( length <= 0 )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
			// criar copia
				this->length = length;
			// reservar area
				data = new T [ this->length ];
			// ler dados
				for ( int x = 0; x < this->length; x=x+1 )
				{
					data [ x ] = other [ x ];
				} // end for
			} // end if
		} // end constructor ( )
	//  construtor para criar um objeto a partir de outro existente
		Array ( const Array& other )
		{
			if ( other.length <= 0 )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
			// criar copia
				length = other.length;
			// reservar area
				data = new T [ other.length ];
			// ler dados
				for ( int x = 0; x < length; x=x+1 )
				{
					data [ x ] = other.data [ x ];
				} // end for
			} // end if
		} // end constructor ( )
	// operador para copiar arranjo para outro
		Array& operator= ( const Array <T> other )
		{
			if ( other.length <= 0 )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
				this->length = other.length;
				this->data = new T [ other.length ];
				for ( int x = 0; x < this->length; x=x+1 )
				{
					data [ x ] = other.data [ x ];
				} // end for
			} // end if
			return ( *this );
		} // end operator= ( )
	//  testar a igualdade de dois arranjos, posicao por posicao
		bool operator== ( const Array <T> other )
		{
			bool result = false;
			int x = 0;
			if ( other.length == 0 || length != other.length )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
				x = 0;
				result = true;
				while ( x < this->length && result )
				{
					result = result && (data [ x ] == other.data [ x ] );
					x = x + 1;
				} // end while
			} // end if
			return ( result );
		} // end operator== ( )
	//  somar valores em dois arranjos, posicao por posicao
		Array& operator+ ( const Array <T> other )
		{
			static Array <T> result ( other );
			if ( other.length <= 0 )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
				for ( int x = 0; x < this->length; x=x+1 )
				{
					result.data [ x ] = result.data [ x ] + this->data [ x ];
				} // end for
			} // end if
			return ( result );
		} // end operator+ ( )
	//  acesso ao tamanho
		const int getLength ( )
		{
			return ( length );
		} // end getLength ( )
	//  acesso 'a posicao
		T& operator[]( const int position )
		{
			static T value = optional;
			if ( position < 0 || length <= position )
			{
				cout << endl << "\nERROR: Invalid position.\n" << endl;
			}
			else
			{
				value = data [ position ];
			} // end if
			return ( value );
		} // end operator [ ]
	//  gerar numero aleatorio dentro do intervalo
		int randomIntGenerate ( int inferior, int superior )
		{
		//  definir dados locais
			int x = 0;
		//  gerar aleatorio
			x = rand() % ( superior - inferior + 1 ) + inferior;
		//  retornar
			return ( x );
		} // end randomIntGenerate ( )
	//  encontrar o maior valor par em arranjo
		int largestEven ()
		{
		//  definir dados locais
			int maior = 0;
			int tamanho = this->getLength();
			bool controle = false;
		//  encontrar o primeiro par
			int x = 0;
			while ( x < tamanho && !controle )
			{
			//  testar se e' par
				if ( this->get(x) % 2 == 0 )
				{
					controle = true;
					maior = this->get(x);
				}
			//  variacao
				x += 1;
			}
		//  passar por cada valor a partir do encontrado anteriormente
			while ( x < tamanho && controle )
			{			
			//  definir dados locais
				int numero = this->get(x);
			//  testar se e' par
				if ( numero % 2 == 0 )
				{
				//  testar se e' maior que o anterior
					if ( numero > maior )
					{
						maior = numero;
					}
				}
			//  variacao
				x += 1;
			}
		//  testar se nao houve par
			if ( !controle )
			{
				maior = -1;
			}
		//  retornar
			return ( maior );
		} // end largestOdd ( )
	//  encontrar o menor valor impar multiplo de 3 em um arranjo
		int smallestOddx3 ()
		{
		//  definir dados locais
			int menor = 0;
			int tamanho = this->getLength();
			bool controle = false;
		//  encontrar o primeiro impar multiplo de 3
			int x = 0;
			while ( x < tamanho && !controle )
			{
			//  definir dados locais
				int numero = this->get(x);
			//  testar se e' multiplo de 3
				if ( numero % 3 == 0 )
				{
				//  testar se ' impar
					if ( numero % 2 != 0 )
					{
						controle = true;
						menor = numero;
					}
				}
			//  variacao
				x += 1;
			}
		//  passar por cada valor a partir do encontrado anteriormente
			while ( x < tamanho && controle )
			{			
			//  definir dados locais
				int numero = this->get(x);
			//  testar se e' multiplo de 3
				if ( numero % 3 == 0 )
				{
				//  testar se e' impar
					if ( numero % 2 != 0 )
					{
					//  testar se e' menor que o anterior
						if ( numero < menor )
						{
							menor = numero;
						}	
					}				
				}
			//  variacao
				x += 1;
			}
			//  testar se nao houve par
			if ( !controle )
			{
				menor = 0;
			}
			//  retornar
			return ( menor );
		} // end smallestOddx3 ( )
	//  somar todos os valores entre um determinado intervalo
		int addInterval ( int inicio, int fim )
		{
		//  definir dados locais
			int soma = 0;
		//  passar por cada posicao
			for ( int x = inicio; x <= fim; x++ )
			{
				soma += this->get(x);
			}
		//  retornar
			return (soma);
		} // end addInterval ( )
	//  calcular a media dos valores entre um determinado intervalo
		double averageInterval ( int inicio, int fim )
		{
		//  definir dados locais
			double media = 0.0;
			int soma = 0;
		//  calcular a soma de todos os valores
			soma = this->addInterval ( inicio, fim );
		//  calcular a media
			media = 1.0 * soma / ( fim - inicio + 1 );
		//  retornar
			return ( media );
		} // end averageInterval ( )
//  testar se todos os valores do arranjo sao negativos
		bool negatives ()
		{
		//  definir dados locais
			bool result = true;
		//  valor inicial
			int x = 0;
		//  condicao
			while ( x < this->getLength() && result )
			{
			//  testar
				result = this->get(x) < 0;
			//  variacao
				x++;
			}
		//  retornar
			return ( result );
		} // end negatives ( )
	//  testar se o arranjo esta' ordenado em ordem crescente
		bool isCrescent ()
		{
		//  definir dados locais
			bool result = true;
			int anterior = 0;
			int atual = 0;
		//  separar o primeiro
			anterior = this->get(0);
		//  valor inicial
			int x = 1;
		//  condicao
			while ( x < this->getLength() && result )
			{
			//  reservar atual
				atual = this->get(x);
			//  testar se o atual e' maior que o anterior
				result = atual >= anterior;
			//  variacao
				x++;
			}
		//  retornar
			return ( result );
		} // end isCrescent ( )
	//  testar a existencia de um determinado valor em um determinado intervalo
		bool searchInterval ( int valor, int inicio, int fim )
		{
		//  definir dados locais
			bool result = true;
		//  valor inicial
			int x = inicio;
		//  condicao
			while ( x <= fim  && result )
			{
			//  testar
				result = valor != this->get(x);
			//  variacao
				x++;
			}
		//  retornar
			return ( !result );			
		} // end searchInterval ( )
	//  escalar dados de arranjo entre duas posicoes
		Array scalar ( int constante, int inicio, int fim )
		{
		//  definir dados locais
			int tamanho = fim - inicio + 1;
			Array <int> novo (tamanho, 0);
			int x = 0;
		//  passar por todas as posicoes
			for ( int y = inicio; y <= fim; y++ )
			{
			//  escalar valor e guardar no novo objeto
				novo.set ( x, this->get(y) * constante );
			//  variacao
				x++;
			}
		//  retornar
			return ( novo );
		} // end scalar ( )
	//  colocar valores de arranjo em ordem decrescente	
		void sortDown ()
		{
		//  definir dados locais
			int anterior = 0;
			int atual = 0;
			int tamanho = this->getLength();
			int contadorNaoTroca = 0;
		//  valor inicial
			int x = 1;
			int y = 1;
			bool controle = true;
		//  condicao
			while ( x < tamanho && controle )
			{
			//  valor inicial
				y = 1;
				contadorNaoTroca = 0;
			//  condicao
				while ( y < tamanho && controle )
				{
				//  separar o anterior e o atual
					anterior = this->get(y-1);
					atual = this->get(y);
				//  testar se troca de posicao e' necessaria
					if ( anterior < atual )
					{
					// trocar de posicao
						set (y-1, atual);
						set (y, anterior);
					}
					else
					{
						contadorNaoTroca++;
					//  testar o contadorNaoTroca
						if ( contadorNaoTroca == tamanho - 1 )
						{
							controle = false;
						}
					}
				//  variacao
					y++;
				}			
			//  variacao
				x++;
			}
		}
	//  testar a desigualdade de dois arranjos, posicao por posicao
		bool operator!= ( const Array <T> other )
		{
			bool result = false;
			int x = 0;
			if ( other.length == 0 || length != other.length )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
				x = 0;
				result = true;
				while ( x < this->length && result )
				{
					result = result && (data [ x ] != other.data [ x ] );
					x = x + 1;
				} // end while
			} // end if
			return ( result );
		} // end operator!= ( )
	//  subtrair valores em dois arranjos, posicao por posicao
		Array& operator- ( const Array <T> other )
		{
			static Array <T> result ( other );
			if ( other.length <= 0 )
			{
				cout << "\nERROR: Missing data.\n" << endl;
			}
			else
			{
				for ( int x = 0; x < this->length; x=x+1 )
				{
					result.data [ x ] = result.data [ x ] - this->data [ x ];
				} // end for
			} // end if
			return ( result );
		} // end operator- ( )
};
#endif
