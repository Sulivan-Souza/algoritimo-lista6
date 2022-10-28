#include <stdio.h>
#include <math.h>

main()
{
    int i, num, contador;
    double soma, elevado = 0;

    printf("Digite um numero \n");
    scanf("%d", &num);

    soma = 1;
    contador = 1;

    for(int i = 1; i <= 15; i++)
    {
        contador++;
        elevado = pow(num, contador);
        soma += elevado / i;
    }
    printf("A soma : %.2f", soma);
}