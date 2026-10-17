#include <iostream>

using namespace std;

int t;

int n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 0, m = 0;

        for(int x = 2; x <= n; x++){
            for(int k = 1; k * x <= n; k++){
                if(k * (k + 1) / 2 * x > m){
                    res = x;
                    m = k * (k + 1) / 2 * x;
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}