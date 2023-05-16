#include <stdio.h>
#include <math.h>
 
 
int main(){
    int n, i, test = 1, num;
 
    
    while(1){
        scanf("%d", &n);
        num = n;
        if (n > 1){
            break;
        }
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
 
    }
    if (n > 1){
        printf("%d = ", num);
        for (i = 2; i <= n; i+= 0){
            if (num % i == 0){
                num /= i;
                test *= i;
                if (test == n){
                    printf("%d",i);
                }
                else{
                    printf("%d x ",i);
                }
                
            } 
            else{
                i++;
            }
        }
        printf("\n");
    }
 
    return 0;
}