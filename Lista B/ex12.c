#include <stdio.h>
#include <math.h>
 
int main(){
    int n,i,j,k, soma, hit, prev = 0, temp;
    double h;
 
    scanf("%d", &n);
//esse loop vai pegar de 1 até n
    for (i = 1; i <= n; i++ ){
        for (j = i + 1; sqrt((j*j) + (i*i)) <= n; j++){ // esse loop pega o segundo cateto de 1 até n com o primeiro que é o i
            h = sqrt((j*j) + (i*i));
            hit = sqrt((j*j) + (i*i));
            if (h == hit){
                prev++;
                
            }
        }
    } 
    int cateto[prev], cateto2[prev], hipotenusa[prev];
    int contador = 0;
    for (i = 1; i <= n; i++ ){
        for (j = i + 1; sqrt((j*j) + (i*i)) <= n; j++){ // esse loop pega o segundo cateto de 1 até n com o primeiro que é o i
            h = sqrt((j*j) + (i*i));
            hit = sqrt((j*j) + (i*i));
            if (h == hit){
                if (i > j){
                    cateto[contador] = j;
                    cateto2[contador] = i;
                    hipotenusa[contador] = h;
                    contador++;
                }
                else{
                    cateto[contador] = i;
                    cateto2[contador] = j;
                    hipotenusa[contador] = h;
                    contador++;
                }
                
            }
        }
    }
    for (j = 0; j < contador - 1; j++){
        for (i = j + 1; i < contador; i++){
            if(prev == 1){
                break;
            }
            else{
                if (hipotenusa[j] > hipotenusa[i]){ 
 
 
                    temp = hipotenusa[j];
                    hipotenusa[j] = hipotenusa[i];
                    hipotenusa[i] = temp;
 
                    temp = cateto[j];
                    cateto[j] = cateto[i];
                    cateto[i] = temp;
 
                    temp = cateto2[j];
                    cateto2[j] = cateto2[i];
                    cateto2[i] = temp;
                }
 
            }
        }
    }
 
 
    for (j = 0; j < contador - 1; j++){
        for (i = j + 1; i < contador; i++){
            if (hipotenusa[j] == hipotenusa[i]){
                if(cateto[j] > cateto[i]){
                    temp = cateto[j];
                    cateto[j] = cateto[i];
                    cateto[i] = temp;
                    temp = cateto2[j];
                    cateto2[j] = cateto2[i];
                    cateto2[i] = temp;
                }
            }
 
        }
    }
    
 
    for (i = 0; i < prev; i++){
        printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa[i],cateto[i],cateto2[i]);
    }
 
    return 0;
}