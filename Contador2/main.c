/******************************************************************************
Nome: Henrique Delben - 315-02AN
*******************************************************************************/
#include <stdio.h>

void contagemNegativo(int numero);

int main()
{
    int numero = 0;
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    contagemPositivo(numero);
    contagemNegativo(numero);

    return 0;
}

void contagemPositivo(int numero)
{
    for (int i = numero; i >= 0; i--)
    {
        printf("%d \n", i);
    }
}
