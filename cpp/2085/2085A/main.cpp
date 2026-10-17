#include <iostream>
#include <string>

using namespace std;

int t;

int n, k;

string s;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        cin >> s;

        bool f = false;

        if(k == 0){
            for(int j = 0; j < s.size() / 2; j++){
                if(s[j] < s[s.size() - j - 1]) f = true;
                else if(s[j] > s[s.size() - j - 1]) break;
            }
        } else {
            for(int j = 0; j < s.size() - 1; j++){
                if(s[j] != s[j + 1]) f = true;
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
