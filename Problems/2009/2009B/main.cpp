#include <iostream>

using namespace std;

int t;

int n;

string beatmap[500];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> beatmap[j];

        for(int j = n - 1; j >= 0; j--) cout << beatmap[j].find('#') + 1 << ' ';

        cout << '\n';
    }

    return 0;
}