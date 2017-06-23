#include <stdio.h>
#include <stdlib.h>


int selmin(int v[], int i, int n){
    
    int j, k=i;
    for(j=i+1;j<n;j++)
      if(v[j]<v[k])
        k=j;
        
    return k;
    
}

int selection(int v[], int n){

  int i, k , x;
  
  for(i=0;i<n-1;i++){
   
     k = selmin(v,i,n);
     x = v[i];
     v[i] = v[k];
     v[k] = x;
  }       

}

int main(){
    
     int T, x, i, N[12], j;
     
     scanf(" %d" , &T);
    
     j=0;
     while(j<T){
       scanf(" %d" , &x);
         for(i=0;i<x;i++) scanf(" %d" , &N[i]);
         selection(N,x);
         printf("Case %d: %d\n", j+1 , N[x/2]);
                
                
      j++;
     }   
    
return 0;    
}