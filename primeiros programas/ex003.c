#include <stdio.h>

int main(){
    int qtd_dias;
    
    scanf("%d", &qtd_dias);
    
    int anos = qtd_dias / 365;
    int meses = (qtd_dias % 365) / 30;
    int dias = qtd_dias - (anos * 365) - (meses * 30);

    printf("%d ano(s) \n%d mes(es) \n%d dia(s)", anos, meses, dias);
    
    return 0;
}