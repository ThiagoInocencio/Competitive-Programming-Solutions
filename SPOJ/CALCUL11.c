// 2015-05-18 02:45:50

#include <stdio.h>

int main()
{
    double resul=1;
    int N, X;
    char OP;

    scanf(" %d" , &N);

    while(N>0){

    scanf(" %d %c" , &X , &OP);

       switch(OP){

           case '*' : resul *= X; break;

           case '/' : resul /= X; break;

       }

      N--;
    }

    printf("%0.0lf" , resul);

    return 0;

}
