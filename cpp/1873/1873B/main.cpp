#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[9];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        (*min_element(a, a + n))++;

        int res = 1;

        for(int j = 0; j < n; j++) res *= a[j];

        cout << res << '\n';
    }

    return 0;
}