#include <iostream>

using namespace std;

int t;

int n, x;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> x;

        if(n <= 2) cout << 1 << '\n';
        else cout << (n - 3) / x + 2 << '\n';
    }

    return 0;
}