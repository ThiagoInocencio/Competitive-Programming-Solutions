#include <stdio.h>

int main()
{

    int N, win[3] = {0,0,0}, i;

    scanf(" %d" , &N);
    while(N!=0){
        i=N;
        win[1] = 0;
        win[2] = 0;

        while(i>0){
            scanf(" %d" , &win[0]);
            win[0] == 0 ? win[1]++ : win[2]++;
            i--;
        }

     printf("Mary won %d times and John won %d times\n" , win[1], win[2]);

     scanf(" %d" , &N);
    }

    return 0;
}