#include <stdio.h>
 
int main(){
    int n = 1,dp = 0,di = 0;
    double pares = 0, impares = 0;
    while(2){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        else{
            if (n % 2 == 0){
                pares += n;
                dp++;
            }
            else{
                impares +=n;
                di++;
            }
        }
    }
    if (dp == 0){
        dp = 1;
    }
    if (di == 0){
        di = 1;
    }
    printf("MEDIA PAR: %lf\n", pares/dp);
    printf("MEDIA IMPAR: %lf\n", impares/di);
 
 
    return 0;
}