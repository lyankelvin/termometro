#include <stdio.h>

int main (){

    int N, F = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        F = F*i;
    }

    printf("\nFatorial: ");
    printf("%d", F);
}
