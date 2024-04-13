/*
    Exemplo0002 - v0.0. - 20/02/2024
    Author: Lucas Carneiro Nassau Malta
    Matrícula: 857340

    Para compilar em terminal (janela de comandos):
    Linux : gcc -o exemplo0002 exemplo0002.c
    Windows: gcc -o exemplo0002 exemplo0002.c
    Para executar em terminal (janela de comandos):
    Linux : ./exemplo0002
    Windows: exemplo0002
*/

// dependencias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outrar funções de uso geral

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
    printf ( "%s\n", "Exemplo0002 - Programa = v0.0");
    printf ( "%s\n", "Autor: Lucas Carneiro Nassau Malta");
    printf ( "\n" );    // mudar de linha

    // acoes
    // ler a opcao do teclado
    printf ( "\n%s", "Opcao = " );
    scanf ( "%d", &opcao );     // esperar o usuário inserir um número
    getchar();  // para limpar a entrada de dados

    // para mostrar a opção lida
    printf ( "\n%s%d", "Opcao = ", opcao );

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
0.0 01. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa
0.2 01. ( OK ) identificacao de programa
leitura e exibicao de inteiro
*/

/*

Resultado:

Exemplo0002 - Programa = v0.0
Autor: Lucas Carneiro Nassau Malta


Opcao = 0

Opcao = 0

Apertar ENTER para terminar.

*/