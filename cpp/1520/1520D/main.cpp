#include <iostream>
#include <unordered_map>

using namespace std;

int t;

int n;

int a;

unordered_map<int, long long> m;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        m.clear();

        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> a;

            m[a - j]++;
        }

        long long res = 0;

        for(pair<int, long long> p: m) res += p.second * (p.second - 1) / 2;

        cout << res << '\n';
    }

    return 0;
}