#include <stdio.h>

int main (){

    int numeral[5], SomaTotal = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeral[i]);
    }

    for (int j = 0; j < 5; j++){
        SomaTotal += numeral[j];
    }

    printf("A soma total dos numeros: %d", SomaTotal);
}
