#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int n;

int a[100];

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    cout << *max_element(a, a + n) * n - accumulate(a, a + n, 0);

    return 0;
}
