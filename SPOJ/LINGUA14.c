// 2015-05-18 01:00:21 

#include <stdio.h>
#include <string.h>
#define MAX 1010

int main()
{
     char msg[MAX];
     int i=0, tam=0;

     gets(msg);

     tam = strlen(msg);

     for(i=0;i<tam;i++){
        if(msg[i] != 'p') printf("%c",msg[i]);
          else if(msg[i+1] == 'p') { printf("%c",msg[i+1]); i++;}
          else printf("");
     }

 return 0;
}