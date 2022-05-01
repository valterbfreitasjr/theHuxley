#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long int N;
    
    scanf("%ld", &N);
    
    if(N > 0){
        if(N % 2 == 0){
            printf("POSITIVO PAR\n");
        }
        else{
            printf("POSITIVO IMPAR\n");
        }
    }
    else if(N < 0){
        if(N % 2 == 0){
            printf("NEGATIVO PAR\n");
        }
        else{
            printf("NEGATIVO IMPAR\n");
        }
    }
    else{
        printf("NULO\n");
        }
    
	return 0;
}