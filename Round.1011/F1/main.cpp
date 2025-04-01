#include <iostream>

using namespace std;

int t;

int n, k;

int a[3000];

int num[3001];

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        fill(num + 1, num + k + 1, 0);

        for(int j = 0; j < n; j++) cin >> a[j];

        int cnt = 0, res = 0;

        for(int j = 0; j < k; j++){
            if(num[a[j]]++ == 0) res = max(res, ++cnt);
        }

        for(int j = k; j < n; j++){
            if(--num[a[j - k]] == 0) cnt--;
            if(num[a[j]]++ == 0) res = max(res, ++cnt);
        }

        cout << k - res << '\n';
    }

    return 0;
}
