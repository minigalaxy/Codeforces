#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++) cin >> a[j];

        cout << ((count(a, a + n, k) > 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}