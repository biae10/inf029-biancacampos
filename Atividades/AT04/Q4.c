#include <stdio.h>
#include <stdlib.h>

int* ler3Numeros(){

    int num1,num2,num3;

    printf("Informe o primeiro numero: \n");
    scanf("%d",&num1);

    printf("\nInforme o segundo numero: \n");
    scanf("%d",&num2);

    printf("\nInforme o terceiro numero: \n");
    scanf("%d",&num3);

    int *numeros;

    numeros = (int *) malloc(3 * sizeof(int));

    numeros[0] = num1;
    numeros[1] = num2;
    numeros[2] = num3;

    return numeros;
}

int main(){

    int *vetor;

    vetor = ler3Numeros();

    printf("\n Os numeros sao %d, %d e %d",vetor[0],vetor[1],vetor[2]);
    
    free(vetor);
    return 0;
}