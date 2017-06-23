#include <stdio.h>

int main(){


    int N, t1[6], t2[6];
    char x;

    scanf(" %d", &N);

    while(N>0){
       t1[3] = 0;
       t2[3] = 0;
       t1[5] = 0;
       t2[5] = 0;


       scanf(" %d %c %d" , &t1[0] , &x,  &t2[1]);
       t1[4] = t1[0]-t2[1];
       t2[4] = t2[1]-t1[0];

       t2[5] += t2[1];

       if(t1[0]>t2[1]){
         t1[3] += 3;
       } else if(t2[1]>t1[0]){
         t2[3] += 3;
       } else {
         t1[3] += 1;
         t2[3] += 1;
       }


       scanf(" %d %c %d" , &t2[0], &x ,  &t1[1]);
       t1[4] = t1[0]-t2[1];
       t2[4] = t2[0]-t1[1];

       t1[5] += t1[1];

       if(t1[1]>t2[0]){
         t1[3] += 3;
       } else if(t2[0]>t1[1]){
         t2[3] += 3;
       } else {
         t1[3] += 1;
         t2[3] += 1;
       }

       if(t1[3]>t2[3]) printf("Time 1\n");
        else if(t2[3]>t1[3]) printf("Time 2\n");
         else {
            if(t1[4]>t2[4]) printf("Time 1\n");
             else if(t2[4]>t1[4]) printf("Time 2\n");
               else if(t1[5]>t2[5]) printf("Time 1\n");
                 else if(t2[5]>t1[5]) printf("Time 2\n");
                   else printf("Penaltis\n");
         }

       N--;
    }



	return 0;
}
