#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor, total;
    scanf("%f", &valor);
    
    total = valor + (valor * 0.1);
    
    printf("%.2f", total);
	return 0;
}