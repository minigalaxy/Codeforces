#include <iostream>

using namespace std;

int t;

int n, a[200000];

int mx[200000] = { 0, };
long long sum[200001] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        for(int j = 1; j < n; j++) mx[j] = max(mx[j - 1], a[j - 1]);
        
        for(int j = 1; j <= n; j++) sum[j] = sum[j - 1] + a[n - j];
        
        for(int j = 1; j <= n; j++){
            if(mx[n - j] > a[n - j]) cout << sum[j] - a[n - j] + mx[n - j] << ' ';
            else cout << sum[j] << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}
