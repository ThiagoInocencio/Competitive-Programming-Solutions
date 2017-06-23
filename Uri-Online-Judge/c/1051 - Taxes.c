#include <stdio.h>

int main() {

  double VR, total=0.00, provi=0.00;

  scanf(" %lf" , &VR);

  if(VR>2000){
  while(VR>2000.00){
     if(VR>4500.00){
        provi = VR-4500.00;
        VR -= provi;
        total = total+(provi*0.28);
     } else if(VR>3000.00){
        provi = VR-3000.00;
        VR -= provi;
        total = total+(provi*0.18);
     } else if(VR>2000.00){
        provi = VR-2000.00;
        VR -= provi;
        total = total+(provi*0.08);
     }
    }

    printf("R$ %0.2lf\n" , total);

  } else  printf("Isento\n");

return 0;
}