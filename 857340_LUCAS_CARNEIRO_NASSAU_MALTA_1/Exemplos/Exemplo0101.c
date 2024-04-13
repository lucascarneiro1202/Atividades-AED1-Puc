/*
Exemplo0101 - v0.0. - 27 / 02 / 2024
Author: Lucas Carneiro Nassau Malta
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0101 exemplo0101.c
Windows: gcc -o exemplo0101 exemplo0101.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0101
Windows: exemplo0101
*/

// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

// Method_01

void method_01 ( void )
{
    // definir dado
    int x = 0;  // definir variável com valor inicial
    // identificar
    printf ( "%s\n", "\n\nMethod_01" );
    // mostrar valor inicial
    printf ( "\n%s%d\n", "x = ", x );
    printf ( "&%s%p\n", "x = ", &x );
    // ler do teclado
    printf( "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar();
    // mostrar valor lido
    printf ( "%s%i\n", "x = ", x );
    // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar ( );
} // end method_01 ( )

/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/

int main ( int argc, char* argv [ ] )
{
    // definir dado
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo0101 - Programa = v0.0" );
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
        printf ( "\n%s%d", "Opcao = ", opcao );
        // escolher acao dependente da opcao
        switch ( opcao )
        {
            case 0: // nao fazer nada
            break;
            case 1: // executar method_01
            method_01 ( );
            break;
            default: // comportamento padrao
            printf ( "\n%s\n", "ERRO: Opcao invalida." );
            break;
        } // end switch
    }
    while ( opcao != 0 );
    // encerrar
    printf ( "\n\n%s", "Apertar ENTER para terminar." );
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 27/02 esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/

/*
Exemplo0101 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
1 - Method_01

Opcao = 1

Opcao = 1

Method_01

x = 0
&x = 0x7fff15141abc

Entrar com um valor inteiro: 78

x = 78

Apertar ENTER para continuar.


Opcoes:

0 - Terminar
1 - Method_01

Opcao = 0

Opcao = 0

Apertar ENTER para terminar.
*/