#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        int m = *max_element(a, a + n);

        if(m == *min_element(a, a + n)) cout << -1 << '\n';
        else {
            cout << n - count(a, a + n, m) << ' ' << count(a, a + n, m) << '\n';

            for(int j = 0; j < n; j++){
                if(a[j] != m) cout << a[j] << ' ';
            }

            cout << '\n';
            
            for(int j = 0; j < count(a, a + n, m); j++) cout << m << ' ';

            cout << '\n';
        }
    }

    return 0;
}