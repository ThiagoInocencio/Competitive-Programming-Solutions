// 2015-05-19 03:48:46 

#include <stdio.h>

int main()
{

    int N, n1, n2;
    char op;

    scanf("%d" , &N);

    scanf(" %d %c %d", &n1 , &op, &n2);

    switch(op){
       case '*' : N >= n1*n2 ? printf("OK") : printf("OVERFLOW"); break;
       case '+' : N >= n1+n2 ? printf("OK") : printf("OVERFLOW"); break;

    }
    return 0;
}