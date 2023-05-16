#include <stdio.h>
#include <math.h>
 
int main(){
    int a,b,c;
    double x1,x2,delta;
    scanf("%d %d %d", &a,&b,&c);
    delta = (b*b) - (4*a*c);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
 
    if (delta >= 0){
        printf( "POSICOES: X1=%.2lf e X2=%.2lf", x1,x2);
        if (x1 > 5 || x1 < -5 || x2 > 5 || x2 < -5){
            printf(" (FORA DO EXPERIMENTO)\n");
 
        }
        else{
            printf("\n");
        }
        if ((a + b + c) % 3 == 0){
            if (c % 2 != 0 && c < a+b){
                if (x1 < 5 || x1 > -5 || x2 < 5 || x2 > -5){
                    printf("\n");
            }
            }
            printf("FATO1: DESAPARECIDA\n");
        }
        if (c % 2 == 0 && c < a+b){
            printf("FATO2: ORIGEM\n");
        }
    }
    else{
        printf("POSICOES IMAGINARIAS\n");
    }
 
    return 0;
}