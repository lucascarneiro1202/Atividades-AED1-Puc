/*
mymatrix.hpp - v0.0. - 21 / 05 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// ----------------------------------------------- definicoes globais

#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_
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
template < typename T >
class Matrix
{
	private: // area reservada
	T optional;
	int rows ;
	int columns;
	T** data ;
	public: // area aberta
//  construtor template
	Matrix ( )
	{
	// definir valores iniciais
		this->rows = 0;
		this->columns = 0;
	// sem reservar area
		data = nullptr;
	} // end constructor
//  construtor 1
	Matrix ( int rows, int columns, T initial )
	{
	// definir dado local
		bool OK = true;
	// definir valores iniciais
		this->optional = initial ;
		this->rows = rows ;
		this->columns = columns;
	// reservar area
		data = new T* [ rows ];
		if ( data != nullptr )
		{
			for ( int x = 0; x < rows; x=x+1 )
			{
				data [x] = new T [ columns ];
				OK = OK && ( data [x] != nullptr );
			} // end for
			if ( ! OK )
			{
				data = nullptr;
			} // end if
		} // end if
	} // end constructor
//  destrutor
	~Matrix ( )
	{
		if ( data != nullptr )
		{
			for ( int x = 0; x < rows; x=x+1 )
			{
				delete ( data [ x ] );
			} // end for
			delete ( data );
			data = nullptr;
		} // end if
	} // end destructor ( )
//  metodo para definir determinado valor em determinada posicao
	void set ( int row, int column, T value )
	{
		if ( row < 0 || row >= rows ||
			column < 0 || column >= columns )
		{
			cout << "\nERROR: Invalid position.\n";
		}
		else
		{
			data [ row ][ column ] = value;
		} // end if
	} // end set ( )
//  funcao para obter valor de determinada posicao
	T get ( int row, int column )
	{
		T value = optional;
		if ( row < 0 || row >= rows ||
			column < 0 || column >= columns )
		{
			cout << "\nERROR: Invalid position.\n";
		}
		else
		{
			value = data [ row ][ column ];
		} // end if
		return ( value );
	} // end get ( )
//  metodo para mostrar matriz na tela
	void print ( )
	{
		cout << endl;
		for ( int x = 0; x < rows; x=x+1 )
		{
			for ( int y = 0; y < columns; y=y+1 )
			{
				cout << data[ x ][ y ] << "\t";
			} // end for
			cout << endl;
		} // end for
		cout << endl;
	} // end print ( )
//  metodo para ler e guardar dados em matriz
	void read ( )
	{
		cout << endl;
		for ( int x = 0; x < rows; x=x+1 )
		{
			for ( int y = 0; y < columns; y=y+1 )
			{
				cout << setw( 2 ) << x << ", "
				<< setw( 2 ) << y << " : ";
				cin >> data[ x ][ y ];
			} // end for
		} // end for
		cout << endl;
	} // end read ( )
//  gravar dados da matriz em arquivo
	void fprint ( string fileName )
	{
		ofstream afile;
		afile.open ( fileName );
		afile << rows << endl;
		afile << columns << endl;
		for ( int x = 0; x < rows; x=x+1 )
		{
			for ( int y = 0; y < columns; y=y+1 )
			{
				afile << data[ x ][ y] << endl;
			} // end for
		} // end for
		afile.close ( );
	} // end fprint ( )
//  ler arquivo e guardar dados na matriz
	void fread ( string fileName )
	{
		ifstream afile;
		int m = 0;
		int n = 0;
		afile.open ( fileName );
		afile >> m;
		afile >> n;
		if ( m <= 0 || n <= 0 )
		{
			cout << "\nERROR: Invalid dimensions for matrix.\n" << endl;
		}
		else
		{
		// guardar a quantidade de dados
			rows = m;
			columns = n;
		// reservar area
			data = new T* [ rows ];
			for ( int x = 0; x < rows; x=x+1 )
			{
				data [x] = new T [ columns ];
			} // end for
		// ler dados
			for ( int x = 0; x < rows; x=x+1 )
			{
				for ( int y = 0; y < columns; y=y+1 )
				{
					afile >> data[ x ][ y ];
				} // end for
			} // end for
		} // end if
		afile.close ( );
	} // end fread ( )
//  metodo de operacao
	Matrix& operator= ( const Matrix <T> &other )
	{
		if ( other.rows == 0 || other.columns == 0 )
		{
			cout << "\nERROR: Missing data.\n" << endl;
		}
		else
		{
			this->rows = other.rows ;
			this->columns = other.columns;
			this->data = new T* [ rows ];
			for ( int x = 0; x < rows; x=x+1 )
			{
				this->data [ x ] = new T [ columns ];
			} // end for
			for ( int x = 0; x < this->rows; x=x+1 )
			{
				for ( int y = 0; y < this->columns; y=y+1 )
				{
					data [ x ][ y ] = other.data [ x ][ y ];
				} // end for
			} // end for
		} // end if
		return ( *this );
	} // end operator= ( )
//  funcao para testar se a matriz so contem zeros
	bool isZeros ( )
	{
		bool result = false;
		int x = 0;
		int y = 0;
		if ( rows > 0 && columns > 0 )
		{
			result = true;
			while ( x < rows && result )
			{
				y = 0;
				while ( y < columns && result )
				{
					result = result && ( data [ x ][ y ] == 0 );
					y = y + 1;
				} // end while
				x = x + 1;
			} // end while
		} // end if
		return ( result );
	} // end isZeros ( )
//  metodo de operacao
	bool operator!= ( const Matrix <T> &other )
	{
		bool result = false;
		int x = 0;
		int y = 0;
		if ( other.rows == 0 || rows != other.rows ||
			other.columns == 0 || columns != other.columns )
		{
			cout << "\nERROR: Missing data.\n" << endl;
		}
		else
		{
			x = 0;
			while ( x < rows && ! result )
			{
				y = 0;
				while ( y < columns && ! result )
				{
					result = ( data [ x ][ y ] != other.data [ x ][ y ] );
					y = y + 1;
				} // end while
				x = x + 1;
			} // end while
		} // end if
		return ( result );
	} // end operator!= ( )
//  metodo de operacao
	Matrix& operator- ( const Matrix <T> &other )
	{
		static Matrix <T> result ( 1, 1, 0 );
		if ( other.rows == 0 || rows != other.rows ||
			other.columns == 0 || columns != other.columns )
		{
			cout << "\nERROR: Missing data.\n" << endl;
		}
		else
		{
			result.rows = rows;
			result.columns = other.columns;
			result.data = new T* [ result.rows ];
			for ( int x = 0; x < result.rows; x=x+1 )
			{
				result.data [x] = new T [ result.columns ];
			} // end for
			for ( int x = 0; x < result.rows; x=x+1 )
			{
				for ( int y = 0; y < result.columns; y=y+1 )
				{
					result.data [ x ][ y ] = data [ x ][ y ] - other.data [ x ][ y ];
				} // end for
			} // end for
		} // end if
		return ( result );
	} // end operator- ( )
//  metodo de operacao
	Matrix& operator* ( const Matrix <T> &other )
	{
		static Matrix <T> result ( 1, 1, 0 );
		int x = 0;
		int y = 0;
		int z = 0;
		int sum = 0;
		if ( rows <= 0 || columns == 0 ||
			other.rows <= 0 || other.columns == 0 ||
			columns != other.rows )
		{
			cout << endl << "ERROR: Invalid data." << endl;
			result.data [ 0 ][ 0 ] = 0;
		}
		else
		{
			result.rows = rows;
			result.columns = other.columns;
			result.data = new T* [ result.rows ];
			for ( int x = 0; x < result.rows; x=x+1 )
			{
				result.data [x] = new T [ result.columns ];
			} // end for
			for ( x = 0; x < result.rows; x = x + 1 )
			{
				for ( y = 0; y < result.columns; y = y + 1 )
				{
					sum = 0;
					for ( z = 0; z < columns; z = z + 1 )
					{
						sum = sum + data [ x ][ z ] * other.data [ z ][ y ];
					} // end for
					result.data [ x ][ y ] = sum;
				} // end for
			} // end for
		} // end if
		return ( result );
	} // end operator* ( )
//  funcao para encontrar a quantidade de linhas
	const int getRows ( )
	{
		return ( rows );
	} // end getRows ( )
//  funcao para encontrar a quantidade de colunas
	const int getColumns ( )
	{
		return ( columns );
	} // end getColumns ( )
//  funcao para gerar um numero inteiro aleatorio
	int randomIntGenerate ( int inferior, int superior )
	{
	//  definir dados locais
		int x = 0;
	//  gerar aleatorio
		x = rand() % (superior - inferior + 1) + inferior;
	//  retornar
		return (x);
	}
//  funcao para escalar uma matriz
	Matrix scalar ( int constante )
	{
	//  definir dados locais
		static Matrix <T> result ( 1, 1, 0 );
	//  testar se as linhas e colunas sao validas
		if ( this->rows == 0 || this->columns == 0 )
		{
			cout << "\nERRO: Linhas e/ou colunas invalidas.\n" << endl;
		}
		else
		{
		//  definir dados da matriz resultante
			result.rows = this->rows;
			result.columns = this->columns;
			result.data = new T* [ result.rows ];
		//  reservar espaco
			for ( int x = 0; x < result.rows; x=x+1 )
			{
				result.data [x] = new T [ result.columns ];
			} 
		//  preencher matriz resultante
			for ( int x = 0; x < result.rows; x++ )
			{
				for ( int y = 0; y < result.columns; y++ )
				{
					result.data [ x ][ y ] = this->data [ x ][ y ] * constante;
				}
			} 
		} 
		return ( result );
	} // end scalar ( )
//  funcao para testar se a matriz e' a identidade
	bool identidade ()
	{
	//  definir dados locais
		bool result = false;
	//  testar se a matriz e' quadrada
		if ( this->getRows() != this->getColumns() )
		{
			cout << "\nERRO: A matriz nao e' quadrada.\n" << endl;
		}
		else
		{
			result = true;
		//  valor inicial 1
			int x = 0;
			int y = 0;
		//  condicao 1
			while ( x < this->getRows() && result )
			{
			//  valor inicial 2
				y = 0;
			//  condicao 2
				while ( y < this->getColumns() && result )
				{
				//  testar se a posicao das linhas e' igual 'a posicao das colunas
					if ( x == y )
					{
						result = result && this->data [x][y] == 1;
					}
					else
					{
						result = result && this->data [x][y] == 0;
					}
				//  variacao 2
					y++;
				}
			//  variacao 1
				x++;
			}
		}
	//  retornar
		return ( result );
	} // end identidade ( )
//  metodo de operacao
	bool operator== ( const Matrix <T> &other )
	{
	//  definir dados locais
		bool result = false;
		int x = 0;
		int y = 0;
	//  testar se linhas ou colunas sao validas
		if ( rows <= 0 || columns == 0 || other.rows <= 0 || other.columns == 0 || rows != other.rows || columns != other.columns )
		{
			cout << endl << "ERROR: Linhas e/ou colunas invalidas." << endl;
		}
		else
		{
		//  valor inicial 1
			x = 0;
			result = true;
		//  condicao 1
			while ( x < getRows() && result )
			{
			//  valor inicial 2
				y = 0;
			//  condicao 2
				while ( y < getColumns() && result )
				{
					result = result && this->data[x][y] == other.data[x][y];
				//  variacao 2
					y++;
				}
			//  variacao 1
				x++;
			}
		} 
		return ( result );
	} // end operator== ( )
//  funcao para somar duas matrizes
	Matrix add ( const Matrix <T> other )
	{
	//  definir dados locais
		static Matrix <T> result (1, 0 , 0);
	//  testar se e'' possivel somar
		if ( this->rows != other.rows || this->columns != other.columns )
		{
			cout << "\nERRO: Linhas e/ou colunas invalidas\n" << endl;
		}
		else
		{
		//  definir dados da matriz resultante
			result.rows = this->rows;
			result.columns = this->columns;
			result.data = new T* [result.rows];
		//  reservar espaco
			for ( int x = 0; x < result.rows; x++ )
			{
				result.data[x] = new T [result.columns];
			}
		//  preencher o espaco
			for ( int x = 0; x < result.rows; x++)
			{
				for ( int y = 0; y < result.columns; y++ )
				{
					result.data[x][y] = this->data[x][y] + other.data[x][y];
				}
			}
		}
	//  retornar
		return ( result );
	} // end add ( )
//  funcao para operar duas linhas da matriz, somando cada elemento da primeira linha com o respectivo da segunda e multiplicando o resultado por uma constante
	void addRows ( int linha1, int linha2, int constante )
	{
	//  passar pelas colunas
		for ( int y = 0; y < getColumns(); y++ )
		{
			this->data [linha1][y] = ( this->data [linha1][y] + this->data [linha2][y] ) * constante;
		}
	} // end addRows ( )
//  funcao para operar duas linhas da matriz, subtraindo cada elemento da primeira linha com o respectivo da segunda e multiplicando o resultado por uma constante
	void substractRows ( int linha1, int linha2, int constante )
	{
	//  passar pelas colunas
		for ( int y = 0; y < getColumns(); y++ )
		{
			this->data [linha1][y] = ( this->data [linha1][y] - this->data [linha2][y] ) * constante;
		}
	} // end substractRows ( )
//  funcao para dizer em qual linha da matriz se encontra certo valor, se houver
	int searchRows ( int procurado )
	{
	//  definir dados locais
		int linha = -1;
		bool controle = true;
	//  valor inicial 1
		int x = 0;
	//  condicao 1
		while ( x < getRows() && controle )
		{
		//  valor inicial 2
			int y = 0;
		//  condicao 2
			while ( y < getColumns() && controle )
			{
			//  testar
				controle = this->data [x][y] != procurado;
			//  variacao 2
				y++;
			}
		//  variacao 1
			x++;
		}
	//  testar o controle
		if ( !controle )
		{
			linha = x-1;
		}
	//  retornar
		return ( linha );
	} // end searchRows ( )
//  funcao para dizer em qual coluna da matriz se encontra certo valor, se houver
	int searchColumns ( int procurado )
	{
	//  definir dados locais
		int coluna = -1;
		bool controle = true;
	//  valor inicial 1
		int x = 0;
		int y = 0;
	//  condicao 1
		while ( x < getRows() && controle )
		{
		//  valor inicial 2
			y = 0;
		//  condicao 2
			while ( y < getColumns() && controle )
			{
			//  testar
				controle = this->data [x][y] != procurado;
			//  variacao 2
				y++;
			}
		//  variacao 1
			x++;
		}
	//  testar o controle
		if ( !controle )
		{
			coluna = y-1;
		}
	//  retornar
		return ( coluna );
	} // end searchColumns ( )
//  metodo para transpor uma matriz
	void transpose ()
	{
	//  definir dados locais
		Matrix <int> matrix2 (getColumns(), getRows(), 0);
	//  passar pelas linhas
		for ( int x = 0; x < getRows(); x++ )
		{
		//  passar pelas colunas
			for ( int y = 0; y < getColumns(); y++ )
			{
			//  transpor
				matrix2.data [y][x] = this->data [x][y]; 
			}
		}
	//  substituir
		*(this) = matrix2;
	} // end transpose( )
//  funcao para dizer se a matriz apresenta a determinada caracteristica
	bool isCharacteristic ()
	{
	//  definir dados locais
		bool result = false;
		int linhas = getRows();
		int colunas = getColumns();
		int z = 1;
	//  testar se e' quadrada
		result = linhas == colunas;
		if ( result )
		{
		//  definir matriz auxiliar
			Matrix <int> matrix2 (linhas, colunas, 0);
		//  preencher com valores crescentes
			for ( int x = 0; x < linhas; x++ )
			{
				for ( int y = 0; y < colunas; y++ )
				{
				//  preencher
					matrix2.set(x, y, z);
				//  variacao
					z++;
				}
			}
		//  transpor matriz
			matrix2.transpose();
		//  testar se e' igual 'a matriz 2
			result = *this == matrix2;
		}
	//  retornar
		return ( result );
	} // end isCharacteristic ( )
//  metodo para gerar matriz com determinada caracteristica
	void characteristic ( int qtd )
	{
	//  definir dados locais
		static Matrix <T> a (1, 0 , 0);
		int z = qtd * qtd;
	//  definir dados da matriz resultante
		a.rows = qtd;
		a.columns = qtd;
		a.data = new T* [qtd];
	//  reservar espaco
		for ( int x = 0; x < qtd; x++ )
		{
			a.data [x] = new T [qtd];
		}
	//  preencher o espaco
		for ( int x = 0; x < qtd; x++)
		{
			for ( int y = 0; y < qtd; y++ )
			{
				a.data[x][y] = z;
				z--;
			}
		}
	//  transpor matriz
		a.transpose();
	//  associar matriz
		*this = a;
	} // end characteristic ( )
}; // end class
#endif
