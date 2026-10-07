#include <iostream>

using namespace std;

int t;

int n, q;

int a[200'001] = { 0, };

int l, r, k;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> q;

        for(int j = 1; j <= n; j++){
            cin >> a[j];

            a[j] %= 2;
            a[j] ^= a[j - 1];
        }

        for(int j = 0; j < q; j++){
            cin >> l >> r >> k;

            cout << ((a[n] ^ (((k % 2) * ((r - l + 1) % 2)) ^ (a[r] ^ a[l - 1])) == 1) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}