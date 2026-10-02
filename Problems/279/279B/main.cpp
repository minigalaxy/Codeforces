#include <iostream>

using namespace std;

int n, t;

int a[100'000];

int res = 0;

int main(){
    cin >> n >> t;

    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0, s = 0;

    while(r < n){
        if(s + a[r] <= t){
            s += a[r++];
            res = max(res, r - l);
        }
        else {
            if(l < r) s -= a[l++];
            else l++, r++;
        }
    }

    cout << res;

    return 0;
}