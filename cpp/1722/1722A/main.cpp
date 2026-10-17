#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string s;

string name = "Timur";

int main(){
    sort(name.begin(), name.end());

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        sort(s.begin(), s.end());

        cout << ((s == name) ? "YES" : "NO") << '\n';
    }

    return 0;
}