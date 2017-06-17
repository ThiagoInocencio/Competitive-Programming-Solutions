#include <iostream>
#include <stdio.h> 

using namespace std;
 
int main() {

  	 int n, i, j, minor;

  	 scanf("%d" , &n);
			  while(n!=0) {
					for(i=1; i<=n ; i++) {
						for(j=1; j<=n;j++) {
							minor = j;
							if(i < minor) minor = i;
							if((n+1)-j < minor) minor = (n+1)-j;
							if((n+1)-i < minor) minor = (n+1)-i;
							if(j==n) printf("%3d\n" , minor);
							  else 	printf("%3d " , minor);
						
						}
					}
				printf("\n");
				scanf("%d" , &n);
			  }
 
    return 0;
}