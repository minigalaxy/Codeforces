#include <iostream>

using namespace std;

int T;

long long a, b, n;

long long fibo[47] = { 0, 1, };

int main(){
    for(int i = 0; i < 47 - 2; i++) fibo[i + 2] = fibo[i + 1] + fibo[i];

    cin >> T;

    while(T--){
        cin >> a >> b >> n;

        int res = 0;

        for(int i = 1; i < 47; i++){
            if(min(a, b) * fibo[i - 1] + max(a, b) * fibo[i] > n){
                res = i - 1;

                break;
            }
        }

        cout << res << '\n';
    }

    return 0;
}