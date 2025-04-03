#include<stdio.h>
int main (){

    float peso, altura, taxa;
    int idade, codigo;

    printf("Digite o codigo:\n");
    scanf("%d", &codigo);
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    printf("Digite o peso:\n");
    scanf("%f", &peso);
    printf("Digite a altura:\n");
    scanf("%f", &altura);
    printf("Digite a taxa:\n");
    scanf("%f", &taxa);

    printf("Codigo: %d \n");
    printf("Idade:%d \npeso:%f \nAltura%f\n", idade, peso, altura);
    printf("taxa: %f\n", taxa);

    return 0;
    }
