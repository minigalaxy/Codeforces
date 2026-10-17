#include <iostream>
#include <algorithm>

using namespace std;

int t;

string s;

int c[2];

int res;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        c[0] = count(s.begin(), s.end(), '0');
        c[1] = count(s.begin(), s.end(), '1');
        res = 0;

        for(int j = 0; j < s.size(); j++){
            if(s[j] == '0') c[1]--;
            else c[0]--;

            if(c[0] < 0 || c[1] < 0){
                res = s.size() - j;
                break;
            }
        }

        cout << res << '\n';
    }

    return 0;
}