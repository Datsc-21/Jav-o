#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int mod, a, b;

    printf("Digite a chave: ");
    scanf("%d", &a);
    printf("Digite o Tamanho: ");
    scanf("%d", &b);

    mod = ((a * 2) + 5) % b;

    printf(" o mod e: %d ", mod);

    return 0;
}
