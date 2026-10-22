#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[50], b[50], moves[50];

int main(){
    cin >> t;

    while(t--){
        cin >> n;

        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 0; i < n; i++) cin >> b[i];

        int min_a = *min_element(a, a + n);
        int min_b = *min_element(b, b + n);

        for(int i = 0; i < n; i++) moves[i] = max(a[i] - min_a, b[i] - min_b);

        long long res = 0;

        for(int i = 0; i < n; i++) res += moves[i];

        cout << res << '\n';
    }
}