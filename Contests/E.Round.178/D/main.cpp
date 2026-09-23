#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int t;

int n;

int a[400000];

map<long long, int> m;

bool is_prime(long long N){
    for(long long i = 2; i * i <= N; i++){
        if(N % i == 0) return false;
    }
    
    return true;
}

int count_prime(long long N){
    int k;
    if(m.find(N) == m.end()){
        k = N;
            
        for(long long i = 2; i <= N; i++){
            if(is_prime(i)){
                m[k]++;
                N -= i;
            }
        }
    }
    
    return m[k];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        long long sum = 0;
        
        for(int j = 0; j < n; j++) sum += a[j];
        
        sort(a, a + n);
        
        int t = n;
        
        for(int j = 0; j < n; j++){
            if(count_prime(sum) >= t){
                cout << j << '\n';
                
                break;
            }
            
            sum -= a[j];
            t--;
        }
    }
    
    return 0;
}
