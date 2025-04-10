#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int frequencia;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a porcentagem de frequencia:");
    scanf("%d%%", &frequencia);

    media =(n1+ n2+ n3) / 3;

    if (media > 8.0 && frequencia >= 75)
        printf("O estudante foi Aprovado com Distincao pois teve media %.2f e frequencia %d%%.\n", media, frequencia);


    else if (media > 6.0 && frequencia >= 75)
        printf("O estudante foi Aprovado direto pois teve media %.2f e frequencia %d%%.\n", media, frequencia);


    else if (
        ((media >=4.0 && media <6) && frequencia >75)||
        (media >=6.0 && frequencia < 75)||
        (media >=4.0 && frequencia > 50 && frequencia < 75)
    )
        printf("O estudante vai para final pois teve media %.2f e frequencia %d%%.\n", media, frequencia);
    else
    {

        printf("O estudante foi reprovado direto pois teve media %.2f e frequencia %d%%.\n", media, frequencia);

    }

    return 0;
}
