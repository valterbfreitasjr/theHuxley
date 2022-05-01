#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A,B,C,D, dif;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    
    dif = (A*B) - (C * D);
    
    printf("DIFERENCA = %d", dif);
	return 0;
}