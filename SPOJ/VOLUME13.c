#include <stdio.h>

int main()
{
    int V, T, X;

    scanf(" %d %d" , &V, &T);

    while(T>0){
        scanf(" %d" , &X);

        if(X>=0) V += X;
        else  V = V-(X*-1);

        if(V>100) V = 100;
        if(V<0) V = 0;

        T--;
    }

    printf("%d" , V);

    return 0;
}