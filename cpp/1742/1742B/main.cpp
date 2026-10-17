#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);

        bool res = true;

        for(int j = 0; res && j < n - 1; j++){
            if(a[j] == a[j + 1]) res = false;
        }

        cout << ((res) ? "YES" : "NO") << '\n';
    }

    return 0;
}