#include <stdio.h>


int main(){

    double vr;

    scanf(" %lf" , &vr);

    if(vr<=400.00){
        printf("Novo salario: %0.2lf\n" , vr*1.15);
        printf("Reajuste ganho: %0.2lf\n" , (vr*1.15)-vr);
        printf("Em percentual: 15 %%\n");
    } else if(vr<=800.00) {
        printf("Novo salario: %0.2lf\n" , vr*1.12);
        printf("Reajuste ganho: %0.2lf\n" , (vr*1.12)-vr);
        printf("Em percentual: 12 %%\n");
    } else if(vr<=1200.00) {
        printf("Novo salario: %0.2lf\n" , vr*1.10);
        printf("Reajuste ganho: %0.2lf\n" , (vr*1.10)-vr);
        printf("Em percentual: 10 %%\n");
    } else if(vr<=2000.00) {
        printf("Novo salario: %0.2lf\n" , vr*1.07);
        printf("Reajuste ganho: %0.2lf\n" , (vr*1.07)-vr);
        printf("Em percentual: 7 %%\n");
    } else {
        printf("Novo salario: %0.2lf\n" , vr*1.04);
        printf("Reajuste ganho: %0.2lf\n" , (vr*1.04)-vr);
        printf("Em percentual: 4 %%\n");
    }

return 0;

}