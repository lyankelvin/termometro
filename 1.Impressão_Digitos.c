#include <stdio.h>

int main (){

    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);
    printf("\nContagem:\n");

    for (int i = 1; i <= N; i++){
        printf("%d ", i);
    }
}
