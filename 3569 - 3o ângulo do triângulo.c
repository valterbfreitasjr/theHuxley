#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a,b,ter_angulo;
    
    scanf("%f%f", &a,&b);
    
    ter_angulo = 180 - (a+b);
    
    printf("3o angulo=%.6f", ter_angulo);
    
	return 0;
}