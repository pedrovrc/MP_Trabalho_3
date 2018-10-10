#include <stdio.h>
#include "conta_linhas.h"

int conta_linhas_codigo(FILE* codigo) {
	const int buffer = 100;
	int conta_codigo = 0;
	char linha[buffer];

	while (fgets(linha, buffer, codigo) != NULL) {
		if (checa_vazia() == 1) {
			continue;
		} else if (checa_comentario() == 1) {
			continue;
		} else {
			conta_codigo++;
		}
	}
	conta_codigo++;
	return conta_codigo;
}

int checa_vazia() {
	return 0;
}

int checa_comentario() {
	return 0;
}