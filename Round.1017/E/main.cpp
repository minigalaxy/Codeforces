#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[200000];

long long s[200000] = { 0, };

bool f[200000];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        int c = 1, o, z;
        
        fill(s, s + n, 0);
        
        for(int j = 0; j < 30; j++){
            o = z = 0;
            
            for(int k = 0; k < n; k++){
                if(a[k] & 1){
                    f[k] = true;
                    o++;
                } else {
                    f[k] = false;
                    z++;
                }
            }
            
            for(int k = 0; k < n; k++){
                if(f[k]) s[k] += 1LL * z * c;
                else s[k] += 1LL * o * c;
                
                a[k] = a[k] >> 1;
            }
            
            c = c << 1;
        }
        
        cout << *max_element(s, s + n) << '\n';
    }
    
    return 0;
}
