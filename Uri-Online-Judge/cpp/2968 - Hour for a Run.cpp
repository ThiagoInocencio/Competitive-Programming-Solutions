#include <iostream>
#include <cmath>


using namespace std;

int main() {

    int V, N;
    // total tracks
    double tt = 0.0;

    cin >> V >> N;

    int needed_tracks = 0;

    tt = V * N;

    for(int i = 1; i <= 9; i++) {

        needed_tracks = ceil(tt * (i/10.0));

        if(needed_tracks > tt) cout << tt;
            else cout << needed_tracks;

        if(i==9) continue;
        else cout << " ";
    }

    cout << "\n";

    return 0;
}