#include <iostream>

using namespace std;

int t;

int n;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int odd = 0, even = 0;

        for(int j = 0; j < n; j++){
            cin >> a;

            if(a & 1 == 0) even++;
            else odd++;
        }

        cout << ((odd > 0 && (even > 0 || (even == 0 && n % 2 == 1))) ? "YES" : "NO") << '\n';
    }

    return 0;
}