#include <iostream>

using namespace std;

int n;

int x, y, z;

int main(){
    cin >> n;

    for(int i = 0, tx, ty, tz; i < n; i++){
        cin >> tx >> ty >> tz;

        x += tx;
        y += ty;
        z += tz;
    }

    cout << ((x == 0 && y == 0 && z == 0) ? "YES" : "NO");

    return 0;
}