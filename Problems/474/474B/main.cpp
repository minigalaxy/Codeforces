#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100'000];

int m;

int q;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n - 1; i++) a[i + 1] += a[i];

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> q;

        cout << (lower_bound(a, a + n, q) - a + 1) << '\n';
    }

    return 0;
}