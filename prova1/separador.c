#include <stdio.h>

int main() {
    int numero, digito, inverso = 0;

    scanf("%d", &numero);

    if (numero < 1 || numero > 100000) {
        printf("Número fora do intervalo permitido.\n");
    }
    while (numero > 0) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }

    while (inverso > 0) {
        digito = inverso % 10;
        printf("%d\n", digito);
        inverso /= 10;
    }

    return 0;
}
