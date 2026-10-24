#include <iostream>

using namespace std;

int t;

int a, b, c;

int e[2];

int main(){
    cin >> t;

    while(t--){
        cin >> a >> b >> c;

        e[0] = a - 1;
        e[1] = abs(b - c) + abs(c - 1);

        if(e[0] < e[1]) cout << 1 << '\n';
        else if(e[0] > e[1]) cout << 2 << '\n';
        else cout << 3 << '\n';
    }

    return 0;
}