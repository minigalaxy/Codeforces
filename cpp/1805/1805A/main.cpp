#include <iostream>

using namespace std;

int t;

int n;

int a[1'001] = { 0, };

int main(){
    cin >> t;

    while(t--){
        cin >> n;

        for(int i = 1; i <= n; i++) cin >> a[i], a[i] ^= a[i - 1];
    
        if(n % 2 == 0) cout << ((a[n] == 0) ? 0 : -1) << '\n';
        else cout << a[n] << '\n';
    }

    return 0;
}