#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a,b,c,media;
    
    scanf("%f %f %f", &a,&b,&c);
    
    media = (a+b+c)/3;
    
    if(media >= 7){
        printf("aprovado");
    }
    else if(media < 3){
        printf("reprovado");
    }
    else{
        printf("prova final");
    }
    
	return 0;
}