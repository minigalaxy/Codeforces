#include <iostream>
#include <numeric>

using namespace std;

int t;

int n;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n - 1; j++) cin >> a[j];

        cout << -accumulate(a, a + n - 1, 0) << '\n';
    }

    return 0;
}