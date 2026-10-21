#include <iostream>

using namespace std;

int t;

int n, m, k;

int b[100], c[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> m >> k;

        for(int j = 0; j < n; j++) cin >> b[j];
        for(int j = 0; j < m; j++) cin >> c[j];

        int res = 0;

        for(int bi = 0; bi < n; bi++){
            for(int ci = 0; ci < m; ci++){
                if(b[bi] + c[ci] <= k) res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}