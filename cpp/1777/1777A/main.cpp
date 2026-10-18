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

        for(int j = 0; j < n; j++){
            cin >> a[j];

            a[j] &= 1;
        }

        cout << a + n - unique(a, a + n) << '\n';
    }

    return 0;
}