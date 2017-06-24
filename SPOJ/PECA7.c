// 2015-05-17 07:27:39 

#include <stdio.h>

int main()
{
    int N, tot = 0, num, i;

    scanf("%d" , &N);

    for(i=N; i>=1;i--)
        tot += i;

    for(i=N-1; i>=1;i--){
        scanf("%d" , &num);
        tot -= num;
    }

    printf("\n%d" , tot);

    return 0;
}