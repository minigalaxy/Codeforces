#include <iostream>
#include <vector>

using namespace std;

int t;

int n;

int a[100];

bool d[100] = { false, };

int cnt[10001];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        fill(cnt, cnt + 10001, 0);

        for(int j = 0; j < n; j++){
            cin >> a[j];
        
            fill(d[j], d[j] + n, false);
            
            for(int k = 1; k <= a[j]; k++){
                if(a[j] % k == 0) d[j][k] = true;
            }
        }
        
        for(int j = 1; j <= 10000; j++){
            for(int k = 0; k < n; k++) if(d[k][j]) cnt[j]++;
        }
        
        for(int j = 1; j < 10000; j++){
            for(int k = j + 1; k <= 10000; k++){
                
            }
        }
    }
    
    return 0;
}
