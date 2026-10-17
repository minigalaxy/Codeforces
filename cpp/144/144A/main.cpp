#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100];

int res;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    res = max_element(a, a + n) - a;

    reverse(a, a + n);

    res += min_element(a, a + n) - a;

    if(res >= n) res--;

    cout << res;

    return 0;
}