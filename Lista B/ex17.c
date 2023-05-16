#include <stdio.h>
#include <math.h>
 
double fatorial(int n){
    int j;
    double result = 1;
    for( j = 1; j <=n; j++){
        result *= j;
    }
    return result;
}
 
 
int main(){
    int N, i;
    double result = 0;
    double x;
    scanf("%lf", &x);
    scanf("%d", &N);
 
    for (i = 0; i <= N; i++){
        result += pow(x,i)/fatorial(i);
    }
    printf("e^%.2lf = %.6lf\n", x,result);
    return 0;
}