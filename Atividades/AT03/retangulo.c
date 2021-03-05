#include <stdio.h>
#include <stdlib.h>
#include "calcarea.h"


float main(){

    float base,altura,area;
    
    printf("Informe a altura: \n");
    scanf("%f",&altura);
            
    printf("Informe a base: \n");
    scanf("%f",&base);

    area = areaRetangulo(base,altura);

    printf("A area do retangulo e: %.2f",area);


    return 0;
}