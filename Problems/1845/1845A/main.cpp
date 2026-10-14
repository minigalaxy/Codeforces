#include <iostream>

using namespace std;

int t;

int n, k, x;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k >> x;

        if(x > 1){
            cout << "YES" << '\n' << n << '\n';

            for(int j = 0; j < n; j++) cout << 1 << ' ';

            cout << '\n';
        } else {
            if(k == 1) cout << "NO" << '\n';
            else if(k == 2){
                if(n % 2 == 0){
                    cout << "YES" << '\n' << n / 2 << '\n';

                    for(int j = 0; j < n; j += 2) cout << 2 << ' ';

                    cout << '\n';
                }
                else cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n' << n / 2 << '\n';

                for(int j = 0; j < n - 3; j += 2) cout << 2 << ' ';

                cout << ((n % 2 == 0) ? 2 : 3) << '\n';
            }
        }
    }

    return 0;
}