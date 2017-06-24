// 2015-05-19 02:09:14 

#include <stdio.h>

int main()
{

    int CV, CE, CS, FV, FE, FS, CP, FP;

    scanf(" %d %d %d %d %d %d" , &CV, &CE, &CS, &FV, &FE, &FS);

    CP = CV*3+CE;
    FP = FV*3+FE;

    CP > FP ? printf("C") : FP > CP ? printf("F") : CS > FS ? printf("C") : FS > CS ? printf("F") : printf("=");


    return 0;
}