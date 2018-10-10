#include <stdio.h>
#include <stdbool.h>

int conta_linhas_codigo(FILE* codigo);

int checa_vazia(char *linha, const int buffer);

int checa_comentario(char *linha, const int buffer, bool *flag_comentario);

int tamanho_linha(char *linha, const int buffer);
