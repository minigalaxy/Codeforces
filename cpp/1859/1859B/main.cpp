#include <iostream>

using namespace std;

int t;

int n;

int m;

int a[25'000][2];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> m;

            a[j][0] = a[j][1] = 1'000'000'000;

            for(int k = 0, t = 0; k < m; k++){
                cin >> t;

                if(t <= a[j][0]){
                    a[j][1] = a[j][0];
                    a[j][0] = t;
                }
                else if(t < a[j][1]) a[j][1] = t;
            }
        }

        int min_idx = 0;
        
        for(int j = 1; j < n; j++){
            if(a[j][1] < a[min_idx][1]) min_idx = j;
        }

        for(int j = 0; j < n; j++) a[min_idx][1] = min(a[min_idx][1], a[j][0]);

        long long res = 0LL;

        for(int j = 0; j < n; j++) res += a[j][1];

        cout << res << '\n';
    }

    return 0;
}