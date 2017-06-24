#include <stdio.h>
#define MAX 100000

int main()
{
    
    int i, N, resul[MAX][5], cont_l=-1, temp=0;
    
    
    scanf(" %d" , &N); 
    do{
    cont_l++;
    
    resul[cont_l][0] = 0;
    resul[cont_l][1] = 0;
    resul[cont_l][2] = 0;
    resul[cont_l][3] = 0;
    temp = N;
    
    while(temp>0){
        
    if(temp>=50) {
         resul[cont_l][0]++;
         temp -= 50;
    } else if(temp>=10){
         resul[cont_l][1]++;
         temp -= 10;
    } else if(temp>= 5){
         resul[cont_l][2]++;
         temp -= 5;
    } else if(temp>=1) {
         resul[cont_l][3]++;
         temp -= 1;  
     }
     
   }  
       
    scanf("%d" , &N);   
    } while(N!=0);
     
   i=0;
   while(i<=cont_l){
       printf("\nTeste %d\n%d %d %d %d\n" , i+1, resul[i][0], resul[i][1] , resul[i][2] , resul[i][3]);    
       i++;
   }
    
    return 0;
}