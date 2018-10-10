#include "conta_linhas.c"
#include <gtest/gtest.h>

TEST (tamanho_linha, linha_vazia) {
	FILE* texto = fopen("linha_vazia.txt", "r");
	char linha[25];

	fgets(linha, 25, texto);
	ASSERT_EQ(0, tamanho_linha(linha, 25));
}

TEST (tamanho_linha, linha_normal) {
	FILE* texto = fopen("linha_codigo.txt", "r");
	char linha[25];

	fgets(linha, 25, texto);
	ASSERT_EQ(18, tamanho_linha(linha, 25));
}

TEST (checa_vazia, linha_vazia) {
	FILE* texto = fopen("linha_vazia.txt", "r");
	char linha[25];

	fgets(linha, 25, texto);
	ASSERT_EQ(1, checa_vazia(linha, 25));

	fclose(texto);
}

TEST (checa_vazia, linha_codigo) {
	FILE* texto = fopen("linha_codigo.txt", "r");
	char linha[25];

	fgets(linha, 25, texto);
	ASSERT_EQ(0, checa_vazia(linha, 25));

	fgets(linha, 25, texto);
	fgets(linha, 25, texto);
	ASSERT_EQ(0, checa_vazia(linha, 25));

	fclose(texto);
}

TEST (checa_vazia, linha_comentario) {
	FILE* texto = fopen("linha_comentario.txt", "r");
	char linha[35];

	fgets(linha, 35, texto);
	ASSERT_EQ(0, checa_vazia(linha, 35));

	fgets(linha, 35, texto);
	fgets(linha, 35, texto);
	ASSERT_EQ(0, checa_vazia(linha, 35));

	fclose(texto);
}

TEST(conta_linhas_codigo, teste_geral_1) {
	FILE* codigo = fopen("amostra1.cpp", "r");
	ASSERT_EQ(12, conta_linhas_codigo(codigo));
	//ignorar linhas vazias e comentarios
}

TEST (conta_linhas_codigo, teste_geral_2) {
	FILE* codigo = fopen("amostra2.cpp", "r");
	ASSERT_EQ(16, conta_linhas_codigo(codigo));
	//ignorar linhas vazias e comentarios
}

TEST (conta_linhas_codigo, teste_geral_3) {
	FILE* codigo = fopen("amostra3.cpp", "r");
	ASSERT_EQ(11, conta_linhas_codigo(codigo));
	//ignorar linhas vazias e comentarios
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
