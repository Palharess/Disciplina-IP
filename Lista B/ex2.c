#include <stdio.h>
 
int main(){
    int n, j;
    int result;
    scanf("%d", &n);
    if (n > 5 && n < 2000){
        for (j = 2; j <= n; j+= 2){
            result = j * j;
            printf("%d^2 = %d\n",j,result);
        }
    }
 
    return 0;
}