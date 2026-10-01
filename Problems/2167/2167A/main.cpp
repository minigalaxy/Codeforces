#include <iostream>

using namespace std;

int t;

int a, b, c, d;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c >> d;
        
        cout << (a == b && b == c && c == d ? "YES" : "NO") << '\n';
    }
    
    return 0;
}

