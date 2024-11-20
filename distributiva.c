#include <stdio.h>

int main() {
    int A, B, C, D;

    // Lendo os quatro números inteiros
    printf("Digite quatro números inteiros: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Realizando as adições
    int somaAB = A + B;
    int somaAC = A + C;
    int somaAD = A + D;
    int somaBC = B + C;
    int somaBD = B + D;
    int somaCD = C + D;

    // Realizando as multiplicações
    int multAB = A * B;
    int multAC = A * C;
    int multAD = A * D;
    int multBC = B * C;
    int multBD = B * D;
    int multCD = C * D;

    // Exibindo os resultados
    printf("Soma de A e B: %d\n", somaAB);
    printf("Soma de A e C: %d\n", somaAC);
    printf("Soma de A e D: %d\n", somaAD);
    printf("Soma de B e C: %d\n", somaBC);
    printf("Soma de B e D: %d\n", somaBD);
    printf("Soma de C e D: %d\n", somaCD);

    printf("Multiplicação de A e B: %d\n", multAB);
    printf("Multiplicação de A e C: %d\n", multAC);
    printf("Multiplicação de A e D: %d\n", multAD);
    printf("Multiplicação de B e C: %d\n", multBC);
    printf("Multiplicação de B e D: %d\n", multBD);
    printf("Multiplicação de C e D: %d\n", multCD);

    return 0;
}
