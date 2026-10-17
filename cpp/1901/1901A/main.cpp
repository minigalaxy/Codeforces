#include <iostream>

using namespace std;

int t;

int n, x;

int a[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> x;

        for(int j = 0; j < n; j++) cin >> a[j];

        int res = max(a[0], (x - a[n - 1]) * 2);

        for(int j = 0; j < n - 1; j++) res = max(res, a[j + 1] - a[j]);

        cout << res << '\n';
    }

    return 0;
}