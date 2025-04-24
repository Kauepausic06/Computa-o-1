#include <stdio.h>
#include <math.h>
int main() {

    float altura, largura, area, tinta;

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);

    area = altura * largura;
    printf("A area total da parede e: %.2f metros quadrados\n", area);

    tinta = area / 2;
    tinta = ceil(tinta);
    printf("A quantidade de tinta necessaria e: %.2f litros\n", tinta);

    return 0;
}
