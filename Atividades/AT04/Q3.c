#include <stdio.h>
#include <stdlib.h>

int fat(int num){

    if(num < 0){
        return -5;

    }else if(num == 0){
        return 1;

    }else if(num == 1){
        return 1;
    }

    return num * fat(num - 1);
}


int main(){

    int num;
    printf("Informe o numero para calcular o fatorial: \n");
    scanf("%d", &num);

    if(fat(num) == -5){

        printf("Nao e possivel calcular o fatorial desse numero");

    }else{

        printf("o resultado e: %d", fat(num));
    }
    

    return 0;
}