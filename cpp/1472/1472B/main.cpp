#include <iostream>

using namespace std;

int t;

int n;

int a;

int c[2];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        c[0] = 0, c[1] = 0;

        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> a;

            c[a - 1]++;
        }

        if(c[1] % 2 == 0) cout << ((c[0] % 2 == 0) ? "YES" : "NO") << '\n';
        else {
            if(c[0] >= 2) cout << (((c[0] - 2) % 2 == 0) ? "YES" : "NO") << '\n';
            else cout << "NO" << '\n';
        }
    }

    return 0;
}