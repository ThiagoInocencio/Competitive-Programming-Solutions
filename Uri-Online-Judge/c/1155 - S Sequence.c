#include <stdio.h>


int main(){

    double S=1.0, i=2;

    while(i<=100.0){
        S = S+(1/i);
        i = i+1.0;
    }

    printf("%0.2lf\n" , S);

return 0;
}