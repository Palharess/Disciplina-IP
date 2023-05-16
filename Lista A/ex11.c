#include <stdio.h>
 
int main(){
    double n1,n2,n3, n4, temp;
    int f, l;
    scanf("%lf", &n1); 
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4); 
    double values[] = {n1,n2,n3,n4};
 
    for (l = 0; l < 4; l++){
        for (f = 0; f < 3; f++){
            if (values[f] > values[f + 1]){
                temp = values[f];
                values[f] = values[f + 1];
                values[f + 1] = temp;
 
            }
        }
    }
    printf("%.2lf, %.2lf, %.2lf, %.2lf\n", values[0],values[1],values[2],values[3]);
    return 0;
}