/*
Exemplo0102 - v0.0. - 27 / 02 / 2024
Author: Lucas Carneiro Nassau Malta
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0102 exemplo0102.c
Windows: gcc -o exemplo0102 exemplo0102.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0102
Windows: exemplo0102
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
    printf( "%s", "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar();
    // mostrar valor lido
    printf ( "%s%i\n", "x = ", x );
    // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar ( );
} // end method_01 ( )

// Method_02

void method_02 ( void )
{
    // definir dado
    double x = 0.0;
    // identificar
    printf ( "\n\n%s\n", "Method_02 - Programa - v0.0" );
    // mostrar valor inicial
    printf ( "\n%s%lf\n", "x = ", x );
    // ler do teclado
    printf ( "%s", "Entrar com um valor real: " );
    scanf ( "%lf", &x);
    // mostrar o valor lido
    printf ( "\n\n%s%lf\n", "x = ", x );
    // encerrar
    printf ( "\n\n%s\n", "Apertar ENTER para continuar." );
    getchar ();
} // end method_02 ()

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
    printf ( "%s\n", "Exemplo0102 - Programa = v0.0" );
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
        printf ( "\n%s" , "2- Method_02" );
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
            case 2: // executar method_02
            method_02 ( );
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
0.2 27/02 mudanca de versao
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
leitura e exibicao de inteiro
*/

/*
Exemplo0102 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes:

0 - Terminar
1 - Method_01
2- Method_02

Opcao = 2

Opcao = 2

Method_02 - Programa - v0.0

x = 0.000000
Entrar com um valor real: 4567.2341


x = 4567.234100


Apertar ENTER para continuar.

Opcoes:

0 - Terminar
1 - Method_01
2- Method_02

Opcao = 0

Opcao = 0

Apertar ENTER para terminar.
*/