#include <stdio.h>

int main (){
    
    int numAtletas, soma;
    char prova;
    
    int c=0;
    int s=0;
    int l=0;
    
    scanf("%d", &numAtletas);
    
    for (int i=1; i <= numAtletas; i++){
        scanf("%c", &prova);
        
        while (prova != 'F'){
            if (prova =='C'){
                c = c+1;
            }
            if (prova == 'S'){
                s = s+1;
            }
            if (prova == 'L'){
                l = l+1;
            }
            scanf("%c", &prova);
        }
    }
    
    soma = c+s+l;
    
    printf("%d %d %d %d", c, s, l, soma);
    
    return 0;
}