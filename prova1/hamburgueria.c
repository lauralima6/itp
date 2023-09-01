#include <stdio.h>

int main(){
    int num_combo, saldo;
    
    scanf("%d %d", &num_combo, &saldo);
    
    if((num_combo == 1 && saldo == 12) || 
       (num_combo == 2 && saldo == 23) || 
       (num_combo == 3 && saldo == 31) || 
       (num_combo == 4 && saldo == 28) || 
       (num_combo == 5 && saldo == 15)){
        printf("Deu certim!");
    }
    
    if(num_combo == 1 && saldo > 12){
        int troco = saldo - 12;
        printf("Troco = %d reais", troco);
    } 
    if(num_combo == 2 && saldo > 23){
        int troco = saldo - 23;
        printf("Troco = %d reais", troco);
    } 
    if(num_combo == 3 && saldo > 31){
        int troco = saldo - 31;
        printf("Troco = %d reais", troco);
    }
    if(num_combo == 4 && saldo > 28){
        int troco = saldo - 28;
        printf("Troco = %d reais", troco);
    }
    if(num_combo == 5 && saldo > 15){
        int troco = saldo - 15;
        printf("Troco %d reais", troco);
    }
    
    
    if(num_combo == 1 && saldo < 12){
        int falta = 12 - saldo;
        printf("Saldo insuficiente! Falta %d reais", falta);
    } 
    if(num_combo == 2 && saldo < 23){
        int falta = 23 - saldo;
        printf("Saldo insuficiente! Falta %d reais", falta);
    } 
    if(num_combo == 3 && saldo < 31){
        int falta = 31 - saldo;
        printf("Saldo insuficiente! Falta %d reais", falta);
    }
    if(num_combo == 4 && saldo < 28){
        int falta = 28 - saldo;
        printf("Saldo insuficiente! Falta %d reais", falta);
    }
    if(num_combo == 5 && saldo < 15){
        int falta = 15 - saldo;
        printf("Saldo insuficiente! Falta %d reais", falta);
    }
    
}