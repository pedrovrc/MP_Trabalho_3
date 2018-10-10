// Copyright 2018 Pedro Victor Rodrigues de Carvalho

#include <stdio.h>
#include <ctype.h>
#include "conta_linhas.h"

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

int checa_vazia(char *linha, const int buffer) {
    int tamanho = tamanho_linha(linha, buffer);

    for (int i = 0; i < tamanho; i++) {
        if (!isspace(linha[i])) {
            return 0;
        }
    }

    return 1;
}

// Valores da flag_comentario:
// 0 -> nao esta em bloco de comentario.
// 1 -> esta em bloco de comentario.
// Utilizada para diferenciar uma linha dentro de um bloco de
// comentario e uma linha de codigo valida.

int checa_comentario(char *linha, const int buffer, int *flag_comentario) {
    int tamanho = tamanho_linha(linha, buffer);
    int contador = 0;

    switch (*flag_comentario) {
        case 0:
            while (isspace(linha[i]) && i < tamanho) {
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

int tamanho_linha(char *linha, const int buffer) {
    int tamanho = 0;

    while (linha[tamanho] != '\n' && tamanho < buffer) {
        tamanho++;
    }
    return tamanho;
}
