#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int T, i, tam, num;
    long long unsigned int N = 0, P = 0;
    char NK[30];

    scanf(" %d" , &T);
    while(T>0){

      scanf("%d%s", &num , NK);

      tam = strlen(NK);


      N=num;

	  i = 1;
	  while(((num-(tam*i))>0) ){

	   P = (num-(tam*i));
	   N = N*P;

	   i++;

	  }

	  printf("%llu\n" , N );

      T--;


    }

    return 0;
}