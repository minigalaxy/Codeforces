#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int a[100];

int res = 0;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    for(int i = 0; i < m && a[i] < 0; i++) res -= a[i];

    cout << res;

    return 0;
}