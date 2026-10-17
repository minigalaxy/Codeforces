#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n, X;

int a[100'000];

int res[100'000];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> X;
        
        long long l = 0;
        
        for(int j = 0; j < n; j++){
            cin >> a[j];
            
            l += a[j];
        }
        
        l /= X;
        
        sort(a, a + n);
        
        long long sum = 0, bonus = 0;
        
        int idx[3] = { 0, n - l, 0 };
        
        while(idx[2] < n){
            if(idx[0] < n - l && idx[1] < n){
                if(sum + a[idx[1]] >= X){
                    res[idx[2]++] = a[idx[1]];
                    sum += a[idx[1]] - X;
                    bonus += a[idx[1]];
                    idx[1]++;
                } else {
                    res[idx[2]++] = a[idx[0]];
                    sum += a[idx[0]];
                    idx[0]++;
                }
            } else {
                if(idx[0] < n - l){
                    res[idx[2]++] = a[idx[0]];
                    idx[0]++;
                } else {
                    res[idx[2]++] = a[idx[1]];
                    bonus += a[idx[1]];
                    idx[1]++;
                }
                
            }
        }
        
        cout << bonus << '\n';
        
        for(int j = 0; j < n; j++) cout << res[j] << ' ';
        
        cout << '\n';
    }
    
    return 0;
}
