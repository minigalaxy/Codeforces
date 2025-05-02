#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, k;

int a[200000], b;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        int x = -1;
        bool f = true;
        
        int mn = k, mx = 0;
            
        for(int j = 0; j < n; j++){
            cin >> b;

            if(b != -1){
                if(a[j] + b != x){
                    if(x == -1) x = a[j] + b;
                    else f = false;
                }
            } else {
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
            }
        }
        
        if(!f) cout << "0\n";
        else if(x != -1) cout << (mx <= x && mn + k >= x) << '\n';
        else cout << max(0, k - mx + mn + 1) << '\n';
    }
    
    return 0;
}
