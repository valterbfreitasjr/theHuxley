#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int cod,qtd;
    float valor_total, desconto;
    
    scanf("%d%d", &cod, &qtd);
    
    if(cod == 1){
        valor_total = 5.3 * qtd;
        desconto = (valor_total * 1.15) - valor_total;
        if(qtd >= 15 || valor_total >= 40){
            printf("R$ %.2f", valor_total - desconto);
        }
        else{
            printf("R$ %.2f", valor_total);
        }
    }
    
    if(cod == 2){
        valor_total = 6.0 * qtd;
        desconto = (valor_total * 1.15) - valor_total;
        if(qtd >= 15 || valor_total >= 40){
            printf("R$ %.2f", valor_total - desconto);
        }
        else{
            printf("R$ %.2f", valor_total);
        }
    }
    
    if(cod == 3){
        valor_total = 3.2 * qtd;
        desconto = (valor_total * 1.15) - valor_total;
        if(qtd >= 15 || valor_total >= 40){
            printf("R$ %.2f", valor_total - desconto);
        }
        else{
            printf("R$ %.2f", valor_total);
        }
    }
    
    if(cod == 4){
        valor_total = 2.5 * qtd;
        desconto = (valor_total * 1.15) - valor_total;
        if(qtd >= 15 || valor_total >= 40){
            printf("R$ %.2f", valor_total - desconto);
        }
        else{
            printf("R$ %.2f", valor_total);
        }
    }
    
	return 0;
}