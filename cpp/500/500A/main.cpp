#include <iostream>

using namespace std;

int n, t;

int a[30'000];

int me = 0;

int main(){
    cin >> n >> t;

    for(int i = 0; i < n - 1; i++) cin >> a[i];

    while(me < t - 1) me += a[me];

    cout << ((me == t - 1) ? "YES" : "NO");

    return 0;
}