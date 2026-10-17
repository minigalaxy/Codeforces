#include <iostream>
#include <queue>
#include <set>

using namespace std;

int t;

int n, k, x;

int a[200'000];

priority_queue<pair<int, pair<int, int>>> P;

set<int> used;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        P.clear();
            
        cin >> n >> k >> x;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        sort(a, a + n);
        
        P.push({ a[0], { 0, 0 } });
        P.push({ x, { 0, x - a[n - 1] } });
        
        for(int j = 0; j < n - 1; j++){
            int d = a[j + 1] - a[j], ct = (a[j] + a[j + 1]) / 2;
            
            P.push({ d, { 0,  ct } });
        }
        
        for(int j = 0; j < k; j++){
            pair<int, pair<int, int>> tmp = P.top();
            P.pop();
            
            if(tmp.second.first == 0){
                
                used.insert(P.second.second);
                cout << P.second.second << ' ';
                
                if(tmp.first > 0){
                    tmp.second.first++;
                    tmp.first--;
                    P.push(tmp);
                }
            } else {
                if(tmp.first ){
                    
                }
            }
        }
    }
    
    return 0;
}
