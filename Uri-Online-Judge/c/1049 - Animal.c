#include <stdio.h>


int main(){

    char A[20], B[20], C[20];

    scanf(" %s" , A);
    scanf(" %s" , B);
    scanf(" %s" , C);

    switch(A[0]){
          case 'v' : switch(B[0]){
                          case 'a' : switch(C[0]) {
                                  case 'c' : printf("aguia\n"); break;
                                  case 'o' : printf("pomba\n"); break;
                               } break;

                          case 'm' : switch(C[0]) {
                                  case 'o' : printf("homem\n"); break;
                                  case 'h' : printf("vaca\n"); break;
                               } break;

                        } ; break;

            case 'i' : switch(B[0]){
                          case 'i' : switch(C[2]) {
                                  case 'm' : printf("pulga\n"); break;
                                  case 'r' : printf("lagarta\n"); break;
                               } break;

                          case 'a' : switch(C[0]) {
                                  case 'h' : printf("sanguessuga\n"); break;
                                  case 'o' : printf("minhoca\n"); break;
                               } break;

                        } ; break;
        }




return 0;

}