#include <stdio.h>
 
int main(){
    int n, j, i, count = 0, tryy = 1;
    scanf("%d", &n);
    if (n > 0){
        int array[n];
        for (j =0; j < n; j++){
            scanf("%d", &array[j]);
        }
        for (j = 0; j <= n - 2; j++){
            for (i = 0; i < n - 1; i++){
                if ((1 + i + j) >= n){
                    break;
                }
                if (array[j + i] < array[i + 1 + j]){
                    if (i != 0){
                        if (array[j]  > array[i + 1 + j]){
                            break;
                        }
                    }
                    tryy += 1;
                }
                else{
                    break;
                }
            }
            if (tryy > count){
                count = tryy;
            }
            tryy = 1;
        }
        printf("O comprimento do segmento crescente maximo e: %d\n", count);
    }
    return 0;
}