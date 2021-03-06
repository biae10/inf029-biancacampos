#include <stdio.h>
#include <stdlib.h>


int subtracao(int num1, int num2, int num3){

    int sub;

    sub = num1 - num2 - num3;
    return sub;
}

int main(){

    int num1,num2,num3;
    printf("Informe o primeiro numero: \n");
    scanf("%d",&num1);

    printf("\nInforme o segundo numero: \n");
    scanf("%d",&num2);

    printf("\nInforme o terceiro numero: \n");
    scanf("%d",&num3);

    printf("O resultado da subtracao e: %d",subtracao(num1,num2,num3));

    return 0;
}