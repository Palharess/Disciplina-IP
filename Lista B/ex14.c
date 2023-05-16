#include <stdio.h>
 
int main() {
    int n, i, sum = 0;
    
    scanf("%d", &n);
    printf("%d = %d", n,1);
    sum +=1;
    for (i = 2; i < n; i++){
        if (n % i == 0){
            sum += i;
            printf(" + %d", i);
        }
    }
    printf(" = %d",sum);
    if (sum == n){
        printf(" (NUMERO PERFEITO)\n");
    }
    else{
        printf(" (NUMERO NAO E PERFEITO)\n");
    }
    return 0;
}