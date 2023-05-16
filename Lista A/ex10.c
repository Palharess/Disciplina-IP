#include <stdio.h>
 
int main(){
    //  A < B, B< C , A < C
    int n1,n2,n3, l, temp, f;
    char c1,c2,c3;
    scanf("%d %d %d\n", &n1, &n2, &n3); 
    scanf("%c%c%c",&c1, &c2, &c3);
    int values[] = {n1,n2,n3};
    char let[] = {c1,c2,c3};
    for (l = 0; l < 3; l++){
        if (let[l] == 'A'){
            let[l] = 0;
        }
        else if (let[l] == 'B'){
            let[l] = 1;
        }
        else if (let[l] == 'C'){
            let[l] = 2;
        }
    }
    for (l = 0; l < 3; l++){
        for (f = 0; f < 2; f++){
            if (values[f] < values[f + 1]){
                temp = values[f];
                values[f] = values[f + 1];
                values[f + 1] = temp;
 
            }
        }
    }
    for (l = 0; l < 3; l++){
        if (let[l] == 2){
            printf("%d ",values[0]);
        }
        else if (let[l] == 1){
            printf("%d ",values[1]);
        }
        else if (let[l] == 0){
            printf("%d ",values[2] );
        }
    }
    printf("\n");
    return 0;
}