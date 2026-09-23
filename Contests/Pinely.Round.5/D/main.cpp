#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;

int n;

vector<int> idx[300'001];

int cnt[300'000];

vector<int> edge[300'000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++){
            cnt[j] = 0;
            idx[j].clear();
            edge[j].clear();
        }
        
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            
            idx[a].push_back(j); 
        }
        
        int sum = 0;
        
        for(int j = 1; j < n; j++){
            for(int a: idx[j]){
                for(int b: idx[j + 1]){
                    if(a < b){
                        cnt[a]++;
                        cnt[b]++;
                        edge[a].push_back(b);
                        edge[b].push_back(a);
                        sum++;
                    }
                }
            }
        }
        
        cout << sum << '\n';
        
        for(int j = 0; j < n; j++) cout << cnt[j] << ' ';
        cout << '\n';
        
        int res = 0;
        
        while(sum > 0){
            int m = max_element(cnt, cnt + n) - cnt;
            
            sum -= cnt[m];
            
            cnt[m] = 0;
            
            for(int p: edge[m]){
                cout << m << '-' << p << '\n';
                    
                cnt[p]--;
            }
            
            res++;
        }
        
        cout << '\n' << res << '\n' << '\n' << '\n';
    }
    
    return 0;
}
