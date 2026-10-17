#include <iostream>

using namespace std;

int t;

int n, k, q;

int a[200'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k >> q;

        for(int j = 0; j < n; j++) cin >> a[j];

        long long res = 0;

        for(int j = 0, cur = 0; j < n; j++){
            if(a[j] <= q){
                cur++;

                if(cur >= k) res += cur - k + 1;
            }
            else cur = 0;
        }

        cout << res << '\n';
    }

    return 0;
}