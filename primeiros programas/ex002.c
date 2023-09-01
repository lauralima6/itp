#include <stdio.h>

int main() {
    char letra;
    int quantidade;
    float indice_popularidade;

    // Solicita a entrada do usuário
    printf("Digite a letra: ");
    scanf(" %c", &letra); // Note o espaço antes de %c para consumir possíveis caracteres em branco

    printf("Digite a quantidade de vezes que a letra apareceu: ");
    scanf("%d", &quantidade);

    printf("Digite o valor do índice de popularidade: ");
    scanf("%f", &indice_popularidade);

    // Calcula a pontuação
    float pontuacao = quantidade * indice_popularidade;

    // Imprime o resultado formatado
    printf("A popularidade de %c é de %.1f pontos\n", letra, pontuacao);

    return 0;
}
