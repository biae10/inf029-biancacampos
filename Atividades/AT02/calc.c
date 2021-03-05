#include <stdio.h>
#include <stdlib.h>

int main(){

    int entrada = 1;
    float num1,num2,calc;

    while(entrada != 0){

        printf("\nInforme 0 para sair | 1 - Soma | 2 - Subtrair| 3 - Multiplicar | 4 - Dividir \n");
        scanf("%d", &entrada);

        switch(entrada){

            case 0:
            printf("Voce saiu da calculadora! :(");
            break;
            
            case 1:
            printf("informe o primeiro numero: \n ");
            scanf("%f",&num1);

            printf("\ninforme o segundo numero: \n ");
            scanf("%f",&num2);
    
            calc = num1 + num2;
            printf("A soma e: %.2f",calc);
            break;

            case 2:
            printf("informe o primeiro numero: \n ");
            scanf("%f",&num1);

            printf("\ninforme o segundo numero: \n ");
            scanf("%f",&num2);

            if(num1 > num2){
                calc = num1 - num2;
            }else{
                calc = num2 - num1;
            }
            
            printf("A subtracao e: %.2f",calc);
            break;

            case 3:
            printf("informe o primeiro numero: \n ");
            scanf("%f",&num1);

            printf("\ninforme o segundo numero: \n ");
            scanf("%f",&num2);
    
            calc = num1 * num2;
            printf("A multiplicacao e: %.2f",calc);
            break;

            case 4:
            printf("informe o primeiro numero: \n ");
            scanf("%f",&num1);

            printf("\ninforme o segundo numero: \n ");
            scanf("%f",&num2);

            calc = num1/num2;
            
            printf("A divisao e: %.2f",calc);
            break;

            default:
            printf("Digite uma opcao valida");
            break;


        }


       
    }



 return 0;

}