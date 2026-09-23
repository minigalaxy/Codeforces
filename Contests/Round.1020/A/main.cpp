#include <iostream>

using namespace std;

int t;

int n;

string s;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        cin >> s;
        
        int o = 0;
        
        for(char c: s) if(c == '1') o++;
        
        cout << o * n + n - o - o << '\n';
    }
    
    return 0;
}
