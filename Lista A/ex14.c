#include <stdio.h>
#include <math.h>
 
int main(){
    float a,b,c, temp;
    int i, l, f;
    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float values[] = {a,b,c};
    if (i == 1){
        for (l = 0; l < 3; l++){
            for (f = 0; f < 2; f++){
                if (values[f] > values[f + 1]){
                    temp = values[f];
                    values[f] = values[f + 1];
                    values[f + 1] = temp;
 
                }
            }
        }
        printf("%.2f %.2f %.2f\n", values[0],values[1],values[2]); 
    }
    
    if (i == 2){
        for (l = 0; l < 3; l++){
            for (f = 0; f < 2; f++){
                if (values[f] < values[f + 1]){
                    temp = values[f];
                    values[f] = values[f + 1];
                    values[f + 1] = temp;
 
                }
            }
        }
        printf("%.2f %.2f %.2f\n", values[0],values[1],values[2]);
    }
    if (i == 3){
        for (l = 0; l < 3; l++){
            for (f = 0; f < 2; f++){
                if (values[f] > values[f + 1]){
                    temp = values[f];
                    values[f] = values[f + 1];
                    values[f + 1] = temp;
 
                }
            }
        }
        printf("%.2f %.2f %.2f\n", values[1],values[2],values[0]);
    }
    
 
    return 0;
}
 
 