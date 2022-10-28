
#include <stdio.h>

main()
{
    int numero, soma;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    soma = 0;

    for(int i = 1; i<=numero; i++)
    {
        soma += i;
    }

    printf("O valor da soma de  1 a %d e %d", numero, soma);
}