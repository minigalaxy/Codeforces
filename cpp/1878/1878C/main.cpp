#include <iostream>

using namespace std;

int t;

long long n, k, x;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k >> x;

        cout << ((x <= k * (k - 1) / 2 + (n - k + 1) * k && x >= k * (k + 1) / 2) ? "YES" : "NO") << '\n';
    }

    return 0;
}