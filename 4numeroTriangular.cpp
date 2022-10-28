#include <stdio.h>

main()
{
    float fatorial, soma, numero;

    printf("Digite um numero \n");
    scanf("%f", &numero);

    soma = 1;

    for(int i = 1; i < numero; i++)
    {
        fatorial = 1;
        fatorial *= i;
        soma += (1 / fatorial);
    }

    printf("os termos sao: %f", soma);
}