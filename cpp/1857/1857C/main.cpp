#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, m;

int b[1'000'000];

int main(){
    cin >> t;

    while(t--){
        cin >> n;

        m = n * (n - 1) / 2;

        for(int i = 0; i < m; i++) cin >> b[i];

        sort(b, b + m);

        for(int i = 0, j = n - 1; i < m; i += j--) cout << b[i] << ' ';

        cout << b[m - 1] << '\n';
    }

    return 0;
}