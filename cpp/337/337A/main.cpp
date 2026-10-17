#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int f[50];

int res = 0;

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++) cin >> f[i];

    sort(f, f + m);

    res = f[m - 1];

    for(int i = 0; i < m - n + 1; i++){
        res = min(res, f[i + n - 1] - f[i]);
    }

    cout << res;

    return 0;
}