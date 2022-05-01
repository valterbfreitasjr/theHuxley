#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,m;
    scanf("%d%d", &n,&m);
    
    while((n <= m) || (m >= n)){
        if(n%2 != 0){
            printf("%d\n", n);
        }
        n++;
    }
    
	return 0;
}