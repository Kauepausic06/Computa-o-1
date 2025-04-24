#include <stdio.h>

int main() {
    int base, inicio, fim, soma = 0;

    printf("Digite o numero base: ");
    scanf("%d", &base);

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("O valor inicial deve ser menor ou igual ao valor final.\n");
    } else {
        for (int i = inicio; i <= fim; i++) {
            if (i % base == 0) {
                soma += i;
            }
        }


        printf("A soma dos multiplos de %d no intervalo [%d, %d] e: %d\n", base, inicio, fim, soma);
    }

    return 0;
}
