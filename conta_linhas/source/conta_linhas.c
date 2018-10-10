// Copyright 2018 Pedro Victor Rodrigues de Carvalho

#include <stdio.h>
#include <ctype.h>
#include "conta_linhas.h"

/*
	Funcao conta_linhas_codigo:
	
	Le o arquivo de codigo fornecido linha por linha e, para cada linha, checa
	se e uma linha vazia ou se e uma linha de comentario.
	
	Faz essas acoes por meio de outras funcoes: checa_vazia e checa_comentario.
	
	Retorna o numero de linhas validas de codigo.
*/

int conta_linhas_codigo(FILE* codigo) {
    const int buffer = 100;
    int linhas_codigo = 0, flag_comentario = 0;
    char linha[buffer];

    while (fgets(linha, buffer, codigo) != NULL) {
        if (checa_vazia(linha, buffer) == 1) {
            continue;
        } else if (checa_comentario(linha, buffer, &flag_comentario) == 1) {
            continue;
        } else {
            linhas_codigo++;
        }
    }
    return linhas_codigo;
}

/*
	Funcao checa_vazia:

	Percorre o array que contem a linha a ser analizada e checa se ha algum
	caracter q nao seja classificado como "whitespace".
	
	Retornos:
	- 0, se linha contiver caracter nao-"whitespace";
	- 1, se linha for vazia. 
*/

int checa_vazia(char *linha, const int buffer) {
    int tamanho = tamanho_linha(linha, buffer);

    for (int i = 0; i < tamanho; i++) {
        if (!isspace(linha[i])) {
            return 0;
        }
    }

    return 1;
}

/*
	Funcao checa_comentario:

	Faz uso da flag comentada a seguir para distinguir entre comentario de
	linha unica e bloco de comentario.
	
	Caso nao esteja em bloco de comentario, pula todo caracter "whitespace"
	e analisa os dois primeiros validos, para determinar se ha um inicio de
	bloco de comentario nessa linha.

	Caso esteja em bloco de comentario, analisa todos os caracteres da linha
	em pares, verificando se ha ocorrencia de termino de bloco de comentario.

	Retornos:
	- 0, se linha nao for de comentario.
	- 1, se linha for de algum tipo de comentario.
*/

// Valores da flag_comentario:
// 0 -> nao esta em bloco de comentario.
// 1 -> esta em bloco de comentario.

int checa_comentario(char *linha, const int buffer, int *flag_comentario) {
    int tamanho = tamanho_linha(linha, buffer);
    int contador = 0;

    switch (*flag_comentario) {
        case 0:
            while (isspace(linha[contador]) && contador < tamanho) {
                contador++;
            }

            if (contador == tamanho || contador+1 == tamanho) {
                return 0;
            } else if (linha[contador] == '/') {
                switch (linha[contador+1]) {
                    case '*':
                        *flag_comentario = 1;
                        return 1;
                    case '/':
                        return 1;
                    default:
                        return 0;
                }
            } else {
                return 0;
            }

        case 1:
            for (contador = 0; contador+1 < tamanho; contador++) {
                if (linha[contador] == '*' && linha[contador+1] == '/') {
                    *flag_comentario = 0;
                }
            }
            return 1;
    }
}

/*
	Funcao tamanho_linha:

	Percorre a linha fornecida ate encontrar um caracter de quebra de linha,
	mantendo a contagem dos caracteres percorridos.

	Retorna o tamanho da linha fornecida.
*/

int tamanho_linha(char *linha, const int buffer) {
    int tamanho = 0;

    while (linha[tamanho] != '\n' && tamanho < buffer) {
        tamanho++;
    }
    return tamanho;
}
