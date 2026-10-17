#include <iostream>
#include <algorithm>

using namespace std;

int n;

string s;

int cnt[26][26] = { 0, };

pair<string, int> res = { "", 0 };

int main(){
    cin >> n;

    cin >> s;

    for(int i = 0; i < n - 1; i++){
        if(++cnt[s[i] - 'A'][s[i + 1] - 'A'] > res.second) res = { s.substr(i, 2), cnt[s[i] - 'A'][s[i + 1] - 'A'] };
    }
    
    cout << res.first;

    return 0;
}