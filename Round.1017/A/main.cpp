#include <iostream>

using namespace std;

int t;

string s[3];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++) cin >> s[j];
        for(int j = 0; j < 3; j++) cout << s[j][0];
        
        cout << '\n';
    }
    
    return 0;
}
