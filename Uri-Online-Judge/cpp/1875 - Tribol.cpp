#include <stdio.h>
#include <iostream>

using namespace std;

int C, P, points[3], tie, winner, maior, winners;
char M, S;

int main() {

cin >> C;

 while(C>0) {


 	cin >> P;

 	winner = -1;
 	maior = -1;
 	winners = 0;

 	for(int i = 0; i < 3; i++)
 		  points[i] = 0;

 	while(P>0) {


 		cin >> M >> S;

 		switch(M) {
 			case 'G' :
 			       switch(S) {
 			       	   case 'B':  points[0] += 2; break;
 			       	   case 'R':  points[0]++;break;
 			       }
 			break;

 			case 'B' :
 			       switch(S) {
 			       	   case 'R':  points[1] += 2; break;
 			       	   case 'G':  points[1]++;break;
 			       }
 			break;

 			case 'R' :
 			       switch(S) {
 			       	   case 'G':  points[2] += 2; break;
 			       	   case 'B':  points[2]++;break;
 			       }
 			break;

 		}

 		P--;
 	}

    if(points[0]==points[1] && points[1]==points[2]) {
 			 cout << "trempate\n";
 		}  else {

 		 	for(int i = 0; i < 3; i++) {
 		 		if(points[i] == maior) {
 		 			winner = i;
 		 			winners++;
 		 		} else if(points[i] > maior) {
 		 			maior = points[i];
 		 			winner = i;
 		 			winners = 1;
 		 		}
 		 	}

 		 	if(winners>1) cout << "empate\n";
 		 	else
 		 		switch (winner) {
 		 		case 0 : cout << "green\n"; break;
 		 		case 1 : cout << "blue\n"; break;
 		 		case 2 : cout << "red\n"; break;
 		 	   }
 		 }

 	C--;
 }

}