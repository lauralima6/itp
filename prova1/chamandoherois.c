#include <stdio.h>
int main(){
    int qtd_herois;
    int classe;
    int nivel_monstro;
  
    scanf("%d %d %d", &qtd_herois, &classe, &nivel_monstro);
    
    if ((nivel_monstro == 1 && qtd_herois == 1 && classe >= 2 || nivel_monstro == 1 && qtd_herois >= 3 && classe == 1) ||
        (nivel_monstro == 2 && qtd_herois == 1 && classe >= 3 || nivel_monstro == 2 && qtd_herois >= 3 && classe == 2) ||
        (nivel_monstro == 3 && qtd_herois == 1 && classe >= 4 || nivel_monstro == 3 && qtd_herois >= 3 && classe == 3) ||
        (nivel_monstro == 4 && qtd_herois == 1 && classe == 5 || nivel_monstro == 4 && qtd_herois >= 3 && classe == 4) ||
        (nivel_monstro == 5 && qtd_herois == 1 && classe == 5)){
         printf("Heróis vencerão!");
        }else{
        printf("Melhor chamar Saitama!");
    }
    
}