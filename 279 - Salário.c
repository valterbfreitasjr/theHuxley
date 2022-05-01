#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float NUMBER, HOURS, PRICE_HOURS , SALARY;
    scanf("%f%f%f", &NUMBER, &HOURS, &PRICE_HOURS);
    
    SALARY = HOURS * PRICE_HOURS;
    
    printf("NUMBER = %0.f\nSALARY = R$ %.2f", NUMBER, SALARY);
	return 0;
}