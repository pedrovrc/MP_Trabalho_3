#include <stdio.h>
#include "conta_linhas.h"

int main() {
	FILE* codigo = fopen("amostra1.cpp", "r");
	int numero_linhas = 0;

	fclose(codigo);
	return 0;
}