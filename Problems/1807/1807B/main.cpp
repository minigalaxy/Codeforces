#include <iostream>

using namespace std;

int t;

int n;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 0;

        for(int j = 0; j < n; j++){
            cin >> a;

            if(a % 2 == 0) res += a;
            else res -= a;
        }

        cout << ((res > 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}