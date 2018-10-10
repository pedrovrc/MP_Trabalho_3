#include <stdio.h>
#include <ctype.h>
#include "conta_linhas.h"

int conta_linhas_codigo(FILE* codigo) {
	const int buffer = 100;
	int linhas_codigo = 0;
	char linha[buffer];

	while (fgets(linha, buffer, codigo) != NULL) {
		if (checa_vazia(linha, buffer) == 1) {
			continue;
		} else if (checa_comentario() == 1) {
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

int checa_comentario() {
	return 0;
}

int tamanho_linha(char *linha, const int buffer) {
	int tamanho = 0;

	while (linha[tamanho] != '\n' && tamanho < buffer) {
		tamanho++;
	}
	return tamanho;
}