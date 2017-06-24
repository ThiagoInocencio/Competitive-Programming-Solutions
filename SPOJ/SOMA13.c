#include <stdio.h>

int main()
{

    int a, b, c, d, e, f, N, i;

    scanf(" %d %d %d %d" , &a, &b, &c, &d);

    if(b==d){
        e = b;
        f = a+c;
    } else {
        e = b*d;
        f = (a*d)+(b*c);
     }

     N = e > f ? e : f;
     i=1;


     while(i<=N){
        if((e%i==0)&&(f%i==0)){
            e= e/i;
            f= f/i;
            i=1;
        }
        i++;
     }

     printf("%d %d" , f , e);

    return 0;
}
