#include <stdio.h>


int main(){

   double N1, N2, N3, N4, media, exame, media2;

   scanf(" %lf %lf %lf %lf" , &N1, &N2, &N3 , &N4);

   media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

   if(media>=7.0)  printf("Media: %0.1lf\nAluno aprovado.\n" , media);
   else if(media<5.0) printf("Media: %0.1lf\nAluno reprovado.\n" , media);
   else {
        scanf(" %lf" , &exame);
        media2 = (media+exame)/2;
        if(media2>=5.0) printf("Media: %0.1lf\nAluno em exame.\nNota do exame: %0.1f\nAluno aprovado.\nMedia final: %0.1f\n" , media, exame, media2);
        else printf("Media: %0.1lf\nAluno em exame.\nNota do exame: %0.1f\nAluno reprovado.\nMedia final: %0.1f\n" , media, exame, media2);


     }

return 0;

}