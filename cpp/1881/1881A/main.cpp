#include <iostream>

using namespace std;

int t;

int n, m;

string x, s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> m;

        cin >> x >> s;

        int res = 0;

        while(x.find(s) == string::npos && (res < 3 || x.size() <= s.size())) x += x, res++;

        if(x.find(s) == string::npos) res = -1;

        cout << res << '\n';
    }

    return 0;
}