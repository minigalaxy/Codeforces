#include <iostream>

using namespace std;

int t;

int n;

int a[500];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        int m = 1'000'000'000;

        for(int j = 0; j < n - 1; j++) m = min(m, a[j + 1] - a[j]);

        if(m >= 0) cout << m / 2 + 1 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}