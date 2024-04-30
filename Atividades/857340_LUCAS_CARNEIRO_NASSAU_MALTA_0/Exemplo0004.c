/*
    Exemplo0004 - v0.0. - 20/02/2024
    Author: Lucas Carneiro Nassau Malta
    Matrícula: 857340

    Para compilar em terminal (janela de comandos):
    Linux : gcc -o exemplo0004 exemplo0004.c
    Windows: gcc -o exemplo0004 exemplo0004.c
    Para executar em terminal (janela de comandos):
    Linux : ./exemplo0004
    Windows: exemplo0004
*/

// dependencias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outrar funções de uso geral

/*
    Metodo 01.
*/

void method_01 ( void )
{
    // identificar
    printf ( "%s\n", "Metodo 01" );

    // encerrar
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar (); // para limpar a entrada de dados
} // end method_01 ()

/*
Função principal
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo como grupo de parametros na linha de comandos
*/

int main (int argc, char* argv [])
{
    // definir dados / resultados
    int opcao = 0;

    // identificar
    printf ( "%s\n", "Exemplo0004 - Programa = v0.0");
    printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta");
    printf ( "\n" );    // mudar de linha

    // acoes

    // para mostrar opcoes
    printf ( "\n%s\n", "Opcoes: 0 ou 1" );
    printf ( "\n%s", "Terminar" );
    printf ( "\n%s", "1 - Metodo 01");
    printf ( "\n" );

    // ler a opcao do teclado
    printf ( "\n%s", "Opcao = " );
    scanf ( "%d", &opcao );     // esperar o usuário inserir um número
    getchar();  // para limpar a entrada de dados

    // para mostrar a opção lida
    printf ( "\n%s%d", "Opcao = ", opcao );
    printf ( "\n" );

    // escolher acao dependente da opcao
    switch (opcao)
    {
        case 0: // nao fazer nada
            break;
        case 1: // executar metodo 01
            method_01 ();
            break;
        default: //comportamento padrao
            printf ( "\nErro: Opcao invalida.\n" );
            break;
    } // end switch

    //encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar();      // aguardar por ENTER
    return ( 0 );      // voltar ao SO (sem erros)
} // end main()

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0.5
b.) -0.5
c.) 1.23456789
---------------------------------------------- historico
Versao Data Modificacao
0.1 20/02 esboco
0.2 20/02 mudanca de versao
---------------------------------------------- testes
Versao Teste
0.0 00. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa
0.2 02. ( OK ) identificacao de programa
leitura e exibicao de inteiro
0.3 03. ( OK ) identificacao de programa
leitura e exibicao mediante escolha
0.4 04. ( OK ) identificacao de programa
leitura e exibicao mediante escolha
*/

/*

Resultado:

Exemplo0004 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcoes: 0 ou 1

Terminar
1 - Metodo 01

Opcao = 1

Opcao = 1
Metodo 01

Apertar ENTER para continuar.



Apertar ENTER para terminar.

*/