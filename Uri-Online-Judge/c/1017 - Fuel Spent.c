#include <stdio.h>

int main(){

    double horas, KM;

    scanf(" %lf %lf" , &horas , &KM);

    printf("%0.3lf\n" , (horas*KM)/12);

return 0;

}