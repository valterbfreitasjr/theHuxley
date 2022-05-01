#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    int A,B,C,D,E;
    int cont = 0;
    
    printf("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
    scanf("%d", &A);
    printf("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
    scanf("%d", &B);
    printf("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
    scanf("%d", &C);
    printf("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
    scanf("%d", &D);
    printf("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");
    scanf("%d", &E);
        
    if(A || B == true){
        cont ++;
    }
    if(C && D == true){
        cont++;
    }
    if(E == true){
        cont++;
    }
    if(cont >= 3){
        printf("Seu trabalho sera avaliado.\n");
    }
    else{
        printf("Seu trabalho nao sera avaliado, nota 0.\n");
    }
  
	return 0;
}