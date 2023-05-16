#include <stdio.h>
 
int main(){
    int n;
    double result = 0;
    double j;
    scanf("%d", &n);
    if (n > 1){
        for (j = 1; j < n + 1; j++){
            result += 1/j;
        }
        printf("%lf\n", result);
    }
    else{
        printf("Numero invalido!\n");
    }
 
    return 0;
}