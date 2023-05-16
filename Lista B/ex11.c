#include <stdio.h>
 
int main(){
    int T, i, n1,n2;
    scanf("%d", &T);
    int array[2*T];
    for (i = 0; i < 2*T; i += 2){
        scanf("%d %d", &n1, &n2);
        n1 = (n1/100) + (((n1 % 100) / 10) * 10) + (((n1 % 100) % 10) * 100);
        n2 = (n2/100) + (((n2 % 100) / 10) * 10) + (((n2 % 100) % 10) * 100);
        array[i] = n1;
        array[i + 1] = n2;
    }
    for(i = 0; i < 2*T; i += 2){
        if(array[i] > array[i + 1]){
            printf("%d\n", array[i]);
        }
        else{
            printf("%d\n", array[i + 1]);
        }
    }
 
 
    return 0;
}