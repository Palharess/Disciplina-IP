#include <stdio.h>
 
int main(){
    float a,b,c,d,e,f, X,Y;
    float r1,r2,r3;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    X = (c -(b))/(a);
    X = (f*b - e*c)/ (d*b - a*e);
    Y = (f*a - d*c)/ (-b*d + e*a);
    printf("O VALOR DE X E = %.2f\n", X);
    printf("O VALOR DE Y E = %.2f\n", Y);
 
 
    return 0;
 
}