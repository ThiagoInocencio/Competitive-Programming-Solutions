// 2015-05-16 22:53:24

#include <stdio.h>
#define MAX 1000

int main()
{

    int x1, x2, y1, y2, x, y , n, repe=0, caiu=0, resul[MAX], i=1;

    do{

       caiu = 0;
       scanf(" %d %d %d %d" , &x1, &y1, &x2, &y2);
       if((x1==y1)&&(x2==y2)) break;
       repe++;
       scanf(" %d" , &n);

       while(n>0){
         scanf(" %d %d" , &x, &y);
         if((x>=x1)&&(x<=x2)&&(y<=y1)&&(y>=y2)) caiu++;
         n--;
       }

       resul[repe-1] = caiu;
    } while((x1!=y1)&&(x2!=y2));

    while(i<=repe){
        printf("\nTeste %d \n%d\n" , i , resul[i-1]);
        i++;
    }

        return 0;

}