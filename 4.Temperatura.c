#include <stdio.h>

int main (){

    char temp;
    float grau;

    printf("Escolha o tipo de grau (C/F): ");
    scanf("%c", &temp);
    printf("Agora, a numeracao: ");
    scanf("%f", &grau);

    if (temp == 'F'){
        printf("\nGraus em Celsius: ");
        printf("%.2f", (grau - 32)/1,8);
    }
    else if (temp == 'C'){
        printf("\nGraus em Fahrenheit: ");
        printf("%.2f", (1,8 * grau) + 32);
    }
}
