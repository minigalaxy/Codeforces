#include <iostream>
#include <algorithm>

using namespace std;

int n, l;

int a[1'000];

double d = 0.0;

int main(){
    cin >> n >> l;

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    d = max(a[0], l - a[n - 1]);

    for(int i = 0; i < n - 1; i++){
        d = max(d, (a[i + 1] - a[i]) / 2.0);
    }

    cout << fixed;
    cout.precision(9);

    cout << d;

    return 0;
}