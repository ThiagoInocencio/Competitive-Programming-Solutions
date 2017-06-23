#include <stdio.h>

int main(){

   int HI, HF, MI, MF, dif;

   scanf(" %d %d %d %d" , &HI, &MI, &HF, &MF);

   if(HI>=HF){

       if(HI==HF){
          if(MI<MF) dif = ((HI*60)+(MI))-((HF*60)+(MF));
            else dif = (((24-HI)*60)-MI)+(HF*60)+MF;
       } else if(HI>HF) dif = (((24-HI)*60)-MI)+(HF*60)+MF;

    } else dif = ((HI*60)+(MI))-((HF*60)+(MF));

  if(dif<0) dif *=-1;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , dif/60 , dif%60);

   return 0;
}