#include <iostream>

using namespace std;

int t;

int a, b, c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        
        cout << ((b - a <= c - b && (a + b + c) % 3 == 0) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
