#include <stdio.h>
#include <math.h>
 
int main() {
    double n, erro, rk, rk_anterior = 1.0;
    scanf("%lf", &n);
    scanf("%lf", &erro);
 
    while (1) {
        rk = (rk_anterior + n / rk_anterior) / 2;
        double error = fabs(n - (rk * rk));
        printf("r: %.9lf, err: %.9lf\n", rk, error);
 
        if (error < erro) {
            break;
        }
 
        rk_anterior = rk;
    } 
 
    return 0;
}