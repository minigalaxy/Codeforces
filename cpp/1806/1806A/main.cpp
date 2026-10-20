#include <iostream>

using namespace std;

int t;

int a, b, c, d;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c >> d;

        if(d < b || a + d - b < c) cout << -1 << '\n';
        else cout << d - b + a + d - b - c << '\n';
    }

    return 0;
}