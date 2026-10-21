#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, m;

string a;

int cnt[7];

int main(){
    cin >> t;

    while(t--){
        cin >> n >> m;

        cin >> a;

        int res = 0;

        for(int i = 0; i < 7; i++) res += max(0, m - count(a.begin(), a.end(), 'A' + i));
    
        cout << res << '\n';
    }

    return 0;
}