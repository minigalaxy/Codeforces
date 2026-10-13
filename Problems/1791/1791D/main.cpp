#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string s;

int f[200'000];

int idx_max[26], idx_min[26];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        fill(idx_max, idx_max + 26, 0);
        fill(idx_min, idx_min + 26, n);
        fill(f, f + n, 0);

        cin >> s;

        for(int j = 0; j < n; j++){
            idx_max[s[j] - 'a'] = max(idx_max[s[j] - 'a'], j);
            idx_min[s[j] - 'a'] = min(idx_min[s[j] - 'a'], j);
        }

        for(int j = 0; j < 26; j++){
            if(idx_max[j] > idx_min[j]){
                f[idx_max[j]]--;
                f[idx_min[j]]++;
            }
        }

        sort(s.begin(), s.end());

        s.erase(unique(s.begin(), s.end()), s.end());

        int res = s.size();

        for(int j = 0, cur = res; j < n; j++){
            res = max(res, cur += f[j]);
        }

        cout << res << '\n';
    }

    return 0;
}