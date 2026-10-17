#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int s[50];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> s[j];

        sort(s, s + n);

        int res = 1000;

        for(int j = 0; j < n - 1; j++) res = min(res, s[j + 1] - s[j]);

        cout << res << '\n';
    }

    return 0;
}