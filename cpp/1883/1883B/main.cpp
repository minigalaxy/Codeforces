#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

string s;

int cnt[26];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        fill(cnt, cnt + 26, 0);

        cin >> n >> k;

        cin >> s;

        for(char c: s) cnt[c - 'a']++;

        int res = 0;

        for(int j = 0; j < 26; j++){
            if(cnt[j] % 2 == 1) res++;
        }

        cout << ((k > res || res - k == 0 || res - k == 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}