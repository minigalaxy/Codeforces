#include <iostream>

using namespace std;

int t;

int n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int k = 2; (1 << k) - 1 <= n; k++){
            if(n % ((1 << k) - 1) == 0){
                cout << n / ((1 << k) - 1) << '\n';

                break;
            }
        }
    }

    return 0;
}