#include <stdio.h>
#include <math.h>
 
int main(){
    double a, b, c, delta, x1, x2, temp;
    scanf("%lf %lf %lf", &a,&b,&c);
    delta = (b*b) -( 4 *a *c );
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    if (x1 > x2){
        temp = x2;
        x2 = x1;
        x1 = temp;
 
    }
    if (delta > 0){
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
        
    }
    else if (delta == 0){
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
        
    }
 
    else if (delta < 0){
        printf("RAIZES IMAGINARIAS\n");
        
    }
    
    return 0;
 
}