#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int t;

int n, m;

int a[200000], b[200000];
vector<int> c[200000];

int res;

void solve(int i, int cnt, int u){
    if(cnt == m){
        res = min(res, u);
        return;
    }
    
    if(i == n) return;
    
    auto nxt = lower_bound(c[cnt].begin(), c[cnt].end(), i);
    
    if(nxt != c[cnt].end()) solve(*nxt + 1, cnt + 1, u);
    
    if(u == 0 && i < n) solve(i + 1, cnt + 1, b[cnt]);
}

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        res = 1000000001;
            
        cin >> n >> m;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        for(int j = 0; j < m; j++) cin >> b[j];
        
        for(int j = 0; j < m; j++) c[j].clear();
        
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(a[j] >= b[k]) c[k].push_back(j);
            }
        }
        
        solve(0, 0, 0);
        
        cout << ((res == 1000000001) ? -1 : res) << '\n';
    }
    
    return 0;
}
