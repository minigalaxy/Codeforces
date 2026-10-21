#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, x;

int a[200'000];

long long w[200'000] = { 0, };

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> x;

        for(int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);

        for(int j = 1; j < n; j++) w[j] = w[j - 1] + 1LL * (a[j] - a[j - 1]) * j;

        int idx = lower_bound(w, w + n, x) - w;

        if(x == w[idx]) cout << a[idx] << '\n';
        else {
            if(idx == n) cout << a[n - 1] + (x - w[n - 1]) / n << '\n';
            else cout << a[idx - 1] + (x - w[idx - 1]) / idx << '\n';
        }
    }

    return 0;
}