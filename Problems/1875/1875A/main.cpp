#include <iostream>

using namespace std;

int t;

int a, b, n;

int x[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> n;

        for(int j = 0; j < n; j++) cin >> x[j];

        long long res = b;

        for(int j = 0; j < n; j++) res += min(a - 1, x[j]);

        cout << res << '\n';
    }

    return 0;
}