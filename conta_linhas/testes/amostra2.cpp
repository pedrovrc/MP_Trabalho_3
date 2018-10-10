#include <stdio.h>
#include <math.h>

/* Esse programa recebe um numero inteiro de entrada
e retorna esse numero com os algarismos em ordem
inversa. Se o numero de entrada for negativo, a
saída também sera. A saida e feita por printf.*/

int main(){
	int n;
	scanf("%d", &n);

	if (n<0) {
		n=-n;
		printf("-");
	}

	while (n>0){
		printf("%d", n%10);
		n/=10;
	}
	
	printf("\n");

	return 0;
}
