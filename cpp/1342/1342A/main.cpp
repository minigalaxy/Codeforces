#include <iostream>

using namespace std;

int t;

long long x, y;

long long a, b;

int main(){
    cin >> t;

    while(t--){
        cin >> x >> y;

        cin >> a >> b;

        cout << min(a * (x + y), a * (max(x, y) - min(x, y)) + b * min(x, y)) << '\n';
    }

    return 0;
}