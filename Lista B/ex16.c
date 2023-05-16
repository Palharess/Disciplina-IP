#include <stdio.h>
#include <math.h>
 
double fatorial(int number){
    int i;
    double resultado = 1;
    for (i = 1; i <= number; i++){
        resultado *= i;
    }
    return resultado;
}
 
 
int main(){
    double pi = 3.14159265358979323846;
    double x;
    double result = 0,xrad, final;
    int N, i, n;
    scanf("%lf", &x);
    scanf("%d", &N);
    if (N <= 9){
        for (n = 0; n <= N; n++) {
            double divisor = 1;
            result += pow(-1, n) * pow(x, 2*n)/fatorial(2*n);
        }
 
        printf("cos(%.2lf) = %lf\n", x,result);
    }
 
 
    return 0;
}