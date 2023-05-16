#include <stdio.h>
#include <math.h>
 
int main(){
    float A,B,C,D;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
 
    D = B*B - 4*A*C;
    printf("O VALOR DE DELTA E = %.2f\n", D);
    return 0;
 
}