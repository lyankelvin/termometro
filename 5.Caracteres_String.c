#include <stdio.h>
#include <string.h>

int main (){

    char frase[50];

    printf("Escreva a palavra ou frase: ");
    scanf("%49[^\n]", frase);

    printf("%d", strlen(frase));
}
