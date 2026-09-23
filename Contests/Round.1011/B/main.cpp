#include <iostream>
#include <vector>

using namespace std;

int t;

int n;

int a[5000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for(int i = 0; i < t; i++){
        vector<pair<int, int>> oper;

        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        for(int j = n - 1; j > -1; j--){
            if(a[j] == 0){
                int l = j, r = j;

                while(l > 0 && a[l - 1] == 0) l--;

                if(l == r){
                    if(j == n - 1) l--;
                    else r++;
                }

                oper.push_back(make_pair(l + 1, r + 1));

                n -= (r - l);

                j = l;
            }
        }

        if(n == 1){
            oper.push_back(make_pair(1, oper[0].second / 2));
            oper[0].first = oper[0].second / 2 + 1;
            n++;
        }

        oper.push_back(make_pair(1, n));

        cout << oper.size() << '\n';

        for(pair<int, int> op: oper) cout << op.first << ' ' << op.second << '\n';
    }

    return 0;
}
