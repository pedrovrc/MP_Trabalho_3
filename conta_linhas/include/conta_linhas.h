#include <stdio.h>

int conta_linhas_codigo(FILE* codigo);

int checa_vazia(char *linha, const int buffer);

int checa_comentario(char *linha, const int buffer, int *flag_comentario);

int tamanho_linha(char *linha, const int buffer);
