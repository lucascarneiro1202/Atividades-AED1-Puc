/*
Exemplo0500 - v0.0. - 18 / 03 / 2024
Author: Lucas Carneiro Nassau Malta
*/

// dependencias

#include "io.h" // para definicoes proprias

// Method_00 - nao faz nada.

void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )

// Method_01 

void method_01 ( void )
{
// identificar
	IO_id ( " Method_01 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )

// Method_02

void method_02 ( void )
{
// identificar
	IO_id ( "Method_02 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )

// Method_03

void method_03 ( void )
{
// identificar
	IO_id ( " Method_03 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

// Method_04

void method_04 ( void )
{
// identificar
	IO_id ( "Method_04 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

// Method_05 

void method_05 ( void )
{
// identificar
	IO_id ( "Method_05 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

// Method_06 

void method_06 ( void )
{
// identificar
	IO_id ( "Method_06 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )

// Method_07

void method_07 ( void )
{
// identificar
	IO_id ( "Method_07 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )

// Method_08 

void method_08 ( void )
{
// identificar
	IO_id ( "Method_08 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )

// Method_09

void method_09 ( void )
{
// identificar
	IO_id ( "Method_09 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )

// Method_10

void method_10 ( void )
{
// identificar
	IO_id ( "Method_10 - v0.0" );
// encerrar
	IO_pause ( "Apertar ENTER para continuar" );
} // end method_10 ( )

/*
Funcao principal.
@return codigo de encerramento
*/

int main ( )
{
// definir dado
	int x = 0;
// repetir até desejar parar
	do
	{
		// identificar
		IO_println ( "EXEMPLO0400 - Programa - v0.0" );
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
			case 1: method_01 ( ); break;
			case 2: method_02 ( ); break;
			case 3: method_03 ( ); break;
			case 4: method_04 ( ); break;
			case 5: method_05 ( ); break;
			case 6: method_06 ( ); break;
			case 7: method_07 ( ); break;
			case 8: method_08 ( ); break;
			case 9: method_09 ( ); break;
			case 10: method_10 ( ); break;
		default:
			IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
				IO_concat ( IO_toString_d ( x ), ")" ) ) );
		} // end switch
	}
	while ( x != 0 );
// encerrar
	IO_pause ( "Apertar ENTER para terminar" );
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
