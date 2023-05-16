#include <stdio.h>
 
int main(){
    int n, j;
    double f = 1;
    scanf("%d", &n);
 
    for (j = n; j > 0; j--){
        f *= j;
    }
    printf("%d! = %.0lf\n", n,f);
 
    return 0;
}