#include <stdio.h>
#include <math.h>

int main(){

    int a,b,n,conta;
    printf("Digite os valores:");
    scanf("%d %d %d",&a,&b,&n);

    conta = pow(a,b)+n;

    printf("O resultado da conta foi: %d", conta);

    return 0;
}