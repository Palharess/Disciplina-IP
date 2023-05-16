#include <stdio.h>
 
int main(){
    int n, d1,d2,d3,d4,d5, r;
    scanf("%d",&n);
    if (n <= 99999){
        if (n > 9999){
            d1 = n / 10000;
            d2 = (n % 10000) / 1000;
            d3 = ((n % 10000) % 1000) / 100;
            d4 = (((n % 10000) % 1000) % 100 )/ 10;
            d5 = (((n % 10000) % 1000) % 100 ) % 10;
            r = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 *10 + d1;
            if (n == r){
                printf("PALINDROMO\n");
            }
            else{
                printf("NAO PALINDROMO\n");
            }
        }
        else if (n <= 9999 && n >= 1000){
            d1 = n / 1000;
            d2 = (n % 1000) / 100;
            d3 = ((n % 1000) % 100) / 10;
            d4 = (((n % 1000) % 100) % 10 );
            r = d4 * 1000 + d3 * 100 + d2 *10 + d1;
            if (n == r){
                printf("PALINDROMO\n");
            }
            else{
                printf("NAO PALINDROMO\n");
            }
        }
        else if (n<= 999 && n> 99 ){
            d1 = n / 100;
            d2 = (n % 100) / 10;
            d3 = ((n % 100) % 10);
 
            r = d3 * 100 + d2 *10 + d1;
            if (n == r){
                printf("PALINDROMO\n");
            }
            else{
                printf("NAO PALINDROMO\n");
            }
        }
        else if (n <=99 && n>9){
            d1 = n / 10;
            d2 = (n % 10);
 
            r = d2 *10 + d1;
            if (n == r){
                printf("PALINDROMO\n");
            }
            else{
                printf("NAO PALINDROMO\n");
            }
        }
        else if (n<= 9){
            printf("PALINDROMO\n");
 
        }
    }
 
    else{
        printf("NUMERO INVALIDO\n");
    }
    
 
 
 
    return 0;
}