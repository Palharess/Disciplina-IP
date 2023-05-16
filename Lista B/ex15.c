#include <stdio.h>
 
int main() {
    int n, amigos = 0,n1,j, soma = 0, soma2;
    scanf("%d", &n);
    if (n < 9){
        for(n1 = 1; amigos < 2*n; n1++){
            soma = 0;
            for(j = 1; j < n1 ; j++){
                if(n1 % j ==0){
                    soma += j;
                }
            }
            soma2 = 0;
            for(j = 1; j < soma ; j++){
                if(soma % j ==0){
                    soma2 += j;
                }
            }
            if (soma2 == n1 && soma != soma2){
                amigos++;
                if (amigos % 2 == 0){
                    printf("(%d,%d)\n", soma,soma2);
                }
 
 
            }
        }
    }
 
    return 0;
}