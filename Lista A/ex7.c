#include <stdio.h>
 
int main(){
    int n, i, j;
    int valores[8];
    scanf("%d", &n);
    if (n >= 0 && n <= 255){
        for (i = 7; i >= 0; i--) {
            valores[i] = n % 2;
            n = n / 2 ;
        }
        for (j = 0; j !=8; j++){
            printf("%d", valores[j]);
        }
 
    }
    else{
        printf("Numero invalido!\n");
    }
    return 0;
}