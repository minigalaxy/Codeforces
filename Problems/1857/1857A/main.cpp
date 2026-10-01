#include <iostream>
#include <numeric>

using namespace std;

int t;

int n;

int a[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        cout << ((accumulate(a, a + n, 0) % 2 == 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}