#include <stdio.h>

int main() {
    int num = 0;
    unsigned long long fatorial = 1;

    printf("Informe um numero inteiro positivo:\n");
    scanf("%d", &num);

  
    if (num < 0)
        printf("Este e um numero nao negativo.\n");
    else {
        for (int i = 1; i <= num; ++i) {
            fatorial *= i;
        }
        printf("O fatorial de %d e %llu", num, fatorial);
    }

    return 0;
}