#include <iostream>

using namespace std;

int t;

int x, y, n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x >> y >> n;

        cout << (((n / x) * x + y <= n) ? (n / x) * x + y : (n / x) * x + y - x) << '\n';
    }

    return 0;
}