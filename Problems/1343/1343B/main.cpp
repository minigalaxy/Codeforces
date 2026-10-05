#include <iostream>

using namespace std;

int t;

int n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        if(n % 4 == 0){
            cout << "YES" << '\n';

            for(int j = 1; j <= n / 2; j++) cout << j * 2 << ' ';
            for(int j = 1; j < n / 2; j++) cout << j * 2 - 1 << ' ';

            cout << n / 2 * 3 - 1 << '\n';
        }
        else cout << "NO" << '\n';
    }

    return 0;
}