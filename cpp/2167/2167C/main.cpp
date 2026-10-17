#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[200000];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        bool o = false, e = false;
        
        for(int j = 0; j < n; j++){
            cin >> a[j];
            
            if(a[j] % 2 == 0) e = true;
            else o = true;
        }
        
        if(o && e) sort(a, a + n);
        
        for(int j = 0; j < n; j++) cout << a[j] << ' ';
        
        cout << '\n';
    }
    
    return 0;
}
