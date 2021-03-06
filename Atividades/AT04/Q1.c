#include <stdio.h>
#include <stdlib.h>


int soma(int num1,int num2){

    return num1 + num2;
}



int main(){

    int num1,num2;
    printf("Informe o primeiro numero: \n");
    scanf("%d",&num1);

    printf("\nInforme o segundo numero: \n");
    scanf("%d",&num2);

    printf("O resultado da soma e igual a: %d", soma(num1,num2));


    return 0;
}