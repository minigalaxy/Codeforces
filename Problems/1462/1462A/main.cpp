#include <iostream>

using namespace std;

int t;

int n;

int b[300];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> b[j];

        for(int j = 0; j < n / 2; j++) cout << b[j] << ' ' << b[n - j - 1] << ' ';
    
        if(n % 2 == 1) cout << b[n / 2];

        cout << '\n';
    }

    return 0;
}