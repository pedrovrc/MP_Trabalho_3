#include "conta_linhas.c"
#include <gtest/gtest.h>

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
