#include <stdio.h>

int main(){

    int x1, y1, x2, y2, dif_l, dif_c;

    scanf(" %d %d %d %d" , &x1, &y1, &x2, &y2);
    while((x1 != 0) && (y1 != 0) && (x2 != 0) && (y2 != 0)){

      if((x1 == x2) && (y1 == y2)) {
      	printf("0\n");
      } else if((x1==x2) || (y1==y2)) {
      	printf("1\n");
      }else {

        if(x1<x2) {
        	dif_l = x2-x1;
        } else dif_l = x1-x2;

        if(y1<y2) {
        	dif_c = y2-y1;
        } else dif_c = y1-y2;

       if(dif_c==dif_l) printf("1\n");
         else printf("2\n");
      }

     scanf(" %d %d %d %d" , &x1, &y1, &x2, &y2);
    }

	return 0;
}