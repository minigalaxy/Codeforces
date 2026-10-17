#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;
long long x;

int a[100000];
long long ps[100001];

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        fill(ps, ps + n + 1, 0);

        cin >> n >> k >> x;

        for(int j = 1; j <= n; j++) cin >> a[j];

        for(int j = 1; j <= n; j++){
            ps[j] = ps[j - 1] + a[n - j + 1];
        }

        long long res = n * k + 1;

        if(ps[n] * k >= x){
            res -= x / ps[n] * n;

            res -= lower_bound(ps, ps + n + 1, x % ps[n]) - ps;
        } else res = 0;

        cout << res << '\n';
    }

    return 0;
}
