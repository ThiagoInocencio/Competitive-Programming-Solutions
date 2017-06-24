// 2015-05-22 18:34:06 

#include <stdio.h>

int main()
{
    int P, R;

    scanf(" %d %d" , &P, &R);

    switch(P){
       case 0 : printf("C"); break;
       case 1 : switch(R){
                    case 0: printf("B"); break;
                    case 1: printf("A"); break;
                 }
    }
   return 0;
}
