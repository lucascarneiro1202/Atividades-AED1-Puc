/*
Exemplo0200 - v0.0. - 04 / 03 / 2024
Author: Lucas Carneiro Nassau Malta
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0200 exemplo0200.c
Windows: gcc -o exemplo0200 exemplo0200.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0200
Windows: exemplo0200
*/

// dependencias
#include "io.h" // bibliotecas e outras definicoes

// Method_01.

void method_01 ( void )
{
// identificar
	IO_id ( "Method_01 - Programa - v0.0" );
// encerrar
	IO_pause ( "\nApertar ENTER para continuar.\n" );
} // end method_01 ( )

/*
Funcao principal.
@return codigo de encerramento
*/

int main ( void )
{
// definir dado
	int opcao = 0;
// identificar
	printf ( "%s\n", "Exemplo0200 - Programa = v0.0" );
	printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta" );
	printf ( "\n" ); // mudar de linha
// acoes
// repetir
	do
	{
	// para mostrar opcoes
		printf ( "\n%s\n", "Opcoes:" );
		printf ( "\n%s" , "0 - Terminar" );
		printf ( "\n%s" , "1 - Method_01" );
		printf ( "\n" );
	// ler a opcao do teclado
		printf ( "\n%s", "Opcao = " );
		scanf ( "%d", &opcao );
		getchar( ); // para limpar a entrada de dados
	// para mostrar a opcao lida
		printf ( "\n\n%s%d", "Opcao = ", opcao );
	// escolher acao dependente da opcao
		switch ( opcao )
		{
			case 0: /* nao fazer nada */ break;
			case 1: method_01 ( ); break;
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

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 04/03 esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( OK ) identificacao de programa
*/

/*
Exemplo0200 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
1 - Method_01

Opcao = 1


Opcao = 1Method_01 - Programa - v0.0

Autor: Lucas Carneiro Nassau Malta



Apertar ENTER para continuar.



Opcoes:

0 - Terminar
1 - Method_01

Opcao = 0


Opcao = 0

Apertar ENTER para terminar.
*/
