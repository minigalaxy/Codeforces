#include <iostream>

using namespace std;

int t;

string n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = (n.size() - 1) * 9;

        bool b = true;

        for(int j = 1; j < n.size(); j++){
            if(n[j] < n[0]) b = false;
            else if(n[j] > n[0]) break;
        }

        cout << res + n[0] - '1' + b << '\n';
    }

    return 0;
}