#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[100];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        sort(a, a + n);
        
        bool flag = true;
        
        for(int j = 1; j < n - 1 && flag; j += 2){
            if(a[j] != a[j + 1]) flag = false;
        }
        
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
