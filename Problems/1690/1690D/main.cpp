#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

string s;

int main(){
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> k;

        cin >> s;

        int cur = count(s.begin(), s.begin() + k, 'W');
        int res = cur;

        for(int j = k; j < n; j++){
            if(s[j] == 'W') cur++;
            if(s[j - k] == 'W') cur--;

            res = min(res, cur);
        }

        cout << res << '\n';
    }

    return 0;
}