#include <iostream>

using namespace std;

int t;

int n;

int a[200000];

int cnt[200001];

int l, r, res[2];

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        fill(cnt, cnt + 200001, 0);
        l = 0;
        r = 0;
        res[0] = -1;
        res[1] = -2;

        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> a[j];

            cnt[a[j]]++;
        }

        while(r < n){
            if(cnt[a[r]] > 1){
                l = ++r;
            } else {
                if(r - l > res[1] - res[0]){
                    res[1] = r;
                    res[0] = l;
                }

                r++;
            }
        }

        if(res[0] == -1) cout << 0 << '\n';
        else cout << res[0] + 1 << ' ' << res[1] + 1 << '\n';
    }

    return 0;
}
