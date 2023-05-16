#include <stdio.h>
 
int main(){
    int n,i,j, f = 1;
    scanf("%d", &n);
    if ( n >= 2){
        for (i = 1; i <= n - 1; i++){
            for (j = i + 1; j <= n; j++){
                if(j != i){
                    printf("Final %d: Time%d X Time%d\n", f, i, j);
                    f++;
                }
 
 
            }
        }
    }
    else{
        printf("Campeonato invalido!\n");
    }
    
 
 
    return 0;
}