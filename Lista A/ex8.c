#include <stdio.h>

int main(){
    int n, d1,d2,d3;
    scanf("%d",&n);
    d1 = n / 100;
    d2 = (n % 100) / 10;
    d3 = (n % 100) % 10;

    int reversed_n = d3 * 100 + d2 * 10 + d1;
    printf("%d\n", reversed_n);


    return 0;
}