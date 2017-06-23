#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, delta, x1, x2;

    scanf(" %lf %lf %lf" , &A, &B, &C);

    if(A!=0.0){

    delta = sqrt(((B*B)-4*A*C));

    if(delta>=0.0){
        x1 = (-B+delta)/(2*A);
        x2 = (-B-delta)/(2*A);

        printf("R1 = %0.5lf\n" , x1);
        printf("R2 = %0.5lf\n" , x2);

    } else printf("Impossivel calcular\n");


    } else printf("Impossivel calcular\n");



return 0;
}