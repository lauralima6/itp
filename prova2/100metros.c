#include <stdio.h>

int main() {
    float tempo_maximo;
    int quantidade_atletas = 0;
    int quantidade_series = 0;

    scanf("%f", &tempo_maximo);

    float tempo_atleta;

    while (1) {
        scanf("%f", &tempo_atleta);

        if (tempo_atleta == -1) {
            break;
        }

        if (tempo_atleta <= tempo_maximo) {
            quantidade_atletas++;
        }
    }

    if (quantidade_atletas % 8 == 0) {
        quantidade_series = quantidade_atletas / 8;
    } else {
        quantidade_series = (quantidade_atletas / 8) + 1;
    }

    printf("%d ", quantidade_atletas);
    printf("%d", quantidade_series);

    return 0;
}
