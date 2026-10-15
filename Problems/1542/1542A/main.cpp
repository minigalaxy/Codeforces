#include <iostream>

using namespace std;

int t;

int n;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int even = 0, odd = 0;

        for(int j = 0; j < 2 * n; j++){
            cin >> a;

            if(a % 2 == 0) even++;
            else odd++;
        }

        cout << ((even == odd) ? "Yes" : "No") << '\n';
    }

    return 0;
}