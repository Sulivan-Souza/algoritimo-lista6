#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
    int soma, resto;
    for(int i = 0; i <=500; i ++)
    { resto = i % 2;
        if(resto !=0)
        {soma += i;}
        }
        printf("a soma dos impares ate 500: %d", soma);
}