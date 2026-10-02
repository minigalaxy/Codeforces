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

        sort(a, a + n);

        int res = 0;

        for(int j = 0; j < n - 1; j++){
            if(a[j + 1] - a[j] > 1) res++;
        }

        cout << ((res < 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}