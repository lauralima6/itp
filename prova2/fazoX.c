#include <stdio.h>
int main(){
  int num;
  char letra;
  scanf("%d %c", &num, &letra);

  for(int i = 1; i < num; i++){
    for(int j = 0; j < num+1; j++){
      if((i == j)||((i+j == num))){
        printf("%c", letra);
      }
      else{
        printf(" ");
      }
    }
   printf("\n");
  }
}