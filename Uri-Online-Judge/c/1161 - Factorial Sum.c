#include <stdio.h>
#include <stdlib.h>

long long unsigned calcfat(int n){

    int i;
    long long unsigned fat=n;
    if(n==0) return 1;
    for(i=1;i<n;i++){
      fat *= i;
    }
    return fat;
}

int main(){

   int i, x, y;
   long long unsigned n[25];

   for(i=0;i<=20;i++){
     n[i] = calcfat(i);
   }

   while(scanf(" %d %d", &x, &y)!=EOF){
    printf("%llu\n",n[x]+n[y]);
   }


 return 0;
}