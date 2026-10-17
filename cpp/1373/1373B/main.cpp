#include <iostream>
#include <algorithm>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        cout << ((min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1')) % 2 == 1) ? "DA" : "NET") << '\n';
    }

    return 0;
}