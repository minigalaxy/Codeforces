#include <iostream>

using namespace std;

int t;

int n, m, l, r;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> m >> l >> r;
        
        if(m <= r) cout << "0 " << m << '\n';
        else cout << max(l, r - m) << ' ' << r << '\n';
    }
    
    return 0;
}
