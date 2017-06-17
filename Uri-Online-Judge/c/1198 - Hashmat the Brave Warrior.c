#include <stdio.h>

int main()
{
    unsigned long long int X, Y;
    
    while(scanf(" %llu %llu" , &X , &Y) != EOF){
     
     if(X>=Y) printf("%llu\n" , X-Y);
     else if(Y>X) printf("%llu\n" , Y-X); 
      
    }

    return 0;
}