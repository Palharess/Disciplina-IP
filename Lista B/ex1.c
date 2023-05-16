#include <stdio.h>
 
int main(){
    int n, j;
    double C;
    scanf("%d", &n);
    double num[n];
    double cel[n];
    for (j; j < n; j++){
        double number;
        scanf("%lf", &number);
        num[j] = number;
        C = (5*(number -32))/9;
        cel[j] = C;
        
    }
    for (j = 0; j < n; j++){
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", num[j], cel[j]);
    }
    return 0;
}