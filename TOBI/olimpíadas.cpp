#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
    int n_country;
    int medals;
} Country;

Country countries[115];
Country countries_temp;

int main() {

    int N, M, O, P, B, i, j;

    cin >> N >> M;

    for(i = 1; i <= N; i++) {
        countries[i].n_country = i;
        countries[i].medals = 0;
    }

    for(i = 1; i <= M; i++) {
        cin >> O >> P >> B;
        countries[O].medals++;
        countries[P].medals++;
        countries[B].medals++;
    }

    for(i = 1; i < N; i++) {
        for(j = i+1; j <= N; j++){
            if(countries[i].medals < countries[j].medals) {
                countries_temp = countries[i];
                countries[i] = countries[j];
                countries[j] = countries_temp;
            }

            if(countries[i].medals == countries[j].medals) {
                if(countries[i].n_country > countries[j].n_country) {
                     countries_temp = countries[i];
                     countries[i] = countries[j];
                     countries[j] = countries_temp;
                }
            }

        }
    }

    for(i = 1; i <= N; i++)
       if(i == 1)
         printf("%d" , countries[i].n_country);
       else
         printf(" %d" , countries[i].n_country);

    printf("\n");

    return 0;
}
