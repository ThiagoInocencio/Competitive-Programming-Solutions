#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
    int next_check;
    int last_mod;
    int n_Car;
    int n_checks;
} Car;

Car cars[120];
Car car_temp;

int main() {

    int K, N, M, X, Y, i = 0, j = 0;

    cin >> K >> N >> M;

    for(int i = 1; i <= N; i++) {
        cars[i].next_check = 1;
        cars[i].n_checks = 0;
        cars[i].last_mod = -1;
        cars[i].n_Car = i;
    }

    for(int i = 1; i <= M; i++) {

        cin >> X >> Y;

        if(cars[X].next_check == Y) {

            cars[X].last_mod = i;
            cars[X].next_check++;
            cars[X].n_checks++;

            if(cars[X].next_check > K) {
                cars[X].next_check = 1;
            }

        }

    }

    for(int i = 1; i < N; i++) {
        for(int j = i + 1; j <= N; j++) {

            if(cars[i].n_checks < cars[j].n_checks) {
                car_temp = cars[i];
                cars[i] = cars[j];
                cars[j] = car_temp;
            }

            if(cars[i].n_checks == cars[j].n_checks) {
                if(cars[i].last_mod > cars[j].last_mod) {
                    car_temp = cars[i];
                    cars[i] = cars[j];
                    cars[j] = car_temp;
                }
            }
        }
    }


    for(int i = 1; i <= N; i++)
        if(i == 1)
            printf("%d" , cars[i].n_Car);
        else
            printf(" %d", cars[i].n_Car);

    printf("\n");

    return 0;
}
