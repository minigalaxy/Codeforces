#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int t;

int n, k;

int a[30], b[30];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++) cin >> a[j];
        for(int j = 0; j < n; j++) cin >> b[j];

        sort(a, a + n);
        sort(b, b + n, greater<int>());

        for(int j = 0; j < k; j++){
            if(b[j] > a[j]) swap(a[j], b[j]);
            else break;
        }

        cout << accumulate(a, a + n, 0) << '\n';
    }

    return 0;
}