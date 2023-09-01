#include <stdio.h>

int main() {
    double temperatura;
    char escala;

    scanf("%lf %c", &temperatura, &escala);
    
    if(escala == 'C'){
        printf("Celsius: %.2lf\n", temperatura);
        printf("Farenheit: %.2lf\n", (temperatura * 9/5) + 32);
        printf("Kelvin: %.2lf\n", temperatura + 273.15);
    }
     if(escala == 'F'){
        printf("Celsius: %.2lf\n",(temperatura - 32) * 5/9);
        printf("Farenheit: %.2lf\n", temperatura);
        printf("Kelvin: %.2lf\n", (temperatura - 32) * 5/9 + 273.15);
    }
     if(escala == 'K'){
        printf("Celsius: %.2lf\n", temperatura - 273.15);
        printf("Farenheit: %.2lf\n",  (temperatura - 273.15) * 9/5 + 32);
        printf("Kelvin: %.2lf\n", temperatura);
     }
    return 0;
}
