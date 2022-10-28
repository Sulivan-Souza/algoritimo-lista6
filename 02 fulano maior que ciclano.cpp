
#include<stdio.h>


using namespace std;

int main()
{
    float pessoa1, pessoa2;
    int anos = 0;

    pessoa1 = 1.50;
    pessoa2 = 1.10;

    while(pessoa1 > pessoa2)
    { 
        pessoa1 = pessoa1 + 0.20;
        pessoa2 = pessoa2 + 0.30;
        anos++;
    }
    printf(" depois de %d anos pessoa2 , ficou %.2f m. maior que pessoa1", anos, pessoa1, pessoa2);
}