#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        reverse(a, a + n);

        if(a[0] != a[n - 1]){
            cout << "YES" << '\n';

            cout << a[n - 1] << ' ';

            for(int j = 0; j < n - 1; j++) cout << a[j] << ' ';

            cout << '\n';
        }
        else cout << "NO" << '\n';
    }

    return 0;
}