#include <stdio.h>
 
int main(){
    int n1,n2,n3,Q,F;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int n[] = {n1,n2,n3};
    F = n1 *100 + n2 * 10 + n3;
    Q = F*F;
    if (n1 > 9 || n2 > 9 || n3 > 9){
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    else{
        printf("%d, %d\n", F, Q);
    }
 
 
    
    return 0;
 
}