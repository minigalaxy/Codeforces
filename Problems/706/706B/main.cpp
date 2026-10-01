#include <iostream>
#include <algorithm>

using namespace std;

int n;

int x[100'000];

int q;

int m[100'000];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> x[i];

    cin >> q;

    for(int i = 0; i < q; i++) cin >> m[i];

    sort(x, x + n);

    for(int i = 0; i < q; i++){
        cout << upper_bound(x, x + n, m[i]) - x << '\n';
    }

    return 0;
}