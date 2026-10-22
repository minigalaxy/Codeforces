#include <iostream>
#include <algorithm>

using namespace std;

int k;

int a[12];

int main(){
    cin >> k;

    for(int i = 0; i < 12; i++) cin >> a[i];

    sort(a, a + 12, greater<>());

    int res = 0;

    for(int i = 0; k > 0 && i < 12; i++, res++) k -= a[i];

    if(k > 0) cout << -1;
    else cout << res;

    return 0;
}