#include <stdio.h>
 
int main(){
    double WAGE = 937;
    double rb;
    int fam,escola,etnia;
    scanf("%lf %d %d %d", &rb, &fam, &escola, &etnia);
    if (escola == 2 && rb/fam <= 1.5*WAGE){
        if (etnia == 1 || etnia == 2 || etnia == 3){
            printf("ALUNO COTISTA (L2)\n");
        }
        else{
            printf("ALUNO COTISTA (L1)\n");
        }
    }
    else if (escola == 2 && rb/fam > 1.5*WAGE){
        if (etnia == 1 || etnia == 2 || etnia == 3){
            printf("ALUNO COTISTA (L4)\n");
        }
        else{
            printf("ALUNO COTISTA (L3)\n");
        }
       
    }
    else {
        printf("ALUNO NAO COTISTA\n");
    }
    
    return 0;
}