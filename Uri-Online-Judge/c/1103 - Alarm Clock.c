#include <stdio.h>

int main()
{

    int H1, M1, H2, M2, cont_m;

    scanf(" %d %d %d %d" , &H1, &M1, &H2, &M2);
    while(H1 !=0 || M1 !=0 || H2 !=0 || M2 !=0){

        if(H2<H1){
          cont_m = (((24-H1)*60)-M1)+(H2*60+M2);

        } else if(H2==H1){
           if(M2<M1){
              cont_m = (((24-H1)*60)-M1)+(H2*60+M2);
           } else {
               cont_m = ((H2*60)+M2)-((H1*60)+M1);
           }

        } else {

           cont_m = ((H2*60)+M2)-((H1*60)+M1);
        }

        printf("%d\n" , cont_m);



      scanf(" %d %d %d %d" , &H1, &M1, &H2, &M2);
    }


    return 0;
}