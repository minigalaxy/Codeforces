#include <iostream>

using namespace std;

int t;

int n;

int b[200'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> b[j];

        int res = n;

        for(int j = 0; j < n - 1; j++){
            if(b[j] > b[j + 1]) res++;
        }

        cout << res << '\n';

        cout << b[0] << ' ';

        for(int j = 0; j < n - 1; j++){
            if(b[j] <= b[j + 1]) cout << b[j + 1] << ' ';
            else if(b[j + 1] == 1) cout << 1 << ' ' << b[j + 1] << ' ';
            else cout << b[j + 1] - 1 << ' ' << b[j + 1] << ' ';
        }

        cout << '\n';
    }

    return 0;
}