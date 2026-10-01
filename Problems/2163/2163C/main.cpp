#include <iostream>
#include <set>

using namespace std;

int t;

int n;

int a[2][200'000];

int mn[2][200'000], mx[2][200'000];

int res[400'001];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        fill(res + 1, res + 2 * n + 1, 2 * n + 1);
            
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[0][j];
        for(int j = 0; j < n; j++) cin >> a[1][j];
        
        mn[0][0] = mx[0][0] = a[0][0];
        mn[1][n - 1] = mx[1][n - 1] = a[1][n - 1];
        
        for(int j = 1; j < n; j++){
            mn[0][j] = min(mn[0][j - 1], a[0][j]);
            mx[0][j] = max(mx[0][j - 1], a[0][j]);
            
            mn[1][n - 1 - j] = min(mn[1][n - j], a[1][n - 1 - j]);
            mx[1][n - 1 - j] = max(mx[1][n - j], a[1][n - 1 - j]);
        }
        
        for(int j = 0; j < n; j++){
            for(int l = 1; l <= min(mn[0][j], mn[1][j]); l++){
                if(res[l] == 0) res[l] = max(mx[0][j], mx[1][j]);
                else {
                    if(max(mx[0][j], mx[1][j]) < res[l]) res[l] = max(mx[0][j], mx[1][j]);
                    else break;
                }
            }
        }
        
        int sum = 0;
    
        for(int j = 1; j <= 2 * n; j++){
            if(res[j] < 2 * n + 1) sum += 2 * n - res[j] + 1;
        }
        
        cout << sum << '\n';
    }
    
    return 0;
}
