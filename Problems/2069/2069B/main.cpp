#include <iostream>
#include <set>

using namespace std;

int t;

int n, m;

int a[700][700];

char strangers[490001];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int res;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        int mx = 1;

        cin >> n >> m;

        fill(strangers, strangers + n * m + 1, 0);

        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cin >> a[j][k];

                strangers[a[j][k]] = 1;
            }
        }

        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(strangers[a[j][k]] == 1){
                    for(int l = 0; l < 4; l++){
                        int nx = j + dx[l];
                        int ny = k + dy[l];

                        if(nx > -1 && nx < n && ny > -1 && ny < m && a[nx][ny] == a[j][k]){
                            strangers[a[j][k]] = 2;
                            mx = 2;
                        }
                    }
                }
            }
        }

        res = 0;

        for(int j = 1; j <= n * m; j++){
            res += strangers[j];
        }

        cout << res - mx << '\n';
    }

    return 0;
}
