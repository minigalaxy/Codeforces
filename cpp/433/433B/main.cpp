#include <iostream>
#include <algorithm>>

using namespace std;

int n;

long long v_s[100'001] = { 0, };

int m;

int t, l, r;

long long u_s[100'001] = { 0, };

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> v_s[i];
        u_s[i] = v_s[i];

        v_s[i] += v_s[i - 1];
    }

    sort(u_s + 1, u_s + n + 1);

    for(int i = 1; i <= n; i++) u_s[i] += u_s[i - 1];

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> t >> l >> r;

        if(t == 1) cout << v_s[r] - v_s[l - 1];
        else cout << u_s[r] - u_s[l - 1];

        cout << '\n';
    }

    return 0;
}