#include "conta_linhas.c"
#include <gtest/gtest.h>

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
	ASSERT_EQ(28, conta_linhas_codigo(codigo));
	//ignorar linhas vazias
}

TEST (conta_linhas_codigo, teste_geral_2) {
	FILE* codigo = fopen("amostra2.cpp", "r");
	ASSERT_EQ(20, conta_linhas_codigo(codigo));
	//ignorar linhas vazias
}

TEST (conta_linhas_codigo, teste_geral_3) {
	FILE* codigo = fopen("amostra3.cpp", "r");
	ASSERT_EQ(13, conta_linhas_codigo(codigo));
	//ignorar linhas vazias
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
