#include <stdio.h>
 
int main(){
    float F, P, C, M;
    scanf("%f", &F);
    scanf("%f", &P);
    C = 5*(F - 32)/9;
    M = P * 25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", C);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", M);
 
    
    return 0;
 
}