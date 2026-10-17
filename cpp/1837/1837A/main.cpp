#include <iostream>

using namespace std;

int t;

int x, k;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x >> k;

        if(x % k == 0) cout << 2 << '\n' << x - 1 << ' ' << 1 << '\n';
        else cout << 1 << '\n' << x << '\n';
    }

    return 0;
}