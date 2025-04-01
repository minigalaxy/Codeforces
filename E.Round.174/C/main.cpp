#include <iostream>

using namespace std;

int t;

int n;
int a[200000];

int cnt[200000];
int memory[200000];

int lefts[200000];
int l;
int rights[200000];
int cr;
int r;

int res;

int R = 998244353;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for(int i = 0, tmp = 1; i < 200000; i++){
        memory[i] = tmp - 1;
        tmp = (tmp * 2) % R;
    }

    cin >> t;

    for(int i = 0; i < t; i++){
        l = 0;
        cr = 0;
        r = 0;

        fill(cnt, cnt + 200000, 0);

        res = 0;

        cin >> n >> a[0];

        if(a[0] == 1) lefts[l++] = 0;
        else if(a[0] == 2) cnt[0]++;
        else if(a[0] == 3) rights[r++] = 0;

        for(int j = 1; j < n; j++){
            cin >> a[j];
            cnt[j] = cnt[j - 1];

            if(a[j] == 1) lefts[l++] = j;
            else if(a[j] == 2) cnt[j]++;
            else if(a[j] == 3) rights[r++] = j;
        }

        for(int j = 0; j < l; j++){
            while(rights[cr] < lefts[j] && cr < r) cr++;

            if(cr >= r) break;

            for(int k = cr; k < r; k++) res = (res + memory[cnt[rights[k]] - cnt[lefts[j]]]) % R;
        }

        cout << res << '\n';
    }

    return 0;
}
