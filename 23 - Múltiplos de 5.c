#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,m;
    
    scanf("%d%d", &n,&m);
    
    while(n%5!=0){
        n++;
    }
    
    while(n <= m && n%5==0){
        if(m-n>=5){
            printf("%d|", n);
            n=n+5;
        }
        else{
            printf("%d", n);
            n=n+5;
        }
        
    }
    
	return 0;
}