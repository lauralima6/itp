#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    if (num <= 0) {
        printf("Você entrou com %d, tente de novo na próxima\n", num);
        return 1; 
    }

    int currentNumber = 1; 

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ", currentNumber);
            currentNumber++;
        }
        printf("\n");
    }

    return 0; 
}
