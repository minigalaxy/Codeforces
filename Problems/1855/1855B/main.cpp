#include <iostream>

using namespace std;

int t;

long long n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 0;

        for(int j = 1; n % j == 0 && j <= n; j++) res++;

        cout << res << '\n';
    }

    return 0;
}