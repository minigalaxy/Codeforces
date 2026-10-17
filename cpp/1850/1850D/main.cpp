#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

int a[200'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);

        int res = 0;

        for(int j = 0, c = 0; j < n - 1; j++){
            if(a[j + 1] - a[j] <= k) res = max(res, ++c);
            else c = 0;
        }

        cout << n - (res + 1) << '\n';
    }

    return 0;
}