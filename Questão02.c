
#include <stdio.h>

int main() {
    int num, i = 0, j = 1, numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (j < num) {
        numero = i + j;
        i = j;
        j = numero;
    }

    if (j == num) {
        printf("%d pertence à sequência de Fibonacci.", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.", num);
    }

    return 0;
}
