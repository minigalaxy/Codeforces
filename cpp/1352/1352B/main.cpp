#include <iostream>

using namespace std;

int t;

long long n, k;

int main(){
    cin >> t;

    while(t--){
        cin >> n >> k;

        if(n % 2 == 0){
            if(k % 2 == 0 && n >= k){
                cout << "YES" << '\n';

                for(int i = 0; i < k - 1; i++) cout << 1 << ' ';

                cout << n - (k - 1) << '\n';
            } else if(n >= k * 2) {
                cout << "YES" << '\n';

                for(int i = 0; i < k - 1; i++) cout << 2 << ' ';

                cout << n - 2 * (k - 1) << '\n';
            }
            else cout << "NO" << '\n';
        } else {
            if(k % 2 == 1 && n >= k){
                cout << "YES" << '\n';

                for(int i = 0; i < k - 1; i++) cout << 1 << ' ';

                cout << n - (k - 1) << '\n';
            }
            else cout << "NO" << '\n';
        }
    }

    return 0;
}