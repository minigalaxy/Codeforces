#include <iostream>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        int max_c = 2, cur_c = 2;

        for(int j = 1; j < n; j++){
            if(s[j] == s[j - 1]) max_c = max(max_c, ++cur_c);
            else cur_c = 2;
        }

        cout << max_c << '\n';
    }

    return 0;
}