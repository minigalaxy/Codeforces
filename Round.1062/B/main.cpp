#include <iostream>
#include <algorithm>

using namespace std;

int q;

int n;

string s, t;

int main()
{
    cin >> q;
    
    for(int i = 0; i < q; i++){
        cin >> n;
        
        cin >> s >> t;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        cout << (s == t ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
