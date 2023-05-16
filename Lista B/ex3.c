#include <stdio.h>
 
int main(){
    int x,y,j, t;
    scanf("%d %d", &x,&y);
    if (x % 2 == 0){
        t = 0;
        for (j = 0; j < y; j++){
            printf("%d ", x + t);
            t += 2;
        }
        printf("\n");
    }
    else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
 
    return 0;
}