#include <iostream>

using namespace std;

int t;

int n, x;

bool b[30] = { false, };
int s = 0;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> x;
        
        if(n == 1 && x == 0) cout << "-1\n";
        else {
            int cnt = 0;
                
            for(int j = 0; j < 30; j++){
                if(x & (1 << j)){
                    b[j] = true;
                    s = j;
                    cnt++;
                }
            }
        
            if(cnt >= n) cout << x << '\n';
            else {
                int res = n - cnt;
                    
                if(x == 0){
                    if(n % 2 == 1) res += 3;
                } else if(x == 1){
                    if(n % 2 == 0) res += 4;
                } else {
                    if(n % 2 == 0) res += x ^ 1;
                    else res += x ;
                }
                
                cout << res << '\n';
            }
        }
    }
    
    return 0;
}
