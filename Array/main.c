/******************************************************************************
Nome: Henrique Delben - 315-02AN
*******************************************************************************/
#include <stdio.h>
#define TAMANHO 5

void soma(int n);

int main()
{   
    int v[TAMANHO], s = 0, n, media;
    for(int i = 0; i < TAMANHO; i++){
        printf("Informe um número: ");
        scanf("%d", &v[TAMANHO]); 
        soma(v[TAMANHO]);
    }
    return 0;
}

void soma(int n)
{
    s = s + n;
    printf("soma: ", s);
}
