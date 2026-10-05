#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[10];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        cout << ((min_element(a, a + n) == a) ? "YES" : "NO") << '\n';
    }

    return 0;
}