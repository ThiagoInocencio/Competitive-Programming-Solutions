#include <stdio.h>


int main(){

    double S=1.0, i=3, k=2;

    while(i<=39){
        S = S+(i/k);
        i += 2;
        k *= 2;
    }

    printf("%0.2lf\n" , S);

return 0;
}