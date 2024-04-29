#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    printf("Digite o valor de numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o valor de numero 2: ");
    scanf("%d", &numero2);
    printf("%d > 10 E %d > 20? %d\n", numero1, numero2, numero1 > 10 && nu8mero2 > 20);
    printf("%d > 10 OU %d > 20? %d\n", numero1, numero2, numero1 > 10 || numero2 > 20);
    printf("NÃO %d > 10 E %d > 20? %d\n", numero1, numero2, !(numero1 > 10 && numero2 > 20));
    printf("NÃO %d > 10 OU %d > 20? %d\n", numero1, numero2, !(numero1 > 10 || numero2 > 20));
    return 0;
}
