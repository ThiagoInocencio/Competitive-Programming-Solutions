// 2015-05-12 03:50:37 

#include <stdio.h>

int main()
{

    float A, G, Ra, Rg;

    scanf(" %f %f %f %f" , &A, &G, &Ra, &Rg);

    Ra/A > Rg/G ? printf("A") : printf("G");

    return 0;
}
