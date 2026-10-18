#include <iostream>

using namespace std;

int t;

int x, y;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        int lx = 1'000, rx = -1'000;

        for(int j = 0; j < 4; j++){
            cin >> x >> y;

            lx = min(lx, x);
            rx = max(rx, x);
        }

        cout << (rx - lx) * (rx - lx) << '\n';
    }

    return 0;
}