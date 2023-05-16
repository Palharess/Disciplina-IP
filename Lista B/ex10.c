#include <stdio.h>
 
int main(){
    int i, j, row, col;
    scanf("%d", &i);
    scanf("%d", &j);
    for(row = 1; row <= i; row++){
        for(col = 1; col <= row - 1 && col <= j; col++){
            printf("(%d,%d)", row,col);
            if (row > 2 && col != j && col != row - 1){
                printf("-");
            }
 
        }
        printf("\n");
    }
 
    return 0;
}