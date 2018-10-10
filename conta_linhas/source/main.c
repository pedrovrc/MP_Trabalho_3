// Copyright 2018 Pedro Victor Rodrigues de Carvalho

#include <stdio.h>
#include "conta_linhas.h"

/*
	Funcao main:

	Criada para demonstrar um possivel uso das funcoes criadas para contagem
	de linhas de codigo em C/C++.

	Abre um arquivo de codigo no modo read-only e chama a funcao
	"conta_linhas_codigo" para retornar o numero de linhas de codigo no arquivo
	fornecido. Então, mostra o resultado na tela, fecha o arquivo e termina.
*/

int main(int argc, char *argv[]) {
    FILE* codigo = fopen(argv[1], "r");
    int numero_linhas = 0;

    if (codigo == NULL) {
        printf("ERRO AO CARREGAR ARQUIVO\n");
        return 1;
    }

    numero_linhas = conta_linhas_codigo(codigo);

    printf("O arquivo tem %d linhas de codigo.\n", numero_linhas);

    fclose(codigo);
    return 0;
}
