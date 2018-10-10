#include <stdio.h>

/*
    exemplo
    de
    comentario
    que
    se
    estende
    por
    multiplas
    linhas
    consecutivas
*/

void main() {
    double cateto1, cateto2, hipotenusa;    //comentario in-line

    printf("Insira os valores dos catetos e da hipotenusa.\n");
    scanf("%lf %lf %lf", &cateto1, cateto2, hipotenusa);

    if ((cateto1 * cateto1) + (cateto2 * cateto2) == (hipotenusa * hipotenusa)) {
        printf("Triangulo retangulo valido.\n");
    } else {
        printf("Triangulo retangulo invalido.\n");
    }

    //comentario entre linhas de codigo

    return 0;
}

/*
    comentario apos codigo
*/
