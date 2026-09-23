#include <iostream>

using namespace std;

int n;

string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s.size() > 10) cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
        else cout << s << '\n';
    }

    return 0;
}