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

        if(a[0] == a[n - 1]) cout << "Yes" << '\n';
        else if(count(a, a + n, a[0]) + count(a, a + n, a[n - 1]) == n && abs(count(a, a + n, a[0]) - count(a, a + n, a[n - 1])) <= 1) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}